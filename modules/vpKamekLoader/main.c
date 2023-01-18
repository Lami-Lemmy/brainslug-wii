#include <bslug.h>
#include <rvl/cache.h>
#include <io/fat-sd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "dvd.h"
#include "replacements.h"

BSLUG_MODULE_GAME("RMC?");
BSLUG_MODULE_NAME("Variety Pack V3 loader");
BSLUG_MODULE_VERSION("v1.2");
BSLUG_MODULE_AUTHOR("Lami, InvoxiPlayGames");
BSLUG_MODULE_LICENSE("MIT");

#define loaderPath "sd:/varietypack/boot/loader.bin" // Path to the loader
int ret;
bool mounted;
void _start();

static int MountSDCard()
{
    int r = SD_Mount();
    mounted = (r == 0);
    return r;
}

static void vpKamekLoader()
{
    // Load the loader
    if (!mounted)
    {
        MountSDCard();
    }
    static FILE_STRUCT fs;
    ret = SD_open(&fs, loaderPath, O_RDONLY);
    // Error out if we cannot open the loader
    if (ret == -1)
    {
        printf("Could not open the loader");
    }
    int loaderSize = SD_read(&fs, 0x80004000, fs.filesize);
    // Error out if we cannot read the loader
    if (loaderSize == -1)
    {
        printf("Could not read the loader");
    }
    // Close the file
    SD_close(&fs);

    // Insert branch to the loader
    switch (*(char *)0x80000003) // Get the region from the game ID
    {
    case 'P':
        *(unsigned int *)0x8000A3F4 = 0x4BFF9C1C;
        break;
    case 'E':
        *(unsigned int *)0x8000A3B4 = 0x4BFF9C5C;
        break;
    case 'J':
        *(unsigned int *)0x8000A350 = 0x4BFF9CC0;
        break;
    case 'K':
        *(unsigned int *)0x8000A4FC = 0x4BFF9B14;
        break;
    default:
        // The only way we get here is if the region letter is one that mkw doesn't have, so crash the game
        printf("Invalid region");
        // The following code sets the screen to red and loop forever
        unsigned int *HW_VISOLID = (unsigned int *)0xcd000024;
        *HW_VISOLID = 0x5aef5101;
        for (;;)
            ;
    }

    _start();
}

BSLUG_MUST_REPLACE(_start, vpKamekLoader);

// Emvolution - File replacement through Brainslug
// Copyright (c) 2020 InvoxiPlayGames
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
const int numreplacements = ARRAY_SIZE(replacements);

static uint32_t fdlookup[ARRAY_SIZE(replacements)];

static bool MyDVDOpen(const char *path, DVDFileInfo *fileInfo)
{
    printf("DVDOpen %s\n", path);
    if (!mounted)
        MountSDCard();
    for (int i = 0; i < numreplacements; i++)
    {
        if (strcmp(path, replacements[i][0]) == 0 || strcmp(path, replacements[i][0] + 1) == 0)
        {
            int realentry = i;
            printf("SDOpen %s\n", replacements[realentry][1]);
            static FILE_STRUCT fs;
            fdlookup[realentry] = SD_open(&fs, replacements[realentry][1], O_RDONLY);
            if (fdlookup[realentry] == -1)
                return DVDOpen(path, fileInfo); // fall back to the DVD if SD_open fails
            fileInfo->start = 0xFFFF0000 + (realentry);
            fileInfo->filesize = fs.filesize;
            return true;
        }
    }
    bool response = DVDOpen(path, fileInfo);
    return response;
}
BSLUG_REPLACE(DVDOpen, MyDVDOpen);

static int32_t MyDVDConvertPathToEntrynum(const char *path)
{
    printf("DVDConvertPathToEntrynum %s\n", path);
    if (!mounted)
        MountSDCard();
    for (int i = 0; i < numreplacements; i++)
    {
        if (strcmp(path, replacements[i][0]) == 0 || strcmp(path, replacements[i][0] + 1) == 0)
        {
            return 10000 + i;
        }
    }
    int32_t entrynum = DVDConvertPathToEntrynum(path);
    return entrynum;
}
BSLUG_REPLACE(DVDConvertPathToEntrynum, MyDVDConvertPathToEntrynum);

static bool MyDVDFastOpen(int32_t entrynum, DVDFileInfo *fileInfo)
{
    printf("DVDFastOpen %i\n", entrynum);
    if (!mounted)
        MountSDCard();
    if (entrynum >= 10000)
    {
        int realentry = entrynum - 10000;
        printf("SDFastOpen %s\n", replacements[realentry][1]);
        static FILE_STRUCT fs;
        fdlookup[realentry] = SD_open(&fs, replacements[realentry][1], O_RDONLY);
        if (fdlookup[realentry] == -1)
            return false; // we don't have the original path/entrynum, so return false
        fileInfo->start = 0xFFFF0000 + (realentry);
        fileInfo->filesize = fs.filesize;
        return true;
    }
    bool response = DVDFastOpen(entrynum, fileInfo);
    return response;
}
BSLUG_REPLACE(DVDFastOpen, MyDVDFastOpen);

static bool MyDVDClose(DVDFileInfo *fileInfo)
{
    if (fileInfo->start >= 0xFFFF0000)
    {
        int realentry = fileInfo->start - 0xFFFF0000;
        return (SD_close(fdlookup[realentry]) == 0);
    }
    return DVDClose(fileInfo);
}
BSLUG_REPLACE(DVDClose, MyDVDClose);

static int MyDVDReadPrio(DVDFileInfo *fileInfo, void *buf, int len, int offset, int prio)
{
    if (fileInfo->start >= 0xFFFF0000)
    {
        int realentry = fileInfo->start - 0xFFFF0000;
        printf("SDReadPrio (%i, %i) off %i len %i... ", fdlookup[realentry], realentry, offset, len);
        SD_seek(fdlookup[realentry], offset, 0);
        int bytes = SD_read(fdlookup[realentry], buf, len);
        DCFlushRange(buf, len);
        printf("read %i bytes\n", bytes);
        return bytes;
    }
    return DVDReadPrio(fileInfo, buf, len, offset, prio);
}
BSLUG_REPLACE(DVDReadPrio, MyDVDReadPrio);