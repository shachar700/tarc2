enum
{
    PAGE_TITLE_HACK, // Valiant, Credits
    PAGE_CREATOR, // Creator, Shahar
    PAGE_PROGRAMMING, // Programming, Shahar
    PAGE_MAPPING, // Mapping, Shahar
    PAGE_SCRIPTING, // Scripting, Shahar
    PAGE_ART, // Art, Shahar
    PAGE_BASE, // Base, Gamefreak, Creatures Inc, Nintendo
    PAGE_DECOMP, // Decomp, Pret, RH Hideout
    PAGE_TOOLS, // Tools, Visual Studio Code, GitHub, Porymap
    PAGE_TOOLS_2, // Tools,  Graphics Gale, Aseprite, Tilemap Studio
    PAGE_OW_TILES, // OW Tiles, Shahar, Xencleamas
    PAGE_BACKGROUND_ART, //Background Art, Shahar, kWharever, Oscar Brock, Lucbui
    PAGE_SPRITES, // Trainer Sprite, Shahar, Dragonflye, Dante, Baro
    //PAGE_SPRITES_2, // Trainer Sprite, Kyledove
    PAGE_OW_OBJECTS, // OW Objects, Shahar, aveontrainer, 
    PAGE_COMPOSER, // Composer, Karl
    PAGE_PLAYTESTER, // Playtester, Aio
    PAGE_FEATURE_BRANCH, // Feature Branch mid-battle evolution, ctf, zed, Shahar
    PAGE_SUPPORT, // Support, TAH, Maya
    PAGE_SPECIAL_THANKS, // Special Thanks
    /*PAGE_TITLE,
    PAGE_DIRECTOR,
    PAGE_ART_DIRECTOR,
    PAGE_WORLD_DIRECTOR,
    PAGE_LEAD_PROGRAMMER,
    PAGE_PROGRAMMERS_1,
    PAGE_PROGRAMMERS_2,
    PAGE_PROGRAMMERS_3,
    PAGE_PROGRAMMERS_4,
    PAGE_GRAPHIC_DESIGNERS_1,
    PAGE_GRAPHIC_DESIGNERS_2,
    PAGE_GRAPHIC_DESIGNERS_3,
    PAGE_MUSIC_COMPOSITION,
    PAGE_SOUND_EFFECTS,
    PAGE_GAME_DESIGNERS_1,
    PAGE_GAME_DESIGNERS_2,
    PAGE_GAME_DESIGNERS_3,
    PAGE_SCENARIO_PLOT,
    PAGE_SCENARIO,
    PAGE_SCRIPT_DESIGNERS,
    PAGE_MAP_DESIGNERS,
    PAGE_BATTLE_FRONTIER_DATA,
    PAGE_PARAMETRIC_DESIGNERS,
    PAGE_POKEDEX_TEXT,
    PAGE_ENVIRONMENT_AND_TOOL_PROGRAMS_1,
    PAGE_PKMN_DESIGNERS_1,
    PAGE_PKMN_DESIGNERS_2,
    PAGE_PKMN_DESIGNERS_3,
    PAGE_PKMN_DESIGNERS_4,
    PAGE_SUPPORT_PROGRAMMERS,
    PAGE_NCL_PRODUCT_TESTING,
    PAGE_PACKAGE_AND_MANUAL,
    PAGE_SPECIAL_THANKS_1,
    PAGE_SPECIAL_THANKS_2,
    PAGE_SPECIAL_THANKS_3,
    PAGE_SPECIAL_THANKS_4,
    PAGE_INFORMATION_SUPERVISORS,
    PAGE_ARTWORK_1,
    PAGE_ARTWORK_2,
    PAGE_ARTWORK_3,
    PAGE_COORDINATORS,
    PAGE_ENGLISH_VERSION,
    PAGE_TRANSLATOR,
    PAGE_TEXT_EDITOR,
    PAGE_NCL_COORDINATOR,
    PAGE_PROGRAMMERS_5,
    PAGE_GRAPHIC_DESIGNER,
    PAGE_ENVIRONMENT_AND_TOOL_PROGRAMS_2,
    PAGE_NOA_TESTING,
    PAGE_BRAILLE_CODE_CHECK_1,
    PAGE_BRAILLE_CODE_CHECK_2,
    PAGE_SPECIAL_THANKS_5,
    PAGE_TASK_MANAGERS,
    PAGE_PRODUCERS,
    PAGE_EXECUTIVE_DIRECTOR,
    PAGE_EXECUTIVE_PRODUCERS_1,
    PAGE_EXECUTIVE_PRODUCERS_2,*/
    PAGE_COUNT
};

#define ENTRIES_PER_PAGE 5

static const u8 sCreditsText_EmptyString[]                    = _("");
static const u8 sCreditsText_PkmnEmeraldVersion[]             = _("POKéMON TWO VERSION");
static const u8 sCreditsText_Credits[]                        = _("Credits");
/*
static const u8 sCreditsText_ExecutiveDirector[]              = _("Executive Director");
static const u8 sCreditsText_Director[]                       = _("Director");
static const u8 sCreditsText_ArtDirector[]                    = _("Art Director");
static const u8 sCreditsText_BattleDirector[]                 = _("Battle Director");
static const u8 sCreditsText_MainProgrammer[]                 = _("Main Programmer");
static const u8 sCreditsText_BattleSystemPgrms[]              = _("Battle System Programmers");
static const u8 sCreditsText_FieldSystemPgrms[]               = _("Field System Programmer");
static const u8 sCreditsText_Programmers[]                    = _("Programmers");
static const u8 sCreditsText_MainGraphicDesigner[]            = _("Main Graphic Designer");
static const u8 sCreditsText_GraphicDesigners[]               = _("Graphic Designers");
static const u8 sCreditsText_PkmnDesigners[]                  = _("POKéMON Designers");
static const u8 sCreditsText_MusicComposition[]               = _("Music Composition");
static const u8 sCreditsText_SoundEffectsAndPkmnVoices[]      = _("Sound Effects & POKéMON Voices");
static const u8 sCreditsText_GameDesigners[]                  = _("Game Designers");
static const u8 sCreditsText_ScenarioPlot[]                   = _("Scenario Plot");
static const u8 sCreditsText_Scenario[]                       = _("Scenario");
static const u8 sCreditsText_ScriptDesigners[]                = _("Script Designers");
static const u8 sCreditsText_MapDesigners[]                   = _("Map Designers");
static const u8 sCreditsText_MapDataDesigners[]               = _("Map Data Designers");
static const u8 sCreditsText_ParametricDesigners[]            = _("Parametric Designers");
static const u8 sCreditsText_PokedexText[]                    = _("POKéDEX Text");
static const u8 sCreditsText_EnvAndToolPgrms[]                = _("Environment & Tool Programmers");
static const u8 sCreditsText_NCLProductTesting[]              = _("NCL Product Testing");
static const u8 sCreditsText_SpecialThanks[]                  = _("Special Thanks");
static const u8 sCreditsText_Coordinators[]                   = _("Coordinators");
static const u8 sCreditsText_Producers[]                      = _("Producers");
static const u8 sCreditsText_ExecProducers[]                  = _("Executive Producers");
static const u8 sCreditsText_InfoSupervisors[]                = _("Information Supervisors");
static const u8 sCreditsText_TaskManagers[]                   = _("Task Managers");
static const u8 sCreditsText_BrailleCodeCheck[]               = _("Braille Code Check");
static const u8 sCreditsText_WorldDirector[]                  = _("World Director");
static const u8 sCreditsText_BattleFrontierData[]             = _("Battle Frontier Data");
static const u8 sCreditsText_SupportProgrammers[]             = _("Support Programmers");
static const u8 sCreditsText_Artwork[]                        = _("Artwork");
static const u8 sCreditsText_LeadProgrammer[]                 = _("Lead Programmer");
static const u8 sCreditsText_LeadGraphicArtist[]              = _("Lead Graphic Artist");
static const u8 sCreditsText_SatoshiTajiri[]                  = _("Satoshi Tajiri");
static const u8 sCreditsText_JunichiMasuda[]                  = _("Junichi Masuda");
static const u8 sCreditsText_KenSugimori[]                    = _("Ken Sugimori");
static const u8 sCreditsText_ShigekiMorimoto[]                = _("Shigeki Morimoto");
static const u8 sCreditsText_TetsuyaWatanabe[]                = _("Tetsuya Watanabe");
static const u8 sCreditsText_HisashiSogabe[]                  = _("Hisashi Sogabe");
static const u8 sCreditsText_SosukeTamada[]                   = _("Sosuke Tamada");
static const u8 sCreditsText_AkitoMori[]                      = _("Akito Mori");
static const u8 sCreditsText_KeitaKagaya[]                    = _("Keita Kagaya");
static const u8 sCreditsText_YoshinoriMatsuda[]               = _("Yoshinori Matsuda");
static const u8 sCreditsText_HiroyukiNakamura[]               = _("Hiroyuki Nakamura");
static const u8 sCreditsText_MasaoTaya[]                      = _("Masao Taya");
static const u8 sCreditsText_SatoshiNohara[]                  = _("Satoshi Nohara");
static const u8 sCreditsText_TomomichiOhta[]                  = _("Tomomichi Ohta");
static const u8 sCreditsText_MiyukiIwasawa[]                  = _("Miyuki Iwasawa");
static const u8 sCreditsText_TakenoriOhta[]                   = _("Takenori Ohta");
static const u8 sCreditsText_HironobuYoshida[]                = _("Hironobu Yoshida");
static const u8 sCreditsText_MotofumiFujiwara[]               = _("Motofumi Fujiwara");
static const u8 sCreditsText_SatoshiOhta[]                    = _("Satoshi Ohta");
static const u8 sCreditsText_AsukaIwashita[]                  = _("Asuka Iwashita");
static const u8 sCreditsText_AimiTomita[]                     = _("Aimi Tomita");
static const u8 sCreditsText_TakaoUnno[]                      = _("Takao Unno");
static const u8 sCreditsText_KanakoEo[]                       = _("Kanako Eo");
static const u8 sCreditsText_JunOkutani[]                     = _("Jun Okutani");
static const u8 sCreditsText_AtsukoNishida[]                  = _("Atsuko Nishida");
static const u8 sCreditsText_MuneoSaito[]                     = _("Muneo Saito");
static const u8 sCreditsText_RenaYoshikawa[]                  = _("Rena Yoshikawa");
static const u8 sCreditsText_GoIchinose[]                     = _("Go Ichinose");
static const u8 sCreditsText_MorikazuAoki[]                   = _("Morikazu Aoki");
static const u8 sCreditsText_KojiNishino[]                    = _("Koji Nishino");
static const u8 sCreditsText_KenjiMatsushima[]                = _("Kenji Matsushima");
static const u8 sCreditsText_TetsujiOhta[]                    = _("Tetsuji Ohta");
static const u8 sCreditsText_HitomiSato[]                     = _("Hitomi Sato");
static const u8 sCreditsText_TakeshiKawachimaru[]             = _("Takeshi Kawachimaru");
static const u8 sCreditsText_TeruyukiShimoyamada[]            = _("Teruyuki Shimoyamada");
static const u8 sCreditsText_ShigeruOhmori[]                  = _("Shigeru Ohmori");
static const u8 sCreditsText_TadashiTakahashi[]               = _("Tadashi Takahashi");
static const u8 sCreditsText_ToshinobuMatsumiya[]             = _("Toshinobu Matsumiya");
static const u8 sCreditsText_AkihitoTomisawa[]                = _("Akihito Tomisawa");
static const u8 sCreditsText_HirokiEnomoto[]                  = _("Hiroki Enomoto");
static const u8 sCreditsText_KazuyukiTerada[]                 = _("Kazuyuki Terada");
static const u8 sCreditsText_YuriSakurai[]                    = _("Yuri Sakurai");
static const u8 sCreditsText_HiromiSagawa[]                   = _("Hiromi Sagawa");
static const u8 sCreditsText_KenjiTominaga[]                  = _("Kenji Tominaga");
static const u8 sCreditsText_YoshioTajiri[]                   = _("Yoshio Tajiri");
static const u8 sCreditsText_TeikoSasaki[]                    = _("Teiko Sasaki");
static const u8 sCreditsText_SachikoHamano[]                  = _("Sachiko Hamano");
static const u8 sCreditsText_ChieMatsumiya[]                  = _("Chie Matsumiya");
static const u8 sCreditsText_AkikoShinozaki[]                 = _("Akiko Shinozaki");
static const u8 sCreditsText_AstukoFujii[]                    = _("Astuko Fujii");
static const u8 sCreditsText_NozomuSaito[]                    = _("Nozomu Saito");
static const u8 sCreditsText_KenkichiToyama[]                 = _("Kenkichi Toyama");
static const u8 sCreditsText_SuguruNakatsui[]                 = _("Suguru Nakatsui");
static const u8 sCreditsText_YumiFunasaka[]                   = _("Yumi Funasaka");
static const u8 sCreditsText_NaokoYanase[]                    = _("Naoko Yanase");
static const u8 sCreditsText_NCLSuperMarioClub[]              = _("NCL Super Mario Club");
static const u8 sCreditsText_AtsushiTada[]                    = _("Atsushi Tada");
static const u8 sCreditsText_TakahiroOhnishi[]                = _("Takahiro Ohnishi");
static const u8 sCreditsText_NorihideOkamura[]                = _("Norihide Okamura");
static const u8 sCreditsText_HiroNakamura[]                   = _("Hiro Nakamura");
static const u8 sCreditsText_HiroyukiUesugi[]                 = _("Hiroyuki Uesugi");
static const u8 sCreditsText_TerukiMurakawa[]                 = _("Teruki Murakawa");
static const u8 sCreditsText_AkiraKinashi[]                   = _("Akira Kinashi");
static const u8 sCreditsText_MichikoTakizawa[]                = _("Michiko Takizawa");
static const u8 sCreditsText_MakikoTakada[]                   = _("Makiko Takada");
static const u8 sCreditsText_TakanaoKondo[]                   = _("Takanao Kondo");
static const u8 sCreditsText_AiMashima[]                      = _("Ai Mashima");
static const u8 sCreditsText_GakujiNomoto[]                   = _("Gakuji Nomoto");
static const u8 sCreditsText_TakehiroIzushi[]                 = _("Takehiro Izushi");
static const u8 sCreditsText_HitoshiYamagami[]                = _("Hitoshi Yamagami");
static const u8 sCreditsText_KyokoWatanabe[]                  = _("Kyoko Watanabe");
static const u8 sCreditsText_TakaoNakano[]                    = _("Takao Nakano");
static const u8 sCreditsText_HiroyukiJinnai[]                 = _("Hiroyuki Jinnai");
static const u8 sCreditsText_HiroakiTsuru[]                   = _("Hiroaki Tsuru");
static const u8 sCreditsText_TsunekazIshihara[]               = _("Tsunekaz Ishihara");
static const u8 sCreditsText_SatoruIwata[]                    = _("Satoru Iwata");
static const u8 sCreditsText_KazuyaSuyama[]                   = _("Kazuya Suyama");
static const u8 sCreditsText_SatoshiMitsuhara[]               = _("Satoshi Mitsuhara");
static const u8 sCreditsText_JapanBrailleLibrary[]            = _("Japan Braille Library");
static const u8 sCreditsText_TomotakaKomura[]                 = _("Tomotaka Komura");
static const u8 sCreditsText_MikikoOhhashi[]                  = _("Mikiko Ohhashi");
static const u8 sCreditsText_DaisukeHoshino[]                 = _("Daisuke Hoshino");
static const u8 sCreditsText_KenjiroIto[]                     = _("Kenjiro Ito");
static const u8 sCreditsText_RuiKawaguchi[]                   = _("Rui Kawaguchi");
static const u8 sCreditsText_ShunsukeKohori[]                 = _("Shunsuke Kohori");
static const u8 sCreditsText_SachikoNakamichi[]               = _("Sachiko Nakamichi");
static const u8 sCreditsText_FujikoNomura[]                   = _("Fujiko Nomura");
static const u8 sCreditsText_KazukiYoshihara[]                = _("Kazuki Yoshihara");
static const u8 sCreditsText_RetsujiNomoto[]                  = _("Retsuji Nomoto");
static const u8 sCreditsText_AzusaTajima[]                    = _("Azusa Tajima");
static const u8 sCreditsText_ShusakuEgami[]                   = _("Shusaku Egami");
static const u8 sCreditsText_PackageAndManual[]               = _("Package & Manual Illustration");
static const u8 sCreditsText_EnglishVersion[]                 = _("English Version Coordinators");
static const u8 sCreditsText_Translator[]                     = _("Translator");
static const u8 sCreditsText_TextEditor[]                     = _("Text Editor");
static const u8 sCreditsText_NCLCoordinator[]                 = _("NCL Coordinator");
static const u8 sCreditsText_GraphicDesigner[]                = _("Graphic Designer");
static const u8 sCreditsText_NOAProductTesting[]              = _("NOA Product Testing");
static const u8 sCreditsText_HideyukiNakajima[]               = _("Hideyuki Nakajima");
static const u8 sCreditsText_HidenoriSaeki[]                  = _("Hidenori Saeki");
static const u8 sCreditsText_YokoWatanabe[]                   = _("Yoko Watanabe");
static const u8 sCreditsText_SakaeKimura[]                    = _("Sakae Kimura");
static const u8 sCreditsText_ChiakiShinkai[]                  = _("Chiaki Shinkai");
static const u8 sCreditsText_SethMcMahill[]                   = _("Seth McMahill");
static const u8 sCreditsText_NobOgasawara[]                   = _("Nob Ogasawara");
static const u8 sCreditsText_TeresaLillygren[]                = _("Teresa Lillygren");
static const u8 sCreditsText_KimikoNakamichi[]                = _("Kimiko Nakamichi");
static const u8 sCreditsText_SouichiYamamoto[]                = _("Souichi Yamamoto");
static const u8 sCreditsText_YuichiroIto[]                    = _("Yuichiro Ito");
static const u8 sCreditsText_ThomasHertzog[]                  = _("Thomas Hertzog");
static const u8 sCreditsText_MikaKurosawa[]                   = _("Mika Kurosawa");
static const u8 sCreditsText_NationalFederationBlind[]        = _("National Federation of the Blind");
static const u8 sCreditsText_PatriciaAMaurer[]                = _("Patricia A. Maurer");
static const u8 sCreditsText_EuropeanBlindUnion[]             = _("European Blind Union");
static const u8 sCreditsText_AustralianBrailleAuthority[]     = _("Australian Braille Authority");
static const u8 sCreditsText_RoyalNewZealandFederationBlind[] = _("Royal New Zealand Federation for the Blind");
static const u8 sCreditsText_MotoyasuTojima[]                 = _("Motoyasu Tojima");
static const u8 sCreditsText_NicolaPrattBarlow[]              = _("Nicola Pratt-Barlow");
static const u8 sCreditsText_ShellieDow[]                     = _("Shellie Dow");
static const u8 sCreditsText_ErikJohnson[]                    = _("Erik Johnson");
*/
// own credits Shahar
static const u8 sCreditsText_Creator[]                        = _("Creator");
static const u8 sCreditsText_Shahar[]                         = _("Shahar");
static const u8 sCreditsText_Programming[]                    = _("Programming");
static const u8 sCreditsText_Mapping[]                        = _("Mapping");
static const u8 sCreditsText_Scripting[]                      = _("Scripting");
static const u8 sCreditsText_Art[]                            = _("Art");
static const u8 sCreditsText_Base[]                           = _("Based on POKéMON EMERALD VERSION");
static const u8 sCreditsText_Gamefreak[]                      = _("Gamefreak");
static const u8 sCreditsText_Nintendo[]                       = _("Nintendo");
static const u8 sCreditsText_CreaturesInc[]                   = _("Creatures Inc");
static const u8 sCreditsText_Decomp[]                         = _("Based on the Pokeemerald Decomp");
static const u8 sCreditsText_pret[]                           = _("POKéMON Reverse Engineering Team");
static const u8 sCreditsText_RHH[]                            = _("Rom Hacking Hideout");

static const u8 sCreditsText_Tools[]                          = _("Tools");
static const u8 sCreditsText_VSC[]                            = _("Visual Studio Code");
static const u8 sCreditsText_GitHub[]                         = _("GitHub");
static const u8 sCreditsText_Porymap[]                        = _("Porymap");

static const u8 sCreditsText_GraphicsGale[]                   = _("GraphicsGale");
static const u8 sCreditsText_Aseprite[]                       = _("Aseprite");
static const u8 sCreditsText_TilemapStudio[]                  = _("Tilemap Studio");

static const u8 sCreditsText_OWTiles[]                        = _("OW Tiles");
static const u8 sCreditsText_OWObjects[]                      = _("OW Objects");
static const u8 sCreditsText_Sprites[]                        = _("Sprites");
static const u8 sCreditsText_Composer[]                       = _("Composer");
static const u8 sCreditsText_BackgroundArt[]                  = _("Background Art");
static const u8 sCreditsText_FeatureBranch[]                  = _("Feature Branch");
static const u8 sCreditsText_BattleUI[]                       = _("Battle UI");
static const u8 sCreditsText_Support[]                        = _("Support");
static const u8 sCreditsText_Playtester[]                     = _("Playtesters");
static const u8 sCreditsText_SpecialThanks[]                  = _("Special Thanks");

static const u8 sCreditsText_aveontrainer[]                   = _("aveontrainer"); // obj gfx
static const u8 sCreditsText_Xencleamas[]                     = _("Xencleamas"); // ow tiles
static const u8 sCreditsText_kWharever[]                      = _("kWharever"); // bg art
static const u8 sCreditsText_LeoB[]                           = _("LeoB"); // ow tiles
static const u8 sCreditsText_Nico[]                           = _("Nico"); // battle ui
static const u8 sCreditsText_Archie[]                         = _("Archie"); // battle ui

static const u8 sCreditsText_Karl[]                         = _("Karl"); // composer
static const u8 sCreditsText_Aio[]                         = _("Aioe"); // playtester

static const u8 sCreditsText_AquasHideout[]                   = _("Team Aqua's Hideout Crew"); // support
static const u8 sCreditsText_Maya[]                           = _("Maya"); // special thanks

static const struct CreditsEntry sCreditsEntry_EmptyString                      = { 0, FALSE, sCreditsText_EmptyString};
static const struct CreditsEntry sCreditsEntry_PkmnEmeraldVersion               = { 7,  TRUE, sCreditsText_PkmnEmeraldVersion};
static const struct CreditsEntry sCreditsEntry_Credits                          = {11,  TRUE, sCreditsText_Credits};

static const struct CreditsEntry sCreditsEntry_Creator                          = {0,  TRUE, sCreditsText_Creator};
static const struct CreditsEntry sCreditsEntry_Programming                      = {0,  TRUE, sCreditsText_Programming};
static const struct CreditsEntry sCreditsEntry_Mapping                          = {0,  TRUE, sCreditsText_Mapping};
static const struct CreditsEntry sCreditsEntry_Scripting                        = {0,  TRUE, sCreditsText_Scripting};
static const struct CreditsEntry sCreditsEntry_Art                              = {0,  TRUE, sCreditsText_Art};
static const struct CreditsEntry sCreditsEntry_Base                             = {0,  TRUE, sCreditsText_Base};
static const struct CreditsEntry sCreditsEntry_Gamefreak                        = {0,  FALSE, sCreditsText_Gamefreak};
static const struct CreditsEntry sCreditsEntry_Nintendo                         = {0,  FALSE, sCreditsText_Nintendo};
static const struct CreditsEntry sCreditsEntry_CreaturesInc                     = {0,  FALSE, sCreditsText_CreaturesInc};
static const struct CreditsEntry sCreditsEntry_Decomp                           = {0,  TRUE, sCreditsText_Decomp};
static const struct CreditsEntry sCreditsEntry_pret                             = {0,  FALSE, sCreditsText_pret};
static const struct CreditsEntry sCreditsEntry_RHH                              = {0,  FALSE, sCreditsText_RHH};
static const struct CreditsEntry sCreditsEntry_Tools                            = {0,  TRUE, sCreditsText_Tools};
static const struct CreditsEntry sCreditsEntry_VSC                              = {0,  FALSE, sCreditsText_VSC};
static const struct CreditsEntry sCreditsEntry_GitHub                           = {0,  FALSE, sCreditsText_GitHub};
static const struct CreditsEntry sCreditsEntry_Porymap                          = {0,  FALSE, sCreditsText_Porymap};
static const struct CreditsEntry sCreditsEntry_GraphicsGale                     = {0,  FALSE, sCreditsText_GraphicsGale};
static const struct CreditsEntry sCreditsEntry_Aseprite                         = {0,  FALSE, sCreditsText_Aseprite};
static const struct CreditsEntry sCreditsEntry_TilemapStudio                    = {0,  FALSE, sCreditsText_TilemapStudio};

static const struct CreditsEntry sCreditsEntry_OWTiles                          = {0,  TRUE, sCreditsText_OWTiles};
static const struct CreditsEntry sCreditsEntry_OWObjects                        = {0,  TRUE, sCreditsText_OWObjects};
static const struct CreditsEntry sCreditsEntry_Sprites                          = {0,  TRUE, sCreditsText_Sprites};
static const struct CreditsEntry sCreditsEntry_BackgroundArt                    = {0,  TRUE, sCreditsText_BackgroundArt};
static const struct CreditsEntry sCreditsEntry_Composer                         = {0,  TRUE, sCreditsText_Composer};
static const struct CreditsEntry sCreditsEntry_FeatureBranch                    = {0,  TRUE, sCreditsText_FeatureBranch};
static const struct CreditsEntry sCreditsEntry_BattleUI                         = {0,  TRUE, sCreditsText_BattleUI};
static const struct CreditsEntry sCreditsEntry_Support                          = {0,  TRUE, sCreditsText_Support};
static const struct CreditsEntry sCreditsEntry_Playtester                       = {0,  TRUE, sCreditsText_Playtester};
static const struct CreditsEntry sCreditsEntry_SpecialThanks                    = {0,  TRUE, sCreditsText_SpecialThanks};

static const struct CreditsEntry sCreditsEntry_Shahar                           = {0,  FALSE, sCreditsText_Shahar};
static const struct CreditsEntry sCreditsEntry_Maya                             = {0,  FALSE, sCreditsText_Maya};

static const struct CreditsEntry sCreditsEntry_aveontrainer                     = {0,  FALSE, sCreditsText_aveontrainer};
static const struct CreditsEntry sCreditsEntry_Xencleamas                       = {0,  FALSE, sCreditsText_Xencleamas};
static const struct CreditsEntry sCreditsEntry_LeoB                             = {0,  FALSE, sCreditsText_LeoB};
static const struct CreditsEntry sCreditsEntry_Nico                             = {0,  FALSE, sCreditsText_Nico};
static const struct CreditsEntry sCreditsEntry_Archie                           = {0,  FALSE, sCreditsText_Archie};
static const struct CreditsEntry sCreditsEntry_Karl                             = {0,  FALSE, sCreditsText_Karl};
static const struct CreditsEntry sCreditsEntry_Aio                              = {0,  FALSE, sCreditsText_Aio};
static const struct CreditsEntry sCreditsEntry_kWharever                        = {0,  FALSE, sCreditsText_kWharever};
static const struct CreditsEntry sCreditsEntry_AquasHideout                     = {0,  FALSE, sCreditsText_AquasHideout};

/*
static const struct CreditsEntry sCreditsEntry_ExecutiveDirector                = { 8,  TRUE, sCreditsText_ExecutiveDirector};
static const struct CreditsEntry sCreditsEntry_Director                         = {12,  TRUE, sCreditsText_Director};
static const struct CreditsEntry sCreditsEntry_ArtDirector                      = {10,  TRUE, sCreditsText_ArtDirector};
static const struct CreditsEntry sCreditsEntry_BattleDirector                   = {10,  TRUE, sCreditsText_BattleDirector};
static const struct CreditsEntry sCreditsEntry_MainProgrammer                   = {10,  TRUE, sCreditsText_MainProgrammer};
static const struct CreditsEntry sCreditsEntry_BattleSystemPgrms                = { 8,  TRUE, sCreditsText_BattleSystemPgrms};
static const struct CreditsEntry sCreditsEntry_FieldSystemPgrms                 = { 7,  TRUE, sCreditsText_FieldSystemPgrms};
static const struct CreditsEntry sCreditsEntry_Programmers                      = {12,  TRUE, sCreditsText_Programmers};
static const struct CreditsEntry sCreditsEntry_MainGraphicDesigner              = { 7,  TRUE, sCreditsText_MainGraphicDesigner};
static const struct CreditsEntry sCreditsEntry_GraphicDesigners                 = { 9,  TRUE, sCreditsText_GraphicDesigners};
static const struct CreditsEntry sCreditsEntry_PkmnDesigners                    = {10,  TRUE, sCreditsText_PkmnDesigners};
static const struct CreditsEntry sCreditsEntry_MusicComposition                 = {13,  TRUE, sCreditsText_MusicComposition};
static const struct CreditsEntry sCreditsEntry_SoundEffectsAndPkmnVoices        = { 4,  TRUE, sCreditsText_SoundEffectsAndPkmnVoices};
static const struct CreditsEntry sCreditsEntry_GameDesigners                    = {11,  TRUE, sCreditsText_GameDesigners};
static const struct CreditsEntry sCreditsEntry_ScenarioPlot                     = {11,  TRUE, sCreditsText_ScenarioPlot};
static const struct CreditsEntry sCreditsEntry_Scenario                         = {13,  TRUE, sCreditsText_Scenario};
static const struct CreditsEntry sCreditsEntry_ScriptDesigners                  = {10,  TRUE, sCreditsText_ScriptDesigners};
static const struct CreditsEntry sCreditsEntry_MapDesigners                     = {11,  TRUE, sCreditsText_MapDesigners};
static const struct CreditsEntry sCreditsEntry_MapDataDesigners                 = { 9,  TRUE, sCreditsText_MapDataDesigners};
static const struct CreditsEntry sCreditsEntry_ParametricDesigners              = { 9,  TRUE, sCreditsText_ParametricDesigners};
static const struct CreditsEntry sCreditsEntry_PokedexText                      = {11,  TRUE, sCreditsText_PokedexText};
static const struct CreditsEntry sCreditsEntry_EnvAndToolPgrms                  = { 6,  TRUE, sCreditsText_EnvAndToolPgrms};
static const struct CreditsEntry sCreditsEntry_NCLProductTesting                = {11,  TRUE, sCreditsText_NCLProductTesting};
static const struct CreditsEntry sCreditsEntry_SpecialThanks                    = {10,  TRUE, sCreditsText_SpecialThanks};
static const struct CreditsEntry sCreditsEntry_Coordinators                     = {11,  TRUE, sCreditsText_Coordinators};
static const struct CreditsEntry sCreditsEntry_Producers                        = {11,  TRUE, sCreditsText_Producers};
static const struct CreditsEntry sCreditsEntry_ExecProducers                    = { 7,  TRUE, sCreditsText_ExecProducers};
static const struct CreditsEntry sCreditsEntry_InfoSupervisors                  = {10,  TRUE, sCreditsText_InfoSupervisors};
static const struct CreditsEntry sCreditsEntry_TaskManagers                     = { 8,  TRUE, sCreditsText_TaskManagers};
static const struct CreditsEntry sCreditsEntry_BrailleCodeCheck                 = {10,  TRUE, sCreditsText_BrailleCodeCheck};
static const struct CreditsEntry sCreditsEntry_WorldDirector                    = {10,  TRUE, sCreditsText_WorldDirector};
static const struct CreditsEntry sCreditsEntry_BattleFrontierData               = { 8,  TRUE, sCreditsText_BattleFrontierData};
static const struct CreditsEntry sCreditsEntry_SupportProgrammers               = {10,  TRUE, sCreditsText_SupportProgrammers};
static const struct CreditsEntry sCreditsEntry_Artwork                          = {12,  TRUE, sCreditsText_Artwork};
static const struct CreditsEntry sCreditsEntry_LeadProgrammer                   = {10,  TRUE, sCreditsText_LeadProgrammer};
static const struct CreditsEntry sCreditsEntry_LeadGraphicArtist                = { 9,  TRUE, sCreditsText_LeadGraphicArtist};
static const struct CreditsEntry sCreditsEntry_SatoshiTajiri                    = {11, FALSE, sCreditsText_SatoshiTajiri};
static const struct CreditsEntry sCreditsEntry_JunichiMasuda                    = {11, FALSE, sCreditsText_JunichiMasuda};
static const struct CreditsEntry sCreditsEntry_KenSugimori                      = {11, FALSE, sCreditsText_KenSugimori};
static const struct CreditsEntry sCreditsEntry_ShigekiMorimoto                  = {11, FALSE, sCreditsText_ShigekiMorimoto};
static const struct CreditsEntry sCreditsEntry_TetsuyaWatanabe                  = {11, FALSE, sCreditsText_TetsuyaWatanabe};
static const struct CreditsEntry sCreditsEntry_HisashiSogabe                    = {11, FALSE, sCreditsText_HisashiSogabe};
static const struct CreditsEntry sCreditsEntry_SosukeTamada                     = {11, FALSE, sCreditsText_SosukeTamada};
static const struct CreditsEntry sCreditsEntry_AkitoMori                        = {11, FALSE, sCreditsText_AkitoMori};
static const struct CreditsEntry sCreditsEntry_KeitaKagaya                      = {11, FALSE, sCreditsText_KeitaKagaya};
static const struct CreditsEntry sCreditsEntry_YoshinoriMatsuda                 = {11, FALSE, sCreditsText_YoshinoriMatsuda};
static const struct CreditsEntry sCreditsEntry_HiroyukiNakamura                 = {11, FALSE, sCreditsText_HiroyukiNakamura};
static const struct CreditsEntry sCreditsEntry_MasaoTaya                        = {11, FALSE, sCreditsText_MasaoTaya};
static const struct CreditsEntry sCreditsEntry_SatoshiNohara                    = {11, FALSE, sCreditsText_SatoshiNohara};
static const struct CreditsEntry sCreditsEntry_TomomichiOhta                    = {11, FALSE, sCreditsText_TomomichiOhta};
static const struct CreditsEntry sCreditsEntry_MiyukiIwasawa                    = {11, FALSE, sCreditsText_MiyukiIwasawa};
static const struct CreditsEntry sCreditsEntry_TakenoriOhta                     = {11, FALSE, sCreditsText_TakenoriOhta};
static const struct CreditsEntry sCreditsEntry_HironobuYoshida                  = {11, FALSE, sCreditsText_HironobuYoshida};
static const struct CreditsEntry sCreditsEntry_MotofumiFujiwara                 = {11, FALSE, sCreditsText_MotofumiFujiwara};
static const struct CreditsEntry sCreditsEntry_SatoshiOhta                      = {11, FALSE, sCreditsText_SatoshiOhta};
static const struct CreditsEntry sCreditsEntry_AsukaIwashita                    = {11, FALSE, sCreditsText_AsukaIwashita};
static const struct CreditsEntry sCreditsEntry_AimiTomita                       = {11, FALSE, sCreditsText_AimiTomita};
static const struct CreditsEntry sCreditsEntry_TakaoUnno                        = {11, FALSE, sCreditsText_TakaoUnno};
static const struct CreditsEntry sCreditsEntry_KanakoEo                         = {11, FALSE, sCreditsText_KanakoEo};
static const struct CreditsEntry sCreditsEntry_JunOkutani                       = {11, FALSE, sCreditsText_JunOkutani};
static const struct CreditsEntry sCreditsEntry_AtsukoNishida                    = {11, FALSE, sCreditsText_AtsukoNishida};
static const struct CreditsEntry sCreditsEntry_MuneoSaito                       = {11, FALSE, sCreditsText_MuneoSaito};
static const struct CreditsEntry sCreditsEntry_RenaYoshikawa                    = {11, FALSE, sCreditsText_RenaYoshikawa};
static const struct CreditsEntry sCreditsEntry_GoIchinose                       = {11, FALSE, sCreditsText_GoIchinose};
static const struct CreditsEntry sCreditsEntry_MorikazuAoki                     = {11, FALSE, sCreditsText_MorikazuAoki};
static const struct CreditsEntry sCreditsEntry_KojiNishino                      = {11, FALSE, sCreditsText_KojiNishino};
static const struct CreditsEntry sCreditsEntry_KenjiMatsushima                  = {11, FALSE, sCreditsText_KenjiMatsushima};
static const struct CreditsEntry sCreditsEntry_TetsujiOhta                      = {11, FALSE, sCreditsText_TetsujiOhta};
static const struct CreditsEntry sCreditsEntry_HitomiSato                       = {11, FALSE, sCreditsText_HitomiSato};
static const struct CreditsEntry sCreditsEntry_TakeshiKawachimaru               = {11, FALSE, sCreditsText_TakeshiKawachimaru};
static const struct CreditsEntry sCreditsEntry_TeruyukiShimoyamada              = {11, FALSE, sCreditsText_TeruyukiShimoyamada};
static const struct CreditsEntry sCreditsEntry_ShigeruOhmori                    = {11, FALSE, sCreditsText_ShigeruOhmori};
static const struct CreditsEntry sCreditsEntry_TadashiTakahashi                 = {11, FALSE, sCreditsText_TadashiTakahashi};
static const struct CreditsEntry sCreditsEntry_ToshinobuMatsumiya               = {11, FALSE, sCreditsText_ToshinobuMatsumiya};
static const struct CreditsEntry sCreditsEntry_AkihitoTomisawa                  = {11, FALSE, sCreditsText_AkihitoTomisawa};
static const struct CreditsEntry sCreditsEntry_HirokiEnomoto                    = {11, FALSE, sCreditsText_HirokiEnomoto};
static const struct CreditsEntry sCreditsEntry_KazuyukiTerada                   = {11, FALSE, sCreditsText_KazuyukiTerada};
static const struct CreditsEntry sCreditsEntry_YuriSakurai                      = {11, FALSE, sCreditsText_YuriSakurai};
static const struct CreditsEntry sCreditsEntry_HiromiSagawa                     = {11, FALSE, sCreditsText_HiromiSagawa};
static const struct CreditsEntry sCreditsEntry_KenjiTominaga                    = {11, FALSE, sCreditsText_KenjiTominaga};
static const struct CreditsEntry sCreditsEntry_YoshioTajiri                     = {11, FALSE, sCreditsText_YoshioTajiri};
static const struct CreditsEntry sCreditsEntry_TeikoSasaki                      = {11, FALSE, sCreditsText_TeikoSasaki};
static const struct CreditsEntry sCreditsEntry_SachikoHamano                    = {11, FALSE, sCreditsText_SachikoHamano};
static const struct CreditsEntry sCreditsEntry_ChieMatsumiya                    = {11, FALSE, sCreditsText_ChieMatsumiya};
static const struct CreditsEntry sCreditsEntry_AkikoShinozaki                   = {11, FALSE, sCreditsText_AkikoShinozaki};
static const struct CreditsEntry sCreditsEntry_AstukoFujii                      = {11, FALSE, sCreditsText_AstukoFujii};
static const struct CreditsEntry sCreditsEntry_NozomuSaito                      = {11, FALSE, sCreditsText_NozomuSaito};
static const struct CreditsEntry sCreditsEntry_KenkichiToyama                   = {11, FALSE, sCreditsText_KenkichiToyama};
static const struct CreditsEntry sCreditsEntry_SuguruNakatsui                   = {11, FALSE, sCreditsText_SuguruNakatsui};
static const struct CreditsEntry sCreditsEntry_YumiFunasaka                     = {11, FALSE, sCreditsText_YumiFunasaka};
static const struct CreditsEntry sCreditsEntry_NaokoYanase                      = {11, FALSE, sCreditsText_NaokoYanase};
static const struct CreditsEntry sCreditsEntry_NCLSuperMarioClub                = {11, FALSE, sCreditsText_NCLSuperMarioClub};
static const struct CreditsEntry sCreditsEntry_AtsushiTada                      = {11, FALSE, sCreditsText_AtsushiTada};
static const struct CreditsEntry sCreditsEntry_TakahiroOhnishi                  = {11, FALSE, sCreditsText_TakahiroOhnishi};
static const struct CreditsEntry sCreditsEntry_NorihideOkamura                  = {11, FALSE, sCreditsText_NorihideOkamura};
static const struct CreditsEntry sCreditsEntry_HiroNakamura                     = {11, FALSE, sCreditsText_HiroNakamura};
static const struct CreditsEntry sCreditsEntry_HiroyukiUesugi                   = {11, FALSE, sCreditsText_HiroyukiUesugi};
static const struct CreditsEntry sCreditsEntry_TerukiMurakawa                   = {11, FALSE, sCreditsText_TerukiMurakawa};
static const struct CreditsEntry sCreditsEntry_AkiraKinashi                     = {11, FALSE, sCreditsText_AkiraKinashi};
static const struct CreditsEntry sCreditsEntry_MichikoTakizawa                  = {11, FALSE, sCreditsText_MichikoTakizawa};
static const struct CreditsEntry sCreditsEntry_MakikoTakada                     = {11, FALSE, sCreditsText_MakikoTakada};
static const struct CreditsEntry sCreditsEntry_TakanaoKondo                     = {11, FALSE, sCreditsText_TakanaoKondo};
static const struct CreditsEntry sCreditsEntry_AiMashima                        = {11, FALSE, sCreditsText_AiMashima};
static const struct CreditsEntry sCreditsEntry_GakujiNomoto                     = {11, FALSE, sCreditsText_GakujiNomoto};
static const struct CreditsEntry sCreditsEntry_TakehiroIzushi                   = {11, FALSE, sCreditsText_TakehiroIzushi};
static const struct CreditsEntry sCreditsEntry_HitoshiYamagami                  = {11, FALSE, sCreditsText_HitoshiYamagami};
static const struct CreditsEntry sCreditsEntry_KyokoWatanabe                    = {11, FALSE, sCreditsText_KyokoWatanabe};
static const struct CreditsEntry sCreditsEntry_TakaoNakano                      = {11, FALSE, sCreditsText_TakaoNakano};
static const struct CreditsEntry sCreditsEntry_HiroyukiJinnai                   = {11, FALSE, sCreditsText_HiroyukiJinnai};
static const struct CreditsEntry sCreditsEntry_HiroakiTsuru                     = {11, FALSE, sCreditsText_HiroakiTsuru};
static const struct CreditsEntry sCreditsEntry_TsunekazIshihara                 = {11, FALSE, sCreditsText_TsunekazIshihara};
static const struct CreditsEntry sCreditsEntry_SatoruIwata                      = {11, FALSE, sCreditsText_SatoruIwata};
static const struct CreditsEntry sCreditsEntry_KazuyaSuyama                     = {11, FALSE, sCreditsText_KazuyaSuyama};
static const struct CreditsEntry sCreditsEntry_SatoshiMitsuhara                 = {11, FALSE, sCreditsText_SatoshiMitsuhara};
static const struct CreditsEntry sCreditsEntry_JapanBrailleLibrary              = { 9, FALSE, sCreditsText_JapanBrailleLibrary};
static const struct CreditsEntry sCreditsEntry_TomotakaKomura                   = {11, FALSE, sCreditsText_TomotakaKomura};
static const struct CreditsEntry sCreditsEntry_MikikoOhhashi                    = {11, FALSE, sCreditsText_MikikoOhhashi};
static const struct CreditsEntry sCreditsEntry_DaisukeHoshino                   = {11, FALSE, sCreditsText_DaisukeHoshino};
static const struct CreditsEntry sCreditsEntry_KenjiroIto                       = {11, FALSE, sCreditsText_KenjiroIto};
static const struct CreditsEntry sCreditsEntry_RuiKawaguchi                     = {11, FALSE, sCreditsText_RuiKawaguchi};
static const struct CreditsEntry sCreditsEntry_ShunsukeKohori                   = {11, FALSE, sCreditsText_ShunsukeKohori};
static const struct CreditsEntry sCreditsEntry_SachikoNakamichi                 = {11, FALSE, sCreditsText_SachikoNakamichi};
static const struct CreditsEntry sCreditsEntry_FujikoNomura                     = {11, FALSE, sCreditsText_FujikoNomura};
static const struct CreditsEntry sCreditsEntry_KazukiYoshihara                  = {11, FALSE, sCreditsText_KazukiYoshihara};
static const struct CreditsEntry sCreditsEntry_RetsujiNomoto                    = {11, FALSE, sCreditsText_RetsujiNomoto};
static const struct CreditsEntry sCreditsEntry_AzusaTajima                      = {11, FALSE, sCreditsText_AzusaTajima};
static const struct CreditsEntry sCreditsEntry_ShusakuEgami                     = {11, FALSE, sCreditsText_ShusakuEgami};
static const struct CreditsEntry sCreditsEntry_PackageAndManual                 = { 0,  TRUE, sCreditsText_PackageAndManual};
static const struct CreditsEntry sCreditsEntry_EnglishVersion                   = { 0,  TRUE, sCreditsText_EnglishVersion};
static const struct CreditsEntry sCreditsEntry_Translator                       = { 0,  TRUE, sCreditsText_Translator};
static const struct CreditsEntry sCreditsEntry_TextEditor                       = { 0,  TRUE, sCreditsText_TextEditor};
static const struct CreditsEntry sCreditsEntry_NCLCoordinator                   = { 0,  TRUE, sCreditsText_NCLCoordinator};
static const struct CreditsEntry sCreditsEntry_GraphicDesigner                  = { 0,  TRUE, sCreditsText_GraphicDesigner};
static const struct CreditsEntry sCreditsEntry_NOAProductTesting                = { 0,  TRUE, sCreditsText_NOAProductTesting};
static const struct CreditsEntry sCreditsEntry_HideyukiNakajima                 = { 0, FALSE, sCreditsText_HideyukiNakajima};
static const struct CreditsEntry sCreditsEntry_HidenoriSaeki                    = { 0, FALSE, sCreditsText_HidenoriSaeki};
static const struct CreditsEntry sCreditsEntry_YokoWatanabe                     = { 0, FALSE, sCreditsText_YokoWatanabe};
static const struct CreditsEntry sCreditsEntry_SakaeKimura                      = { 0, FALSE, sCreditsText_SakaeKimura};
static const struct CreditsEntry sCreditsEntry_ChiakiShinkai                    = { 0, FALSE, sCreditsText_ChiakiShinkai};
static const struct CreditsEntry sCreditsEntry_SethMcMahill                     = { 0, FALSE, sCreditsText_SethMcMahill};
static const struct CreditsEntry sCreditsEntry_NobOgasawara                     = { 0, FALSE, sCreditsText_NobOgasawara};
static const struct CreditsEntry sCreditsEntry_TeresaLillygren                  = { 0, FALSE, sCreditsText_TeresaLillygren};
static const struct CreditsEntry sCreditsEntry_KimikoNakamichi                  = { 0, FALSE, sCreditsText_KimikoNakamichi};
static const struct CreditsEntry sCreditsEntry_SouichiYamamoto                  = { 0, FALSE, sCreditsText_SouichiYamamoto};
static const struct CreditsEntry sCreditsEntry_YuichiroIto                      = { 0, FALSE, sCreditsText_YuichiroIto};
static const struct CreditsEntry sCreditsEntry_ThomasHertzog                    = { 0, FALSE, sCreditsText_ThomasHertzog};
static const struct CreditsEntry sCreditsEntry_MikaKurosawa                     = { 0, FALSE, sCreditsText_MikaKurosawa};
static const struct CreditsEntry sCreditsEntry_NationalFederationBlind          = { 0, FALSE, sCreditsText_NationalFederationBlind};
static const struct CreditsEntry sCreditsEntry_PatriciaAMaurer                  = { 0, FALSE, sCreditsText_PatriciaAMaurer};
static const struct CreditsEntry sCreditsEntry_EuropeanBlindUnion               = { 0, FALSE, sCreditsText_EuropeanBlindUnion};
static const struct CreditsEntry sCreditsEntry_AustralianBrailleAuthority       = { 0, FALSE, sCreditsText_AustralianBrailleAuthority};
static const struct CreditsEntry sCreditsEntry_RoyalNewZealandFederationBlind   = { 0, FALSE, sCreditsText_RoyalNewZealandFederationBlind};
static const struct CreditsEntry sCreditsEntry_MotoyasuTojima                   = { 0, FALSE, sCreditsText_MotoyasuTojima};
static const struct CreditsEntry sCreditsEntry_NicolaPrattBarlow                = { 0, FALSE, sCreditsText_NicolaPrattBarlow};
static const struct CreditsEntry sCreditsEntry_ShellieDow                       = { 0, FALSE, sCreditsText_ShellieDow};
static const struct CreditsEntry sCreditsEntry_ErikJohnson                      = { 0, FALSE, sCreditsText_ErikJohnson};
*/

#define _ &sCreditsEntry_EmptyString
static const struct CreditsEntry *const sCreditsEntryPointerTable[PAGE_COUNT][ENTRIES_PER_PAGE] =
{
    [PAGE_TITLE_HACK] = {
        _,
        &sCreditsEntry_PkmnEmeraldVersion,
        &sCreditsEntry_Credits,
        _,
        _
    },
    [PAGE_CREATOR] = {
        _,
        &sCreditsEntry_Creator,
        &sCreditsEntry_Shahar,
        _,
        _
    },
    [PAGE_PROGRAMMING] = {
        _,
        &sCreditsEntry_Programming,
        &sCreditsEntry_Shahar,
        _,
        _
    },
    [PAGE_MAPPING] = {
        _,
        &sCreditsEntry_Mapping,
        &sCreditsEntry_Shahar,
        _,
        _
    },
    [PAGE_SCRIPTING] = {
        _,
        &sCreditsEntry_Scripting,
        &sCreditsEntry_Shahar,
        _,
        _
    },
    [PAGE_ART] = {
        _,
        &sCreditsEntry_Art,
        &sCreditsEntry_Shahar,
        _,
        _
    },
    [PAGE_BASE] = {
        &sCreditsEntry_Base,
        &sCreditsEntry_Gamefreak,
        &sCreditsEntry_Nintendo,
        &sCreditsEntry_CreaturesInc,
        _
    },
    [PAGE_DECOMP] = {
        _,
        &sCreditsEntry_Decomp,
        &sCreditsEntry_pret,
        &sCreditsEntry_RHH,
        _
    },
    [PAGE_TOOLS] = {
        &sCreditsEntry_Tools,
        &sCreditsEntry_VSC,
        &sCreditsEntry_GitHub,
        &sCreditsEntry_Porymap,
        _
    },
    [PAGE_TOOLS_2] = {
        &sCreditsEntry_Tools,
        &sCreditsEntry_GraphicsGale,
        &sCreditsEntry_Aseprite,
        &sCreditsEntry_TilemapStudio,
        _
    },
    [PAGE_OW_TILES] = {
        &sCreditsEntry_OWTiles,
        &sCreditsEntry_Shahar,
        &sCreditsEntry_LeoB,
        &sCreditsEntry_Xencleamas,
        _
    },
    [PAGE_BACKGROUND_ART] = {
        &sCreditsEntry_BackgroundArt,
        &sCreditsEntry_Shahar,
        _,//&sCreditsEntry_kWharever,
        _,
        _
    },
    [PAGE_SPRITES] = {
        &sCreditsEntry_Sprites,
        &sCreditsEntry_Shahar,
        &sCreditsEntry_aveontrainer,
        _,
        _
    },
    [PAGE_OW_OBJECTS] = {
        &sCreditsEntry_OWObjects,
        &sCreditsEntry_Shahar,
        &sCreditsEntry_aveontrainer,
        _,
        _
    },
    [PAGE_COMPOSER] = {
        &sCreditsEntry_Composer,
        &sCreditsEntry_Karl,
        _,
        _,
        _
    },
    [PAGE_FEATURE_BRANCH] = {
        &sCreditsEntry_FeatureBranch,
        &sCreditsEntry_BattleUI,
        &sCreditsEntry_Nico,
        &sCreditsEntry_Archie,
        &sCreditsEntry_Shahar
    },
    [PAGE_SUPPORT] = {
        _,
        &sCreditsEntry_Support,
        &sCreditsEntry_AquasHideout,
        &sCreditsEntry_Maya,
        _
    },
        [PAGE_PLAYTESTER] = {
        &sCreditsEntry_Playtester,
        &sCreditsEntry_Shahar,
        &sCreditsEntry_Aio,
        _,
        _
    },
    [PAGE_SPECIAL_THANKS] = {
        _,
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_Shahar,
        _,
        _
    },

    /*
    [PAGE_DIRECTOR] = {
        _,
        &sCreditsEntry_Director,
        &sCreditsEntry_ShigekiMorimoto,
        _,
        _,
    },
    [PAGE_ART_DIRECTOR] = {
        _,
        &sCreditsEntry_ArtDirector,
        &sCreditsEntry_KenSugimori,
        _,
        _,
    },
    [PAGE_WORLD_DIRECTOR] = {
        _,
        &sCreditsEntry_WorldDirector,
        &sCreditsEntry_JunichiMasuda,
        _,
        _,
    },
    [PAGE_LEAD_PROGRAMMER] = {
        &sCreditsEntry_LeadProgrammer,
        &sCreditsEntry_HisashiSogabe,
        &sCreditsEntry_LeadGraphicArtist,
        &sCreditsEntry_MotofumiFujiwara,
        _,
    },
    [PAGE_PROGRAMMERS_1] = {
        &sCreditsEntry_Programmers,
        &sCreditsEntry_HisashiSogabe,
        &sCreditsEntry_TomomichiOhta,
        &sCreditsEntry_NozomuSaito,
        _,
    },
    [PAGE_PROGRAMMERS_2] = {
        &sCreditsEntry_Programmers,
        &sCreditsEntry_AkitoMori,
        &sCreditsEntry_HiroyukiNakamura,
        &sCreditsEntry_MasaoTaya,
        _,
    },
    [PAGE_PROGRAMMERS_3] = {
        &sCreditsEntry_Programmers,
        &sCreditsEntry_SatoshiNohara,
        &sCreditsEntry_MiyukiIwasawa,
        &sCreditsEntry_YoshinoriMatsuda,
        &sCreditsEntry_KeitaKagaya,
    },
    [PAGE_PROGRAMMERS_4] = {
        &sCreditsEntry_Programmers,
        &sCreditsEntry_TetsuyaWatanabe,
        &sCreditsEntry_SosukeTamada,
        &sCreditsEntry_TakenoriOhta,
        _,
    },
    [PAGE_GRAPHIC_DESIGNERS_1] = {
        _,
        &sCreditsEntry_GraphicDesigners,
        &sCreditsEntry_MotofumiFujiwara,
        &sCreditsEntry_SatoshiOhta,
        _,
    },
    [PAGE_GRAPHIC_DESIGNERS_2] = {
        &sCreditsEntry_GraphicDesigners,
        &sCreditsEntry_KenkichiToyama,
        &sCreditsEntry_AsukaIwashita,
        &sCreditsEntry_TakaoUnno,
        _,
    },
    [PAGE_GRAPHIC_DESIGNERS_3] = {
        &sCreditsEntry_GraphicDesigners,
        &sCreditsEntry_KenSugimori,
        &sCreditsEntry_HironobuYoshida,
        &sCreditsEntry_AimiTomita,
        &sCreditsEntry_KanakoEo,
    },
    [PAGE_MUSIC_COMPOSITION] = {
        &sCreditsEntry_MusicComposition,
        &sCreditsEntry_GoIchinose,
        &sCreditsEntry_JunichiMasuda,
        &sCreditsEntry_MorikazuAoki,
        &sCreditsEntry_HitomiSato,
    },
    [PAGE_SOUND_EFFECTS] = {
        _,
        &sCreditsEntry_SoundEffectsAndPkmnVoices,
        &sCreditsEntry_GoIchinose,
        &sCreditsEntry_MorikazuAoki,
        _,
    },
    [PAGE_GAME_DESIGNERS_1] = {
        &sCreditsEntry_GameDesigners,
        &sCreditsEntry_ShigekiMorimoto,
        &sCreditsEntry_TeruyukiShimoyamada,
        &sCreditsEntry_TakeshiKawachimaru,
        &sCreditsEntry_AkihitoTomisawa,
    },
    [PAGE_GAME_DESIGNERS_2] = {
        &sCreditsEntry_GameDesigners,
        &sCreditsEntry_SuguruNakatsui,
        &sCreditsEntry_TetsujiOhta,
        &sCreditsEntry_HitomiSato,
        &sCreditsEntry_KenjiMatsushima,
    },
    [PAGE_GAME_DESIGNERS_3] = {
        &sCreditsEntry_GameDesigners,
        &sCreditsEntry_JunichiMasuda,
        &sCreditsEntry_KojiNishino,
        &sCreditsEntry_ShigeruOhmori,
        &sCreditsEntry_TadashiTakahashi,
    },
    [PAGE_SCENARIO_PLOT] = {
        &sCreditsEntry_ScenarioPlot,
        &sCreditsEntry_AkihitoTomisawa,
        &sCreditsEntry_JunichiMasuda,
        &sCreditsEntry_KojiNishino,
        _,
    },
    [PAGE_SCENARIO] = {
        &sCreditsEntry_Scenario,
        &sCreditsEntry_AkihitoTomisawa,
        &sCreditsEntry_HitomiSato,
        &sCreditsEntry_ToshinobuMatsumiya,
        _,
    },
    [PAGE_SCRIPT_DESIGNERS] = {
        &sCreditsEntry_ScriptDesigners,
        &sCreditsEntry_TomomichiOhta,
        &sCreditsEntry_SatoshiNohara,
        _,
        _,
    },
    [PAGE_MAP_DESIGNERS] = {
        &sCreditsEntry_MapDesigners,
        &sCreditsEntry_SuguruNakatsui,
        &sCreditsEntry_TeruyukiShimoyamada,
        &sCreditsEntry_ShigeruOhmori,
        &sCreditsEntry_TetsujiOhta,
    },
    [PAGE_BATTLE_FRONTIER_DATA] = {
        _,
        &sCreditsEntry_BattleFrontierData,
        &sCreditsEntry_TetsujiOhta,
        _,
        _,
    },
    [PAGE_PARAMETRIC_DESIGNERS] = {
        &sCreditsEntry_ParametricDesigners,
        &sCreditsEntry_TeruyukiShimoyamada,
        &sCreditsEntry_ShigekiMorimoto,
        &sCreditsEntry_TetsujiOhta,
        &sCreditsEntry_KojiNishino,
    },
    [PAGE_POKEDEX_TEXT] = {
        _,
        &sCreditsEntry_PokedexText,
        &sCreditsEntry_KenjiMatsushima,
        _,
        _,
    },
    [PAGE_ENVIRONMENT_AND_TOOL_PROGRAMS_1] = {
        &sCreditsEntry_EnvAndToolPgrms,
        &sCreditsEntry_HisashiSogabe,
        &sCreditsEntry_SosukeTamada,
        &sCreditsEntry_HiroyukiNakamura,
        &sCreditsEntry_AkitoMori,
    },
    [PAGE_PKMN_DESIGNERS_1] = {
        &sCreditsEntry_PkmnDesigners,
        &sCreditsEntry_KenSugimori,
        &sCreditsEntry_MotofumiFujiwara,
        &sCreditsEntry_ShigekiMorimoto,
        _,
    },
    [PAGE_PKMN_DESIGNERS_2] = {
        &sCreditsEntry_PkmnDesigners,
        &sCreditsEntry_HironobuYoshida,
        &sCreditsEntry_SatoshiOhta,
        &sCreditsEntry_AsukaIwashita,
        _,
    },
    [PAGE_PKMN_DESIGNERS_3] = {
        &sCreditsEntry_PkmnDesigners,
        &sCreditsEntry_TakaoUnno,
        &sCreditsEntry_KanakoEo,
        &sCreditsEntry_AimiTomita,
        _,
    },
    [PAGE_PKMN_DESIGNERS_4] = {
        &sCreditsEntry_PkmnDesigners,
        &sCreditsEntry_AtsukoNishida,
        &sCreditsEntry_MuneoSaito,
        &sCreditsEntry_RenaYoshikawa,
        &sCreditsEntry_JunOkutani,
    },
    [PAGE_SUPPORT_PROGRAMMERS] = {
        _,
        &sCreditsEntry_SupportProgrammers,
        &sCreditsEntry_SatoshiMitsuhara,
        &sCreditsEntry_DaisukeHoshino,
        _,
    },
    [PAGE_NCL_PRODUCT_TESTING] = {
        _,
        &sCreditsEntry_NCLProductTesting,
        &sCreditsEntry_NCLSuperMarioClub,
        _,
        _,
    },
    [PAGE_PACKAGE_AND_MANUAL] = {
        _,
        &sCreditsEntry_PackageAndManual,
        &sCreditsEntry_KenSugimori,
        _,
        _,
    },
    [PAGE_SPECIAL_THANKS_1] = {
        _,
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_KenjiTominaga,
        &sCreditsEntry_HirokiEnomoto,
        _,
    },
    [PAGE_SPECIAL_THANKS_2] = {
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_KazuyaSuyama,
        &sCreditsEntry_KenjiroIto,
        &sCreditsEntry_MichikoTakizawa,
        &sCreditsEntry_MakikoTakada,
    },
    [PAGE_SPECIAL_THANKS_3] = {
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_MikikoOhhashi,
        &sCreditsEntry_TakanaoKondo,
        &sCreditsEntry_RuiKawaguchi,
        _,
    },
    [PAGE_SPECIAL_THANKS_4] = {
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_TakahiroOhnishi,
        &sCreditsEntry_NorihideOkamura,
        &sCreditsEntry_ShunsukeKohori,
        _,
    },
    [PAGE_INFORMATION_SUPERVISORS] = {
        &sCreditsEntry_InfoSupervisors,
        &sCreditsEntry_KazuyukiTerada,
        &sCreditsEntry_YuriSakurai,
        &sCreditsEntry_YumiFunasaka,
        &sCreditsEntry_NaokoYanase,
    },
    [PAGE_ARTWORK_1] = {
        _,
        &sCreditsEntry_Artwork,
        &sCreditsEntry_SachikoNakamichi,
        &sCreditsEntry_FujikoNomura,
        _,
    },
    [PAGE_ARTWORK_2] = {
        _,
        &sCreditsEntry_Artwork,
        &sCreditsEntry_HideyukiNakajima,
        &sCreditsEntry_HidenoriSaeki,
        _,
    },
    [PAGE_ARTWORK_3] = {
        &sCreditsEntry_Artwork,
        &sCreditsEntry_YokoWatanabe,
        &sCreditsEntry_SakaeKimura,
        &sCreditsEntry_ChiakiShinkai,
        _,
    },
    [PAGE_COORDINATORS] = {
        &sCreditsEntry_Coordinators,
        &sCreditsEntry_KazukiYoshihara,
        &sCreditsEntry_AkiraKinashi,
        &sCreditsEntry_RetsujiNomoto,
        _,
    },
    [PAGE_ENGLISH_VERSION] = {
        _,
        &sCreditsEntry_EnglishVersion,
        &sCreditsEntry_HiroNakamura,
        &sCreditsEntry_SethMcMahill,
        _,
    },
    [PAGE_TRANSLATOR] = {
        _,
        &sCreditsEntry_Translator,
        &sCreditsEntry_NobOgasawara,
        _,
        _,
    },
    [PAGE_TEXT_EDITOR] = {
        _,
        &sCreditsEntry_TextEditor,
        &sCreditsEntry_TeresaLillygren,
        _,
        _,
    },
    [PAGE_NCL_COORDINATOR] = {
        _,
        &sCreditsEntry_NCLCoordinator,
        &sCreditsEntry_KimikoNakamichi,
        _,
        _,
    },
    [PAGE_PROGRAMMERS_5] = {
        &sCreditsEntry_Programmers,
        &sCreditsEntry_TerukiMurakawa,
        &sCreditsEntry_SouichiYamamoto,
        &sCreditsEntry_YuichiroIto,
        &sCreditsEntry_AkiraKinashi,
    },
    [PAGE_GRAPHIC_DESIGNER] = {
        _,
        &sCreditsEntry_GraphicDesigner,
        &sCreditsEntry_AkiraKinashi,
        _,
        _,
    },
    [PAGE_ENVIRONMENT_AND_TOOL_PROGRAMS_2] = {
        &sCreditsEntry_EnvAndToolPgrms,
        &sCreditsEntry_TerukiMurakawa,
        &sCreditsEntry_SouichiYamamoto,
        &sCreditsEntry_KimikoNakamichi,
        _,
    },
    [PAGE_NOA_TESTING] = {
        &sCreditsEntry_NOAProductTesting,
        &sCreditsEntry_ThomasHertzog,
        &sCreditsEntry_ErikJohnson,
        &sCreditsEntry_MikaKurosawa,
        _,
    },
    [PAGE_BRAILLE_CODE_CHECK_1] = {
        &sCreditsEntry_BrailleCodeCheck,
        &sCreditsEntry_NationalFederationBlind,
        &sCreditsEntry_PatriciaAMaurer,
        &sCreditsEntry_JapanBrailleLibrary,
        &sCreditsEntry_EuropeanBlindUnion,
    },
    [PAGE_BRAILLE_CODE_CHECK_2] = {
        _,
        &sCreditsEntry_BrailleCodeCheck,
        &sCreditsEntry_AustralianBrailleAuthority,
        &sCreditsEntry_RoyalNewZealandFederationBlind,
        _,
    },
    [PAGE_SPECIAL_THANKS_5] = {
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_HiroyukiUesugi,
        &sCreditsEntry_MotoyasuTojima,
        &sCreditsEntry_NicolaPrattBarlow,
        &sCreditsEntry_ShellieDow,
    },
    [PAGE_TASK_MANAGERS] = {
        _,
        &sCreditsEntry_TaskManagers,
        &sCreditsEntry_AzusaTajima,
        &sCreditsEntry_ShusakuEgami,
        _,
    },
    [PAGE_PRODUCERS] = {
        &sCreditsEntry_Producers,
        &sCreditsEntry_HiroyukiJinnai,
        &sCreditsEntry_HitoshiYamagami,
        &sCreditsEntry_GakujiNomoto,
        &sCreditsEntry_HiroakiTsuru,
    },
    [PAGE_EXECUTIVE_DIRECTOR] = {
        _,
        &sCreditsEntry_ExecutiveDirector,
        &sCreditsEntry_SatoshiTajiri,
        _,
        _,
    },
    [PAGE_EXECUTIVE_PRODUCERS_1] = {
        _,
        &sCreditsEntry_ExecProducers,
        &sCreditsEntry_SatoruIwata,
        _,
        _,
    },
    [PAGE_EXECUTIVE_PRODUCERS_2] = {
        _,
        &sCreditsEntry_ExecProducers,
        &sCreditsEntry_TsunekazIshihara,
        _,
        _,
    }, */
};
#undef _
