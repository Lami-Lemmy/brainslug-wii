const char *replacements[][2] = {
    {"/varietypack/P.bin", "sd:/varietypack/boot/P.bin"},
    {"/Race/Common.szs", "sd:/varietypack/common/Common.szs"},
    {"/Boot/Strap/eu/English.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/eu/Dutch.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/eu/French.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/eu/German.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/eu/Italian.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/eu/Spanish_EU.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/us/English.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/us/French.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/us/Spanish_US.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/jp/jp.szs", "sd:/varietypack/boot/English.szs"},
    {"/Boot/Strap/kr/Korean.szs", "sd:/varietypack/boot/English.szs"},
    {"/rel/lecode-PAL.bin", "sd:/varietypack/boot/lecode-PAL.bin"},
    {"/rel/lecode-USA.bin", "sd:/varietypack/boot/lecode-USA.bin"},
    {"/rel/lecode-JAP.bin", "sd:/varietypack/boot/lecode-JAP.bin"},
    {"/rel/lecode-KOR.bin", "sd:/varietypack/boot/lecode-KOR.bin"},
    {"/Scene/UI/Globe.szs", "sd:/varietypack/scene/Globe.szs"},
    {"/Scene/UI/Globe_R.szs", "sd:/varietypack/scene/Globe.szs"},
    {"/Scene/UI/Globe_E.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Globe_F.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Globe_G.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Globe_I.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Globe_J.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Globe_M.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Globe_Q.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Globe_S.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Globe_U.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti.szs", "sd:/varietypack/scene/MenuMulti.szs"},
    {"/Scene/UI/MenuMulti_R.szs", "sd:/varietypack/scene/MenuMulti.szs"},
    {"/Scene/UI/MenuMulti_E.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_F.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_G.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_I.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_J.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_K.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_M.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_Q.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_S.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuMulti_U.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle.szs", "sd:/varietypack/scene/MenuSingle.szs"},
    {"/Scene/UI/MenuSingle_R.szs", "sd:/varietypack/scene/MenuSingle.szs"},
    {"/Scene/UI/MenuSingle_E.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_F.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_G.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_I.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_J.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_K.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_M.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_Q.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_S.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/MenuSingle_U.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race.szs", "sd:/varietypack/scene/Race.szs"},
    {"/Scene/UI/Race_R.szs", "sd:/varietypack/scene/Race.szs"},
    {"/Scene/UI/Race_E.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_F.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_G.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_I.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_J.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_K.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_M.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_Q.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_S.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Race_U.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title.szs", "sd:/varietypack/scene/Title.szs"},
    {"/Scene/UI/Title_R.szs", "sd:/varietypack/scene/Title.szs"},
    {"/Scene/UI/Title_E.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_F.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_G.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_I.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_J.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_K.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_M.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_Q.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_S.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Title_U.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel.szs", "sd:/varietypack/scene/Channel.szs"},
    {"/Scene/UI/Channel_R.szs", "sd:/varietypack/scene/Channel.szs"},
    {"/Scene/UI/Channel_E.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_F.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_G.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_I.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_J.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_K.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_M.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_Q.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_S.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/Scene/UI/Channel_U.szs", "sd:/varietypack/scene/SuperMenu_E.szs"},
    {"/thp/course/banana.thp", "sd:/varietypack/video/video.thp"},
    {"/thp/course/cup_select.thp", "sd:/varietypack/video/video.thp"},
    {"/thp/course/flower.thp", "sd:/varietypack/video/video.thp"},
    {"/thp/course/kinoko.thp", "sd:/varietypack/video/video.thp"},
    {"/thp/course/konoha.thp", "sd:/varietypack/video/video.thp"},
    {"/thp/course/koura.thp", "sd:/varietypack/video/video.thp"},
    {"/thp/course/special.thp", "sd:/varietypack/video/video.thp"},
    {"/thp/course/star.thp", "sd:/varietypack/video/video.thp"},
    {"/thp/course/thunder.thp", "sd:/varietypack/video/video.thp"},
    {"/Race/Common/049/GeoHitTableItem.bin", "sd:/varietypack/course/musicParkCommon/GeoHitTableItem.bin"},
    {"/Race/Common/049/GeoHitTableItemObj.bin", "sd:/varietypack/course/musicParkCommon/GeoHitTableItemObj.bin"},
    {"/Race/Common/049/GeoHitTableKart.bin", "sd:/varietypack/course/musicParkCommon/GeoHitTableKart.bin"},
    {"/Race/Common/049/GeoHitTableKartObj.bin", "sd:/varietypack/course/musicParkCommon/GeoHitTableKartObj.bin"},
    {"/Race/Common/049/ObjFlow.bin", "sd:/varietypack/course/musicParkCommon/ObjFlow.bin"},
    {"/Race/Common/0a1/GeoHitTableItem.bin", "sd:/varietypack/course/pinballCommon/GeoHitTableItem.bin"},
    {"/Race/Common/0a1/GeoHitTableItemObj.bin", "sd:/varietypack/course/pinballCommon/GeoHitTableItemObj.bin"},
    {"/Race/Common/0a1/GeoHitTableKart.bin", "sd:/varietypack/course/pinballCommon/GeoHitTableKart.bin"},
    {"/Race/Common/0a1/GeoHitTableKartObj.bin", "sd:/varietypack/course/pinballCommon/GeoHitTableKartObj.bin"},
    {"/Race/Common/0a1/ObjFlow.bin", "sd:/varietypack/course/pinballCommon/ObjFlow.bin"},
    {"/Race/Common/0ab/GeoHitTableItem.bin", "sd:/varietypack/course/franticCommon/GeoHitTableItem.bin"},
    {"/Race/Common/0c4/GeoHitTableItem.bin", "sd:/varietypack/course/mushroomCityCommon/GeoHitTableItem.bin"},
    {"/Race/Common/0c4/GeoHitTableKart.bin", "sd:/varietypack/course/mushroomCityCommon/GeoHitTableKart.bin"},
    {"/Race/Common/0c4/GeoHitTableKartObj.bin", "sd:/varietypack/course/mushroomCityCommon/GeoHitTableKartObj.bin"},
    {"/Race/Common/0c4/ObjFlow.bin", "sd:/varietypack/course/mushroomCityCommon/ObjFlow.bin"},
    {"/Race/Common/123/ObjFlow.bin", "sd:/varietypack/course/shyGuySkiesCommon/ObjFlow.bin"},
    {"/Race/Course/000.szs", "sd:/varietypack/course/000.szs"},
    {"/Race/Course/001.szs", "sd:/varietypack/course/001.szs"},
    {"/Race/Course/002.szs", "sd:/varietypack/course/002.szs"},
    {"/Race/Course/003.szs", "sd:/varietypack/course/003.szs"},
    {"/Race/Course/004.szs", "sd:/varietypack/course/004.szs"},
    {"/Race/Course/005.szs", "sd:/varietypack/course/005.szs"},
    {"/Race/Course/006.szs", "sd:/varietypack/course/006.szs"},
    {"/Race/Course/007.szs", "sd:/varietypack/course/007.szs"},
    {"/Race/Course/008.szs", "sd:/varietypack/course/008.szs"},
    {"/Race/Course/009.szs", "sd:/varietypack/course/009.szs"},
    {"/Race/Course/00a.szs", "sd:/varietypack/course/00a.szs"},
    {"/Race/Course/00b.szs", "sd:/varietypack/course/00b.szs"},
    {"/Race/Course/00c.szs", "sd:/varietypack/course/00c.szs"},
    {"/Race/Course/00d.szs", "sd:/varietypack/course/00d.szs"},
    {"/Race/Course/00e.szs", "sd:/varietypack/course/00e.szs"},
    {"/Race/Course/00f.szs", "sd:/varietypack/course/00f.szs"},
    {"/Race/Course/010.szs", "sd:/varietypack/course/010.szs"},
    {"/Race/Course/011.szs", "sd:/varietypack/course/011.szs"},
    {"/Race/Course/012.szs", "sd:/varietypack/course/012.szs"},
    {"/Race/Course/013.szs", "sd:/varietypack/course/013.szs"},
    {"/Race/Course/014.szs", "sd:/varietypack/course/014.szs"},
    {"/Race/Course/015.szs", "sd:/varietypack/course/015.szs"},
    {"/Race/Course/016.szs", "sd:/varietypack/course/016.szs"},
    {"/Race/Course/017.szs", "sd:/varietypack/course/017.szs"},
    {"/Race/Course/018.szs", "sd:/varietypack/course/018.szs"},
    {"/Race/Course/019.szs", "sd:/varietypack/course/019.szs"},
    {"/Race/Course/01a.szs", "sd:/varietypack/course/01a.szs"},
    {"/Race/Course/01b.szs", "sd:/varietypack/course/01b.szs"},
    {"/Race/Course/01c.szs", "sd:/varietypack/course/01c.szs"},
    {"/Race/Course/01d.szs", "sd:/varietypack/course/01d.szs"},
    {"/Race/Course/01e.szs", "sd:/varietypack/course/01e.szs"},
    {"/Race/Course/01f.szs", "sd:/varietypack/course/01f.szs"},
    {"/Race/Course/020.szs", "sd:/varietypack/course/020.szs"},
    {"/Race/Course/021.szs", "sd:/varietypack/course/021.szs"},
    {"/Race/Course/022.szs", "sd:/varietypack/course/022.szs"},
    {"/Race/Course/023.szs", "sd:/varietypack/course/023.szs"},
    {"/Race/Course/024.szs", "sd:/varietypack/course/024.szs"},
    {"/Race/Course/025.szs", "sd:/varietypack/course/025.szs"},
    {"/Race/Course/026.szs", "sd:/varietypack/course/026.szs"},
    {"/Race/Course/027.szs", "sd:/varietypack/course/027.szs"},
    {"/Race/Course/028.szs", "sd:/varietypack/course/028.szs"},
    {"/Race/Course/029.szs", "sd:/varietypack/course/029.szs"},
    {"/Race/Course/037.szs", "sd:/varietypack/course/037.szs"},
    {"/Race/Course/038.szs", "sd:/varietypack/course/038.szs"},
    {"/Race/Course/039.szs", "sd:/varietypack/course/039.szs"},
    {"/Race/Course/03a.szs", "sd:/varietypack/course/03a.szs"},
    {"/Race/Course/044.szs", "sd:/varietypack/course/044.szs"},
    {"/Race/Course/045.szs", "sd:/varietypack/course/045.szs"},
    {"/Race/Course/046.szs", "sd:/varietypack/course/046.szs"},
    {"/Race/Course/047.szs", "sd:/varietypack/course/047.szs"},
    {"/Race/Course/048.szs", "sd:/varietypack/course/048.szs"},
    {"/Race/Course/049.szs", "sd:/varietypack/course/049.szs"},
    {"/Race/Course/04a.szs", "sd:/varietypack/course/04a.szs"},
    {"/Race/Course/04b.szs", "sd:/varietypack/course/04b.szs"},
    {"/Race/Course/04c.szs", "sd:/varietypack/course/04c.szs"},
    {"/Race/Course/04d.szs", "sd:/varietypack/course/04d.szs"},
    {"/Race/Course/04e.szs", "sd:/varietypack/course/04e.szs"},
    {"/Race/Course/04f.szs", "sd:/varietypack/course/04f.szs"},
    {"/Race/Course/050.szs", "sd:/varietypack/course/050.szs"},
    {"/Race/Course/051.szs", "sd:/varietypack/course/051.szs"},
    {"/Race/Course/052.szs", "sd:/varietypack/course/052.szs"},
    {"/Race/Course/053.szs", "sd:/varietypack/course/053.szs"},
    {"/Race/Course/054.szs", "sd:/varietypack/course/054.szs"},
    {"/Race/Course/055.szs", "sd:/varietypack/course/055.szs"},
    {"/Race/Course/056.szs", "sd:/varietypack/course/056.szs"},
    {"/Race/Course/057.szs", "sd:/varietypack/course/057.szs"},
    {"/Race/Course/058.szs", "sd:/varietypack/course/058.szs"},
    {"/Race/Course/059.szs", "sd:/varietypack/course/059.szs"},
    {"/Race/Course/05a.szs", "sd:/varietypack/course/05a.szs"},
    {"/Race/Course/05b.szs", "sd:/varietypack/course/05b.szs"},
    {"/Race/Course/05c.szs", "sd:/varietypack/course/05c.szs"},
    {"/Race/Course/05d.szs", "sd:/varietypack/course/05d.szs"},
    {"/Race/Course/05e.szs", "sd:/varietypack/course/05e.szs"},
    {"/Race/Course/05f.szs", "sd:/varietypack/course/05f.szs"},
    {"/Race/Course/060.szs", "sd:/varietypack/course/060.szs"},
    {"/Race/Course/061.szs", "sd:/varietypack/course/061.szs"},
    {"/Race/Course/062.szs", "sd:/varietypack/course/062.szs"},
    {"/Race/Course/063.szs", "sd:/varietypack/course/063.szs"},
    {"/Race/Course/064.szs", "sd:/varietypack/course/064.szs"},
    {"/Race/Course/065.szs", "sd:/varietypack/course/065.szs"},
    {"/Race/Course/066.szs", "sd:/varietypack/course/066.szs"},
    {"/Race/Course/067.szs", "sd:/varietypack/course/067.szs"},
    {"/Race/Course/068.szs", "sd:/varietypack/course/068.szs"},
    {"/Race/Course/069.szs", "sd:/varietypack/course/069.szs"},
    {"/Race/Course/06a.szs", "sd:/varietypack/course/06a.szs"},
    {"/Race/Course/06b.szs", "sd:/varietypack/course/06b.szs"},
    {"/Race/Course/06c.szs", "sd:/varietypack/course/06c.szs"},
    {"/Race/Course/06d.szs", "sd:/varietypack/course/06d.szs"},
    {"/Race/Course/06e.szs", "sd:/varietypack/course/06e.szs"},
    {"/Race/Course/06f.szs", "sd:/varietypack/course/06f.szs"},
    {"/Race/Course/070.szs", "sd:/varietypack/course/070.szs"},
    {"/Race/Course/071.szs", "sd:/varietypack/course/071.szs"},
    {"/Race/Course/072.szs", "sd:/varietypack/course/072.szs"},
    {"/Race/Course/073.szs", "sd:/varietypack/course/073.szs"},
    {"/Race/Course/074.szs", "sd:/varietypack/course/074.szs"},
    {"/Race/Course/075.szs", "sd:/varietypack/course/075.szs"},
    {"/Race/Course/076.szs", "sd:/varietypack/course/076.szs"},
    {"/Race/Course/077.szs", "sd:/varietypack/course/077.szs"},
    {"/Race/Course/078.szs", "sd:/varietypack/course/078.szs"},
    {"/Race/Course/079.szs", "sd:/varietypack/course/079.szs"},
    {"/Race/Course/07a.szs", "sd:/varietypack/course/07a.szs"},
    {"/Race/Course/07b.szs", "sd:/varietypack/course/07b.szs"},
    {"/Race/Course/07c.szs", "sd:/varietypack/course/07c.szs"},
    {"/Race/Course/07d.szs", "sd:/varietypack/course/07d.szs"},
    {"/Race/Course/07e.szs", "sd:/varietypack/course/07e.szs"},
    {"/Race/Course/07f.szs", "sd:/varietypack/course/07f.szs"},
    {"/Race/Course/080.szs", "sd:/varietypack/course/080.szs"},
    {"/Race/Course/081.szs", "sd:/varietypack/course/081.szs"},
    {"/Race/Course/082.szs", "sd:/varietypack/course/082.szs"},
    {"/Race/Course/083.szs", "sd:/varietypack/course/083.szs"},
    {"/Race/Course/084.szs", "sd:/varietypack/course/084.szs"},
    {"/Race/Course/085.szs", "sd:/varietypack/course/085.szs"},
    {"/Race/Course/086.szs", "sd:/varietypack/course/086.szs"},
    {"/Race/Course/087.szs", "sd:/varietypack/course/087.szs"},
    {"/Race/Course/088.szs", "sd:/varietypack/course/088.szs"},
    {"/Race/Course/089.szs", "sd:/varietypack/course/089.szs"},
    {"/Race/Course/08a.szs", "sd:/varietypack/course/08a.szs"},
    {"/Race/Course/08b.szs", "sd:/varietypack/course/08b.szs"},
    {"/Race/Course/08c.szs", "sd:/varietypack/course/08c.szs"},
    {"/Race/Course/08d.szs", "sd:/varietypack/course/08d.szs"},
    {"/Race/Course/08e.szs", "sd:/varietypack/course/08e.szs"},
    {"/Race/Course/08f.szs", "sd:/varietypack/course/08f.szs"},
    {"/Race/Course/090.szs", "sd:/varietypack/course/090.szs"},
    {"/Race/Course/091.szs", "sd:/varietypack/course/091.szs"},
    {"/Race/Course/092.szs", "sd:/varietypack/course/092.szs"},
    {"/Race/Course/093.szs", "sd:/varietypack/course/093.szs"},
    {"/Race/Course/094.szs", "sd:/varietypack/course/094.szs"},
    {"/Race/Course/095.szs", "sd:/varietypack/course/095.szs"},
    {"/Race/Course/096.szs", "sd:/varietypack/course/096.szs"},
    {"/Race/Course/097.szs", "sd:/varietypack/course/097.szs"},
    {"/Race/Course/098.szs", "sd:/varietypack/course/098.szs"},
    {"/Race/Course/099.szs", "sd:/varietypack/course/099.szs"},
    {"/Race/Course/09a.szs", "sd:/varietypack/course/09a.szs"},
    {"/Race/Course/09b.szs", "sd:/varietypack/course/09b.szs"},
    {"/Race/Course/09c.szs", "sd:/varietypack/course/09c.szs"},
    {"/Race/Course/09d.szs", "sd:/varietypack/course/09d.szs"},
    {"/Race/Course/09e.szs", "sd:/varietypack/course/09e.szs"},
    {"/Race/Course/09f.szs", "sd:/varietypack/course/09f.szs"},
    {"/Race/Course/0a0.szs", "sd:/varietypack/course/0a0.szs"},
    {"/Race/Course/0a1.szs", "sd:/varietypack/course/0a1.szs"},
    {"/Race/Course/0a2.szs", "sd:/varietypack/course/0a2.szs"},
    {"/Race/Course/0a3.szs", "sd:/varietypack/course/0a3.szs"},
    {"/Race/Course/0a4.szs", "sd:/varietypack/course/0a4.szs"},
    {"/Race/Course/0a5.szs", "sd:/varietypack/course/0a5.szs"},
    {"/Race/Course/0a6.szs", "sd:/varietypack/course/0a6.szs"},
    {"/Race/Course/0a7.szs", "sd:/varietypack/course/0a7.szs"},
    {"/Race/Course/0a8.szs", "sd:/varietypack/course/0a8.szs"},
    {"/Race/Course/0a9.szs", "sd:/varietypack/course/0a9.szs"},
    {"/Race/Course/0aa.szs", "sd:/varietypack/course/0aa.szs"},
    {"/Race/Course/0ab.szs", "sd:/varietypack/course/0ab.szs"},
    {"/Race/Course/0ac.szs", "sd:/varietypack/course/0ac.szs"},
    {"/Race/Course/0ad.szs", "sd:/varietypack/course/0ad.szs"},
    {"/Race/Course/0ae.szs", "sd:/varietypack/course/0ae.szs"},
    {"/Race/Course/0af.szs", "sd:/varietypack/course/0af.szs"},
    {"/Race/Course/0b0.szs", "sd:/varietypack/course/0b0.szs"},
    {"/Race/Course/0b1.szs", "sd:/varietypack/course/0b1.szs"},
    {"/Race/Course/0b2.szs", "sd:/varietypack/course/0b2.szs"},
    {"/Race/Course/0b3.szs", "sd:/varietypack/course/0b3.szs"},
    {"/Race/Course/0b4.szs", "sd:/varietypack/course/0b4.szs"},
    {"/Race/Course/0b5.szs", "sd:/varietypack/course/0b5.szs"},
    {"/Race/Course/0b6.szs", "sd:/varietypack/course/0b6.szs"},
    {"/Race/Course/0b7.szs", "sd:/varietypack/course/0b7.szs"},
    {"/Race/Course/0b8.szs", "sd:/varietypack/course/0b8.szs"},
    {"/Race/Course/0b9.szs", "sd:/varietypack/course/0b9.szs"},
    {"/Race/Course/0ba.szs", "sd:/varietypack/course/0ba.szs"},
    {"/Race/Course/0bb.szs", "sd:/varietypack/course/0bb.szs"},
    {"/Race/Course/0bc.szs", "sd:/varietypack/course/0bc.szs"},
    {"/Race/Course/0bd.szs", "sd:/varietypack/course/0bd.szs"},
    {"/Race/Course/0be.szs", "sd:/varietypack/course/0be.szs"},
    {"/Race/Course/0bf.szs", "sd:/varietypack/course/0bf.szs"},
    {"/Race/Course/0c0.szs", "sd:/varietypack/course/0c0.szs"},
    {"/Race/Course/0c1.szs", "sd:/varietypack/course/0c1.szs"},
    {"/Race/Course/0c2.szs", "sd:/varietypack/course/0c2.szs"},
    {"/Race/Course/0c3.szs", "sd:/varietypack/course/0c3.szs"},
    {"/Race/Course/0c4.szs", "sd:/varietypack/course/0c4.szs"},
    {"/Race/Course/0c5.szs", "sd:/varietypack/course/0c5.szs"},
    {"/Race/Course/0c6.szs", "sd:/varietypack/course/0c6.szs"},
    {"/Race/Course/0c7.szs", "sd:/varietypack/course/0c7.szs"},
    {"/Race/Course/0c8.szs", "sd:/varietypack/course/0c8.szs"},
    {"/Race/Course/0c9.szs", "sd:/varietypack/course/0c9.szs"},
    {"/Race/Course/0ca.szs", "sd:/varietypack/course/0ca.szs"},
    {"/Race/Course/0cb.szs", "sd:/varietypack/course/0cb.szs"},
    {"/Race/Course/0cc.szs", "sd:/varietypack/course/0cc.szs"},
    {"/Race/Course/0cd.szs", "sd:/varietypack/course/0cd.szs"},
    {"/Race/Course/0ce.szs", "sd:/varietypack/course/0ce.szs"},
    {"/Race/Course/0cf.szs", "sd:/varietypack/course/0cf.szs"},
    {"/Race/Course/0d0.szs", "sd:/varietypack/course/0d0.szs"},
    {"/Race/Course/0d1.szs", "sd:/varietypack/course/0d1.szs"},
    {"/Race/Course/0d2.szs", "sd:/varietypack/course/0d2.szs"},
    {"/Race/Course/0d3.szs", "sd:/varietypack/course/0d3.szs"},
    {"/Race/Course/0d4.szs", "sd:/varietypack/course/0d4.szs"},
    {"/Race/Course/0d5.szs", "sd:/varietypack/course/0d5.szs"},
    {"/Race/Course/0d6.szs", "sd:/varietypack/course/0d6.szs"},
    {"/Race/Course/0d7.szs", "sd:/varietypack/course/0d7.szs"},
    {"/Race/Course/0d8.szs", "sd:/varietypack/course/0d8.szs"},
    {"/Race/Course/0d9.szs", "sd:/varietypack/course/0d9.szs"},
    {"/Race/Course/0da.szs", "sd:/varietypack/course/0da.szs"},
    {"/Race/Course/0db.szs", "sd:/varietypack/course/0db.szs"},
    {"/Race/Course/0dc.szs", "sd:/varietypack/course/0dc.szs"},
    {"/Race/Course/0dd.szs", "sd:/varietypack/course/0dd.szs"},
    {"/Race/Course/0de.szs", "sd:/varietypack/course/0de.szs"},
    {"/Race/Course/0df.szs", "sd:/varietypack/course/0df.szs"},
    {"/Race/Course/0e0.szs", "sd:/varietypack/course/0e0.szs"},
    {"/Race/Course/0e1.szs", "sd:/varietypack/course/0e1.szs"},
    {"/Race/Course/0e2.szs", "sd:/varietypack/course/0e2.szs"},
    {"/Race/Course/0e3.szs", "sd:/varietypack/course/0e3.szs"},
    {"/Race/Course/0e4.szs", "sd:/varietypack/course/0e4.szs"},
    {"/Race/Course/0e5.szs", "sd:/varietypack/course/0e5.szs"},
    {"/Race/Course/0e6.szs", "sd:/varietypack/course/0e6.szs"},
    {"/Race/Course/0e7.szs", "sd:/varietypack/course/0e7.szs"},
    {"/Race/Course/0e8.szs", "sd:/varietypack/course/0e8.szs"},
    {"/Race/Course/0e9.szs", "sd:/varietypack/course/0e9.szs"},
    {"/Race/Course/0ea.szs", "sd:/varietypack/course/0ea.szs"},
    {"/Race/Course/0eb.szs", "sd:/varietypack/course/0eb.szs"},
    {"/Race/Course/0ec.szs", "sd:/varietypack/course/0ec.szs"},
    {"/Race/Course/0ed.szs", "sd:/varietypack/course/0ed.szs"},
    {"/Race/Course/0ee.szs", "sd:/varietypack/course/0ee.szs"},
    {"/Race/Course/0ef.szs", "sd:/varietypack/course/0ef.szs"},
    {"/Race/Course/0f0.szs", "sd:/varietypack/course/0f0.szs"},
    {"/Race/Course/0f1.szs", "sd:/varietypack/course/0f1.szs"},
    {"/Race/Course/0f2.szs", "sd:/varietypack/course/0f2.szs"},
    {"/Race/Course/0f3.szs", "sd:/varietypack/course/0f3.szs"},
    {"/Race/Course/0f4.szs", "sd:/varietypack/course/0f4.szs"},
    {"/Race/Course/0f5.szs", "sd:/varietypack/course/0f5.szs"},
    {"/Race/Course/0f6.szs", "sd:/varietypack/course/0f6.szs"},
    {"/Race/Course/0f7.szs", "sd:/varietypack/course/0f7.szs"},
    {"/Race/Course/0f8.szs", "sd:/varietypack/course/0f8.szs"},
    {"/Race/Course/0f9.szs", "sd:/varietypack/course/0f9.szs"},
    {"/Race/Course/0fa.szs", "sd:/varietypack/course/0fa.szs"},
    {"/Race/Course/0fb.szs", "sd:/varietypack/course/0fb.szs"},
    {"/Race/Course/0fc.szs", "sd:/varietypack/course/0fc.szs"},
    {"/Race/Course/0fd.szs", "sd:/varietypack/course/0fd.szs"},
    {"/Race/Course/0fe.szs", "sd:/varietypack/course/0fe.szs"},
    {"/Race/Course/0ff.szs", "sd:/varietypack/course/0ff.szs"},
    {"/Race/Course/100.szs", "sd:/varietypack/course/100.szs"},
    {"/Race/Course/101.szs", "sd:/varietypack/course/101.szs"},
    {"/Race/Course/102.szs", "sd:/varietypack/course/102.szs"},
    {"/Race/Course/103.szs", "sd:/varietypack/course/103.szs"},
    {"/Race/Course/104.szs", "sd:/varietypack/course/104.szs"},
    {"/Race/Course/105.szs", "sd:/varietypack/course/105.szs"},
    {"/Race/Course/106.szs", "sd:/varietypack/course/106.szs"},
    {"/Race/Course/107.szs", "sd:/varietypack/course/107.szs"},
    {"/Race/Course/108.szs", "sd:/varietypack/course/108.szs"},
    {"/Race/Course/109.szs", "sd:/varietypack/course/109.szs"},
    {"/Race/Course/10a.szs", "sd:/varietypack/course/10a.szs"},
    {"/Race/Course/10b.szs", "sd:/varietypack/course/10b.szs"},
    {"/Race/Course/10c.szs", "sd:/varietypack/course/10c.szs"},
    {"/Race/Course/10d.szs", "sd:/varietypack/course/10d.szs"},
    {"/Race/Course/10e.szs", "sd:/varietypack/course/10e.szs"},
    {"/Race/Course/10f.szs", "sd:/varietypack/course/10f.szs"},
    {"/Race/Course/110.szs", "sd:/varietypack/course/110.szs"},
    {"/Race/Course/111.szs", "sd:/varietypack/course/111.szs"},
    {"/Race/Course/112.szs", "sd:/varietypack/course/112.szs"},
    {"/Race/Course/113.szs", "sd:/varietypack/course/113.szs"},
    {"/Race/Course/114.szs", "sd:/varietypack/course/114.szs"},
    {"/Race/Course/115.szs", "sd:/varietypack/course/115.szs"},
    {"/Race/Course/116.szs", "sd:/varietypack/course/116.szs"},
    {"/Race/Course/117.szs", "sd:/varietypack/course/117.szs"},
    {"/Race/Course/118.szs", "sd:/varietypack/course/118.szs"},
    {"/Race/Course/119.szs", "sd:/varietypack/course/119.szs"},
    {"/Race/Course/11a.szs", "sd:/varietypack/course/11a.szs"},
    {"/Race/Course/11b.szs", "sd:/varietypack/course/11b.szs"},
    {"/Race/Course/11c.szs", "sd:/varietypack/course/11c.szs"},
    {"/Race/Course/11d.szs", "sd:/varietypack/course/11d.szs"},
    {"/Race/Course/11e.szs", "sd:/varietypack/course/11e.szs"},
    {"/Race/Course/11f.szs", "sd:/varietypack/course/11f.szs"},
    {"/Race/Course/120.szs", "sd:/varietypack/course/120.szs"},
    {"/Race/Course/121.szs", "sd:/varietypack/course/121.szs"},
    {"/Race/Course/122.szs", "sd:/varietypack/course/122.szs"},
    {"/Race/Course/123.szs", "sd:/varietypack/course/123.szs"},
    {"/Race/Course/124.szs", "sd:/varietypack/course/124.szs"},
    {"/Race/Course/125.szs", "sd:/varietypack/course/125.szs"},
    {"/Race/Course/126.szs", "sd:/varietypack/course/126.szs"},
    {"/Race/Course/127.szs", "sd:/varietypack/course/127.szs"},
    {"/Race/Course/128.szs", "sd:/varietypack/course/128.szs"},
    {"/Race/Course/129.szs", "sd:/varietypack/course/129.szs"},
    {"/Race/Course/12a.szs", "sd:/varietypack/course/12a.szs"},
    {"/Race/Course/12b.szs", "sd:/varietypack/course/12b.szs"},
    {"/Race/Course/12c.szs", "sd:/varietypack/course/12c.szs"},
    {"/Race/Course/12d.szs", "sd:/varietypack/course/12d.szs"},
    {"/Race/Course/12e.szs", "sd:/varietypack/course/12e.szs"},
    {"/Race/Course/12f.szs", "sd:/varietypack/course/12f.szs"},
    {"/Race/Course/130.szs", "sd:/varietypack/course/130.szs"},
    {"/Race/Course/131.szs", "sd:/varietypack/course/131.szs"},
    {"/Race/Course/132.szs", "sd:/varietypack/course/132.szs"},
    {"/Race/Course/133.szs", "sd:/varietypack/course/133.szs"},
    {"/Race/Course/134.szs", "sd:/varietypack/course/134.szs"},
    {"/Race/Course/135.szs", "sd:/varietypack/course/135.szs"},
    {"/Race/Course/136.szs", "sd:/varietypack/course/136.szs"},
    {"/Race/Course/137.szs", "sd:/varietypack/course/137.szs"},
    {"/Race/Course/138.szs", "sd:/varietypack/course/138.szs"},
    {"/Race/Course/139.szs", "sd:/varietypack/course/139.szs"},
    {"/Race/Course/13a.szs", "sd:/varietypack/course/13a.szs"},
    {"/Race/Course/13b.szs", "sd:/varietypack/course/13b.szs"},
    {"/Race/Course/13c.szs", "sd:/varietypack/course/13c.szs"},
    {"/Race/Course/13d.szs", "sd:/varietypack/course/13d.szs"},
    {"/Race/Course/13e.szs", "sd:/varietypack/course/13e.szs"},
    {"/Race/Course/13f.szs", "sd:/varietypack/course/13f.szs"},
    {"/Race/Course/140.szs", "sd:/varietypack/course/140.szs"},
    {"/Race/Course/141.szs", "sd:/varietypack/course/141.szs"},
    {"/Race/Course/142.szs", "sd:/varietypack/course/142.szs"},
    {"/Race/Course/143.szs", "sd:/varietypack/course/143.szs"},
    {"/Race/Course/144.szs", "sd:/varietypack/course/144.szs"},
    {"/Race/Course/145.szs", "sd:/varietypack/course/145.szs"},
    {"/Race/Course/146.szs", "sd:/varietypack/course/146.szs"},
    {"/Race/Course/147.szs", "sd:/varietypack/course/147.szs"},
    {"/Race/Course/148.szs", "sd:/varietypack/course/148.szs"},
    {"/Race/Course/149.szs", "sd:/varietypack/course/149.szs"},
    {"/Race/Course/14a.szs", "sd:/varietypack/course/14a.szs"},
    {"/Race/Course/14b.szs", "sd:/varietypack/course/14b.szs"},
    {"/Race/Course/14c.szs", "sd:/varietypack/course/14c.szs"},
    {"/Race/Course/14d.szs", "sd:/varietypack/course/14d.szs"},
    {"/Race/Course/14e.szs", "sd:/varietypack/course/14e.szs"},
    {"/Race/Course/14f.szs", "sd:/varietypack/course/14f.szs"},
    {"/Race/Course/150.szs", "sd:/varietypack/course/150.szs"},
    {"/Race/Course/151.szs", "sd:/varietypack/course/151.szs"},
    {"/Race/Course/152.szs", "sd:/varietypack/course/152.szs"},
    {"/Race/Course/153.szs", "sd:/varietypack/course/153.szs"},
    {"/Race/Course/154.szs", "sd:/varietypack/course/154.szs"},
    {"/Race/Course/155.szs", "sd:/varietypack/course/155.szs"},
    {"/Race/Course/156.szs", "sd:/varietypack/course/156.szs"},
    {"/Race/Course/157.szs", "sd:/varietypack/course/157.szs"},
    {"/Race/Course/158.szs", "sd:/varietypack/course/158.szs"},
    {"/Race/Course/159.szs", "sd:/varietypack/course/159.szs"},
    {"/Race/Course/15a.szs", "sd:/varietypack/course/15a.szs"},
    {"/Race/Course/15b.szs", "sd:/varietypack/course/15b.szs"},
    {"/Race/Course/15c.szs", "sd:/varietypack/course/15c.szs"},
    {"/Race/Course/15d.szs", "sd:/varietypack/course/15d.szs"},
    {"/Race/Course/15e.szs", "sd:/varietypack/course/15e.szs"},
    {"/Race/Course/15f.szs", "sd:/varietypack/course/15f.szs"},
    {"/Race/Course/160.szs", "sd:/varietypack/course/160.szs"},
    {"/Race/Course/161.szs", "sd:/varietypack/course/161.szs"},
    {"/Race/Course/162.szs", "sd:/varietypack/course/162.szs"},
    {"/Race/Course/163.szs", "sd:/varietypack/course/163.szs"},
    {"/Race/Course/164.szs", "sd:/varietypack/course/164.szs"},
    {"/Race/Course/165.szs", "sd:/varietypack/course/165.szs"},
    {"/Race/Course/166.szs", "sd:/varietypack/course/166.szs"},
    {"/Race/Course/167.szs", "sd:/varietypack/course/167.szs"},
    {"/Race/Course/168.szs", "sd:/varietypack/course/168.szs"},
    {"/Race/Course/169.szs", "sd:/varietypack/course/169.szs"},
    {"/Race/Course/16a.szs", "sd:/varietypack/course/16a.szs"},
    {"/Race/Course/16b.szs", "sd:/varietypack/course/16b.szs"},
    {"/Race/Course/16c.szs", "sd:/varietypack/course/16c.szs"},
    {"/Race/Course/16d.szs", "sd:/varietypack/course/16d.szs"},
    {"/Race/Course/16e.szs", "sd:/varietypack/course/16e.szs"},
    {"/Race/Course/16f.szs", "sd:/varietypack/course/16f.szs"},
};