#pragma once

namespace EvData
{
    enum EvCmdID
    {
        _NOP = 1,
		_DUMMY = 2,
		_END = 3,
		_TIME_WAIT = 4,
		_LD_REG_VAL = 5,
		_LD_REG_WDATA = 6,
		_LD_REG_ADR = 7,
		_LD_ADR_VAL = 8,
		_LD_ADR_REG = 9,
		_LD_REG_REG = 10,
		_LD_ADR_ADR = 11,
		_CP_REG_REG = 12,
		_CP_REG_VAL = 13,
		_CP_REG_ADR = 14,
		_CP_ADR_REG = 15,
		_CP_ADR_VAL = 16,
		_CP_ADR_ADR = 17,
		_CMPVAL = 18,
		_CMPWK = 19,
		_DEBUG_WATCH_WORK = 20,
		_VM_ADD = 21,
		_CHG_COMMON_SCR = 22,
		_CHG_LOCAL_SCR = 23,
		_JUMP = 24,
		_OBJ_ID_JUMP = 25,
		_BG_ID_JUMP = 26,
		_PLAYER_DIR_JUMP = 27,
		_CALL = 28,
		_RET = 29,
		_IF_JUMP = 30,
		_IF_CALL = 31,
		_IFVAL_JUMP = 32,
		_IFVAL_CALL = 33,
		_IFWK_JUMP = 34,
		_IFWK_CALL = 35,
		_SWITCH = 36,
		_CASE_JUMP = 37,
		_CASE_CANCEL = 38,
		_ADD_WAITICON = 39,
		_DEL_WAITICON = 40,
		_FLAG_SET = 41,
		_ARRIVE_FLAG_SET = 42,
		_FLAG_RESET = 43,
		_FLAG_CHECK = 44,
		_IF_FLAGON_JUMP = 45,
		_IF_FLAGOFF_JUMP = 46,
		_IF_FLAGON_CALL = 47,
		_IF_FLAGOFF_CALL = 48,
		_FLAG_CHECK_WK = 49,
		_FLAG_SET_WK = 50,
		_TRAINER_FLAG_SET = 51,
		_TRAINER_FLAG_RESET = 52,
		_TRAINER_FLAG_CHECK = 53,
		_IF_TR_FLAGON_JUMP = 54,
		_IF_TR_FLAGOFF_JUMP = 55,
		_IF_TR_FLAGON_CALL = 56,
		_IF_TR_FLAGOFF_CALL = 57,
		_ADD_WK = 58,
		_SUB_WK = 59,
		_LDVAL = 60,
		_LDWK = 61,
		_LDWKVAL = 62,
		_TALKMSG_ALLPUT = 63,
		_TALKMSG_ALLPUT_ARC = 64,
		_TALKMSG_ARC = 65,
		_TALKMSG_ALLPUT_PMS = 66,
		_TALKMSG_PMS = 67,
		_TALKMSG_BTOWER_APPEAR = 68,
		_TALKMSG_NG_POKE_NAME = 69,
		_TALKMSG = 70,
		_TALKMSG_SP = 71,
		_TALKMSG_SP_AUTO = 72,
		_TALKMSG_NOSKIP = 73,
		_TALKMSG_CON_SIO = 74,
		_TALKMSG_AUTOGET = 75,
		_AB_KEYWAIT = 76,
		_AB_KEY_TIME_WAIT = 77,
		_LAST_KEYWAIT = 78,
		_NEXT_ANM_LAST_KEYWAIT = 79,
		_TALK_OPEN = 80,
		_TALK_CLOSE = 81,
		_TALK_CLOSE_NO_CLEAR = 82,
		_TALK_KEYWAIT = 83,
		_EASY_OBJ_MSG = 84,
		_EASY_MSG = 85,
		_BOARD_MAKE = 86,
		_INFOBOARD_MAKE = 87,
		_BOARD_REQ = 88,
		_BOARD_REQ_WAIT = 89,
		_BOARD_MSG = 90,
		_BOARD_END_WAIT = 91,
		_EASY_BOARD_MSG = 92,
		_EASY_INFOBOARD_MSG = 93,
		_MENU_REQ = 94,
		_BG_SCROLL = 95,
		_YES_NO_WIN = 96,
		_GUINNESS_WIN = 97,
		_BMPMENU_INIT = 98,
		_BMPMENU_INIT_EX = 99,
		_BMPMENU_MAKE_LIST = 100,
		_BMPMENU_MAKE_LIST16 = 101,
		_BMPMENU_START = 102,
		_SEL_WIN_JUMP = 103,
		_BMPLIST_INIT = 104,
		_BMPLIST_INIT_EX = 105,
		_BMPLIST_MAKE_LIST = 106,
		_BMPLIST_START = 107,
		_BMPMENU_HV_START = 108,
		_SE_PLAY = 109,
		_SE_STOP = 110,
		_SE_WAIT = 111,
		_VOICE_PLAY = 112,
		_VOICE_WAIT = 113,
		_EASY_VOICE_MSG = 114,
		_ME_PLAY = 115,
		_ME_WAIT = 116,
		_SND_INITIAL_VOL_SET = 117,
		_BGM_PLAY = 118,
		_BGM_PLAY_CHECK = 119,
		_BGM_STOP = 120,
		_BGM_NOW_MAP_PLAY = 121,
		_BGM_SPECIAL_SET = 122,
		_BGM_SPECIAL_CLR = 123,
		_BGM_FADEOUT = 124,
		_BGM_FADEOUT_PLAY = 125,
		_BGM_FADEIN = 126,
		_BGM_PLAYER_PAUSE = 127,
		_PLAYER_FIELD_DEMO_BGM_PLAY = 128,
		_CTRL_BGM_FLAG_SET = 129,
		_CTRL_BGM_FLAG_RESET = 130,
		_PERAP_DATA_CHECK = 131,
		_PERAP_REC_START = 132,
		_PERAP_REC_STOP = 133,
		_PERAP_SAVE = 134,
		_SND_CLIMAX_DATA_LOAD = 135,
		_OBJ_ANIME = 136,
		_OBJ_ANIME_POS = 137,
		_ANIME_LABEL = 138,
		_ANIME_DATA = 139,
		_OBJ_ANIME_WAIT = 140,
		_TALK_OBJ_PAUSE_ALL = 141,
		_OBJ_PAUSE_ALL = 142,
		_OBJ_PAUSE_CLEAR_ALL = 143,
		_OBJ_PAUSE = 144,
		_OBJ_PAUSE_CLEAR = 145,
		_OBJ_ADD = 146,
		_OBJ_DEL = 147,
		_VANISH_DUMMY_OBJ_ADD = 148,
		_VANISH_DUMMY_OBJ_DEL = 149,
		_TURN_HERO_SITE = 150,
		_TALK_OBJ_START = 151,
		_TALK_OBJ_START_TURN_NOT = 152,
		_TALK_OBJ_END = 153,
		_TALK_START = 154,
		_EVENT_START = 155,
		_TALK_END = 156,
		_EVENT_END = 157,
		_PLAYER_POS_GET = 158,
		_OBJ_POS_GET = 159,
		_PLAYER_POS_OFFSET_SET = 160,
		_PLAYER_DIR_GET = 161,
		_NOT_ZONE_DEL_SET = 162,
		_MOVE_CODE_CHANGE = 163,
		_MOVE_CODE_GET = 164,
		_PAIR_OBJID_SET = 165,
		_EVENT_DATA = 166,
		_EVENT_DATA_END = 167,
		_SP_EVENT_DATA_END = 168,
		_SCENE_CHANGE_LABEL = 169,
		_SCENE_CHANGE_DATA = 170,
		_SCENE_CHANGE_END = 171,
		_FLAG_CHANGE_LABEL = 172,
		_OBJ_CHANGE_LABEL = 173,
		_INIT_CHANGE_LABEL = 174,
		_ADD_GOLD = 175,
		_SUB_GOLD = 176,
		_COMP_GOLD = 177,
		_GOLD_WIN_WRITE = 178,
		_GOLD_WIN_DEL = 179,
		_GOLD_WRITE = 180,
		_COIN_WIN_WRITE = 181,
		_COIN_WIN_DEL = 182,
		_COIN_WRITE = 183,
		_GET_COIN_NUM = 184,
		_ADD_COIN = 185,
		_SUB_COIN = 186,
		_FLD_ITEM_EVENT = 187,
		_HIDE_ITEM_EVENT = 188,
		_ADD_ITEM = 189,
		_SUB_ITEM = 190,
		_ADD_ITEM_CHK = 191,
		_ITEM_CHK = 192,
		_WAZA_ITEM_CHK = 193,
		_GET_POCKET_NO = 194,
		_CHECK_POCKET = 195,
		_ADD_BOX_ITEM = 196,
		_CHK_BOX_ITEM = 197,
		_ADD_GOODS = 198,
		_SUB_GOODS = 199,
		_ADD_GOODS_CHK = 200,
		_GOODS_CHK = 201,
		_ADD_TRAP = 202,
		_SUB_TRAP = 203,
		_ADD_TRAP_CHK = 204,
		_TRAP_CHK = 205,
		_ADD_TREASURE = 206,
		_SUB_TREASURE = 207,
		_ADD_TREASURE_CHK = 208,
		_TREASURE_CHK = 209,
		_ADD_TAMA = 210,
		_SUB_TAMA = 211,
		_ADD_TAMA_CHK = 212,
		_TAMA_CHK = 213,
		_CB_SEAL_KIND_NUM_GET = 214,
		_CB_ITEM_NUM_GET = 215,
		_CB_ITEM_NUM_ADD = 216,
		_UNKNOWN_FORM_GET = 217,
		_ADD_POKEMON = 218,
		_ADD_TAMAGO = 219,
		_CHG_POKE_WAZA = 220,
		_CHK_POKE_WAZA = 221,
		_CHK_POKE_WAZA_GROUP = 222,
		_APPROVE_POISON_DEAD = 223,
		_REVENGE_TRAINER_SEARCH = 224,
		_INIT_WEATHER = 225,
		_SET_WEATHER = 226,
		_UPDATE_WEATHER = 227,
		_GET_MAP_POS = 228,
		_GET_TEMOTI_POKE_NUM = 229,
		_SET_MAP_PROC = 230,
		_FINISH_MAP_PROC = 231,
		_WIFI_AUTO_REG = 232,
		_WIFI_P2P_MATCH_EVENT_CALL = 233,
		_WIFI_P2P_MATCH_SET_DEL = 234,
		_COMM_GET_CURRENT_ID = 235,
		_DENDOU_NUM_GET = 236,
		_POKE_WINDOW_PUT = 237,
		_POKE_WINDOW_PUT_PP = 238,
		_POKE_WINDOW_DEL = 239,
		_POKE_WINDOW_ANM = 240,
		_POKE_WINDOW_ANM_WAIT = 241,
		_BTL_SEARCHER_EVENT_CALL = 242,
		_BTL_SEARCHER_DIR_MV_SET = 243,
		_MSG_BOY_EVENT = 244,
		_IMAGE_CLIP_SET_PROC = 245,
		_IMAGE_CLIP_VIEW_TV_SET_PROC = 246,
		_IMAGE_CLIP_VIEW_CON_SET_PROC = 247,
		_CUSTOM_BALL_EVENT_CALL = 248,
		_TMAP_BG_SET_PROC = 249,
		_BOX_SET_PROC = 250,
		_OEKAKI_BOARD_SET_PROC = 251,
		_TR_CARD_SET_PROC = 252,
		_TRADE_LIST_SET_PROC = 253,
		_RECORD_CORNER_SET_PROC = 254,
		_DENDOU_SET_PROC = 255,
		_PC_DENDOU_SET_PROC = 256,
		_WORLDTRADE_SET_PROC = 257,
		_DPW_INIT_PROC = 258,
		_FIRST_POKE_SELECT_PROC = 259,
		_FIRST_POKE_SELECT_SET_AND_DEL = 260,
		_BAG_SET_PROC_NORMAL = 261,
		_BAG_SET_PROC_KINOMI = 262,
		_BAG_GET_RESULT = 263,
		_POKELIST_SET_PROC = 264,
		_NPC_TRADE_POKELIST_SET_PROC = 265,
		_UNION_POKELIST_SET_PROC = 266,
		_POKELIST_GET_RESULT = 267,
		_CON_POKELIST_SET_PROC = 268,
		_CON_POKELIST_GET_RESULT = 269,
		_CON_POKESTATUS_SET_PROC = 270,
		_POKESTATUS_GET_RESULT = 271,
		_WIFI_EARTH_SET_PROC = 272,
		_EYE_TRAINER_MOVE_SET = 273,
		_EYE_TRAINER_MOVE_CHECK = 274,
		_EYE_TRAINER_TYPE_GET = 275,
		_EYE_TRAINER_ID_GET = 276,
		_NAMEIN = 277,
		_NAMEIN_POKE = 278,
		_WIPE_FADE_START = 279,
		_WIPE_FADE_END_CHECK = 280,
		_WHITE_OUT = 281,
		_WHITE_IN = 282,
		_BLACK_OUT = 283,
		_BLACK_IN = 284,
		_MAP_CHANGE = 285,
		_MAP_CHANGE_NONE_FADE = 286,
		_COLOSSEUM_MAP_CHANGE_IN = 287,
		_COLOSSEUM_MAP_CHANGE_OUT = 288,
		_GET_BEFORE_ZONE_ID = 289,
		_GET_NOW_ZONE_ID = 290,
		_KABENOBORI = 291,
		_NAMINORI = 292,
		_BICYCLE_CHECK = 293,
		_BICYCLE_REQ = 294,
		_BICYCLE_REQ_NON_BGM = 295,
		_CYCLING_ROAD_SET = 296,
		_PLAYER_FORM_GET = 297,
		_PLAYER_REQ_BIT_ON = 298,
		_PLAYER_REQ_START = 299,
		_TAKINOBORI = 300,
		_SORAWOTOBU = 301,
		_HIDEN_FLASH = 302,
		_HIDEN_KIRIBARAI = 303,
		_CUTIN = 304,
		_CON_HERO_CHANGE = 305,
		_PLAYER_NAME = 306,
		_RIVAL_NAME = 307,
		_SUPPORT_NAME = 308,
		_POKEMON_NAME = 309,
		_ITEM_NAME = 310,
		_POCKET_NAME = 311,
		_ITEM_WAZA_NAME = 312,
		_WAZA_NAME = 313,
		_NUMBER_NAME = 314,
		_NUMBER_NAME_EX = 315,
		_BIRTH_DAY_CHECK = 316,
		_ANOON_SEE_NUM = 317,
		_NICK_NAME = 318,
		_POKETCH_NAME = 319,
		_TR_TYPE_NAME = 320,
		_MY_TR_TYPE_NAME = 321,
		_POKEMON_NAME_EXTRA = 322,
		_FIRST_POKEMON_NAME = 323,
		_RIVAL_POKEMON_NAME = 324,
		_SUPPORT_POKEMON_NAME = 325,
		_FIRST_POKE_NO_GET = 326,
		_NUTS_NAME = 327,
		_SEIKAKU_NAME = 328,
		_GOODS_NAME = 329,
		_TRAP_NAME = 330,
		_TAMA_NAME = 331,
		_ZONE_NAME = 332,
		_GENERATE_INFO_GET = 333,
		_TRAINER_ID_GET = 334,
		_TRAINER_BTL_SET = 335,
		_TRAINER_MULTI_BTL_SET = 336,
		_TRAINER_MSG_SET = 337,
		_TRAINER_TALK_TYPE_GET = 338,
		_REVENGE_TRAINER_TALK_TYPE_GET = 339,
		_TRAINER_TYPE_GET = 340,
		_TRAINER_BGM_SET = 341,
		_TRAINER_LOSE = 342,
		_TRAINER_LOSE_CHECK = 343,
		_NORMAL_LOSE = 344,
		_LOSE_CHECK = 345,
		_SEACRET_POKE_RETRY_CHECK = 346,
		_HAIFU_POKE_RETRY_CHECK = 347,
		_2VS2_BATTLE_CHECK = 348,
		_DEBUG_BTL_SET = 349,
		_DEBUG_TRAINER_FLAG_SET = 350,
		_DEBUG_TRAINER_FLAG_ON_JUMP = 351,
		_DEBUG_TR_TALK_BTL = 352,
		_SEL_PARENT_WIN = 353,
		_SEL_CHILD_WIN = 354,
		_DEBUG_PARENT_WIN = 355,
		_DEBUG_CHILD_WIN = 356,
		_DEBUG_SIO_ENCOUNT = 357,
		_DEBUG_SIO_CONTEST = 358,
		_CONSIO_TIMING_SEND = 359,
		_CONSIO_TIMING_CHECK = 360,
		_CON_SYSTEM_CREATE = 361,
		_CON_SYSTEM_EXIT = 362,
		_CON_JUDGE_NAME_GET = 363,
		_CON_BREEDER_NAME_GET = 364,
		_CON_NICK_NAME_GET = 365,
		_CON_NUM_TAG_SET = 366,
		_CON_SIO_PARAM_INIT_SET = 367,
		_CONTEST_PROC = 368,
		_CON_RANK_NAME_GET = 369,
		_CON_TYPE_NAME_GET = 370,
		_CON_VICTORY_BREEDER_NAME_GET = 371,
		_CON_VICTORY_ITEM_NO_GET = 372,
		_CON_VICTORY_NICK_NAME_GET = 373,
		_CON_RANKING_CHECK = 374,
		_CON_VICTORY_ENTRY_NO_GET = 375,
		_CON_MY_ENTRY_NO_GET = 376,
		_CON_OBJ_CODE_GET = 377,
		_CON_POPULARITY_GET = 378,
		_CON_DESK_MODE_GET = 379,
		_CON_HAVE_RIBBON_CHECK = 380,
		_CON_RIBBON_NAME_GET = 381,
		_CON_ACCE_NO_GET = 382,
		_CON_ENTRY_PARAM_GET = 383,
		_CON_CAMERA_FLASH_SET = 384,
		_CON_CAMERA_FLASH_CHECK = 385,
		_CON_HBLANK_STOP = 386,
		_CON_HBLANK_START = 387,
		_CON_ENDING_SKIP_CHECK = 388,
		_CON_RECORD_DISP = 389,
		_CON_MSGPRINT_FLAG_SET = 390,
		_CON_MSGPRINT_FLAG_RESET = 391,
		_SP_LOCATION_SET = 392,
		_ELEVATOR_FLOOR_GET = 393,
		_ELEVATOR_FLOOR_WRITE = 394,
		_SHINOU_ZUKAN_SEE_NUM = 395,
		_SHINOU_ZUKAN_GET_NUM = 396,
		_ZENKOKU_ZUKAN_SEE_NUM = 397,
		_ZENKOKU_ZUKAN_GET_NUM = 398,
		_CHK_ZENKOKU_ZUKAN = 399,
		_GET_HYOUKA_MSGID = 400,
		_WILD_BTL_SET = 401,
		_SP_WILD_BTL_SET = 402,
		_FIRST_BTL_SET = 403,
		_CAPTURE_BTL_SET = 404,
		_HONEY_TREE = 405,
		_GET_HONEY_TREE_STATE = 406,
		_HONEY_TREE_BTL_SET = 407,
		_HONEY_TREE_AFTER_SET = 408,
		_TSIGN_SET_PROC = 409,
		_REPORT_SAVE_CHECK = 410,
		_REPORT_SAVE = 411,
		_REPORT_WIN_OPEN = 412,
		_REPORT_WIN_CLOSE = 413,
		_CLIP_TVSAVEDATA_CHECK = 414,
		_CLIP_CONSAVEDATA_CHECK = 415,
		_CLIP_TV_TITLE_SAVE = 416,
		_GET_POKETCH = 417,
		_GET_POKETCH_FLAG = 418,
		_POKETCH_ADD = 419,
		_POKETCH_CHECK = 420,
		_COMM_SYNCHRONIZE = 421,
		_COMM_RESET = 422,
		_UNION_PARENT_CARD_TALK_NO = 423,
		_UNION_GET_INFO_TALK_NO = 424,
		_UNION_BEACON_CHANGE = 425,
		_UNION_CONNECT_TALK_DENIED = 426,
		_UNION_CONNECT_TALK_OK = 427,
		_UNION_TRAINER_NAME_REGIST = 428,
		_UNION_RETURN_SETUP = 429,
		_UNION_CONNECT_CUT_RESTART = 430,
		_UNION_GET_TALK_NUMBER = 431,
		_UNION_ID_SET = 432,
		_UNION_RESULT_GET = 433,
		_UNION_OBJ_ALL_VANISH = 434,
		_UNION_SCRIPT_RESULT_SET = 435,
		_UNION_PARENT_START_COMMAND_SET = 436,
		_UNION_CHILD_SELECT_COMMAND_SET = 437,
		_UNION_CONNECT_START = 438,
		_UNION_MAP_CHANGE = 439,
		_UNION_VIEW_TR_SEL_SET = 440,
		_UNION_VIEW_TR_TYPE_MSG_GET = 441,
		_UNION_VIEW_TR_TYPE_NO_GET = 442,
		_UNION_VIEW_MY_STATUS_SET = 443,
		_SYS_FLAG_ZUKAN_GET = 444,
		_SYS_FLAG_ZUKAN_SET = 445,
		_SYS_FLAG_SHOES_GET = 446,
		_SYS_FLAG_SHOES_SET = 447,
		_SYS_FLAG_BADGE_GET = 448,
		_SYS_FLAG_BADGE_SET = 449,
		_SYS_FLAG_BADGE_COUNT = 450,
		_SYS_FLAG_BAG_GET = 451,
		_SYS_FLAG_BAG_SET = 452,
		_SYS_FLAG_PAIR_GET = 453,
		_SYS_FLAG_PAIR_SET = 454,
		_SYS_FLAG_PAIR_RESET = 455,
		_SYS_FLAG_ONE_STEP_GET = 456,
		_SYS_FLAG_ONE_STEP_SET = 457,
		_SYS_FLAG_ONE_STEP_RESET = 458,
		_SYS_FLAG_GAME_CLEAR_GET = 459,
		_SYS_FLAG_GAME_CLEAR_SET = 460,
		_SYS_FLAG_KAIRIKI_SET = 461,
		_SYS_FLAG_KAIRIKI_RESET = 462,
		_SYS_FLAG_KAIRIKI_GET = 463,
		_SYS_FLAG_FLASH_SET = 464,
		_SYS_FLAG_FLASH_RESET = 465,
		_SYS_FLAG_FLASH_GET = 466,
		_SYS_FLAG_KIRIBARAI_SET = 467,
		_SYS_FLAG_KIRIBARAI_RESET = 468,
		_SYS_FLAG_KIRIBARAI_GET = 469,
		_SHOP_CALL = 470,
		_FIX_SHOP_CALL = 471,
		_FIX_GOODS_CALL = 472,
		_FIX_SEAL_CALL = 473,
		_ACCE_SHOP_CALL = 474,
		_PLAYER_REPORT_DRAW_SET = 475,
		_PLAYER_REPORT_DRAW_DEL = 476,
		_GAME_OVER_CALL = 477,
		_SET_WARP_ID = 478,
		_GET_MY_SEX = 479,
		_PC_KAIFUKU = 480,
		_UG_MAN_SHOP_NPC_RAND_PLACE = 481,
		_COMM_DIRECT_END = 482,
		_COMM_DIRECT_END_TIMING = 483,
		_COMM_DIRECT_ENTER_BTL_ROOM = 484,
		_COMM_PLAYER_SET_DIR = 485,
		_SET_UP_DOOR_ANIME = 486,
		_WAIT_3D_ANIME = 487,
		_FREE_3D_ANIME = 488,
		_SEQ_OPEN_DOOR = 489,
		_SEQ_CLOSE_DOOR = 490,
		_PMS_INPUT_SINGLE = 491,
		_PMS_INPUT_DOUBLE = 492,
		_PMS_BUF = 493,
		_GET_SEED_STATUS = 494,
		_GET_SEED_TYPE = 495,
		_GET_SEED_COMPOST = 496,
		_GET_SEED_GROUND = 497,
		_GET_SEED_COUNT = 498,
		_SET_SEED_COMPOST = 499,
		_SET_SEED_NUTS = 500,
		_SET_SEED_WATER = 501,
		_TAKE_SEED = 502,
		_SXY_POS_CHANGE = 503,
		_OBJ_POS_CHANGE = 504,
		_SXY_MV_CHANGE = 505,
		_SXY_DIR_CHANGE = 506,
		_SXY_EXIT_POS_CHANGE = 507,
		_SXY_BG_POS_CHANGE = 508,
		_OBJ_DIR_CHANGE = 509,
		_RETURN_SCRIPT_WK_SET = 510,
		_MSGEXPANDBUF = 511,
		_GET_SODATE_NAME = 512,
		_GET_SODATEYA_ZIISAN = 513,
		_INIT_WATER_GYM = 514,
		_PUSH_WATER_GYM_BUTTON = 515,
		_INIT_GHOST_GYM = 516,
		_MOVE_GHOST_GYM_LIFT = 517,
		_INIT_STEEL_GYM = 518,
		_INIT_COMBAT_GYM = 519,
		_INIT_ELEC_GYM = 520,
		_ROTATE_ELEC_GYM_GEAR = 521,
		_GET_POKE_COUNT = 522,
		_GET_POKE_COUNT2 = 523,
		_GET_POKE_COUNT3 = 524,
		_GET_POKE_COUNT4 = 525,
		_GET_TAMAGO_COUNT = 526,
		_UG_SHOP_MENU_INIT = 527,
		_UG_SHOP_TALK_START = 528,
		_UG_SHOP_TALK_END = 529,
		_UG_SHOP_ITEM_NAME = 530,
		_UG_SHOP_TRAP_NAME = 531,
		_DEL_SODATEYA_EGG = 532,
		_GET_SODATEYA_EGG = 533,
		_MSG_SODATEYA_AISHOU = 534,
		_MSG_AZUKE_SET = 535,
		_SET_SODATEYA_POKE = 536,
		_SODATEYA_POKELIST = 537,
		_HIKITORI_LIST = 538,
		_SODATE_POKE_LEVEL_STR = 539,
		_HIKITORI_RYOUKIN = 540,
		_HIKITORI_POKE = 541,
		_TAMAGO_DEMO = 542,
		_TEMOTI_MONSNO = 543,
		_MONS_OWN_CHK = 544,
		_CHK_TEMOTI_POKERUS = 545,
		_TEMOTI_POKE_SEX_GET = 546,
		_SUB_MY_GOLD = 547,
		_COMP_MY_GOLD = 548,
		_OBJ_VISIBLE = 549,
		_OBJ_INVISIBLE = 550,
		_MAILBOX = 551,
		_GET_MAILBOX_DATANUM = 552,
		_RANKING_VIEW = 553,
		_GET_TIME_ZONE = 554,
		_GET_RND = 555,
		_GET_RND_NEXT = 556,
		_GET_NATSUKI = 557,
		_ADD_NATSUKI = 558,
		_SUB_NATSUKI = 559,
		_HIKITORI_LIST_NAME_SET = 560,
		_GET_SODATEYA_AISHOU = 561,
		_SODATEYA_TAMAGO_CHK = 562,
		_TEMOTI_POKE_CHK = 563,
		_OOKISA_RECORD_CHK = 564,
		_OOKISA_RECORD_SET = 565,
		_OOKISA_TEMOTI_SET_BUF = 566,
		_OOKISA_KIROKU_SET_BUF = 567,
		_OOKISA_KURABE_INIT = 568,
		_WAZALIST_SET_PROC = 569,
		_WAZALIST_GET_RESULT = 570,
		_WAZA_COUNT = 571,
		_WAZA_DEL = 572,
		_TEMOTI_WAZANO = 573,
		_TEMOTI_WAZA_NAME = 574,
		_FNOTE_START_SET = 575,
		_FNOTE_DATA_MAKE = 576,
		_FNOTE_DATA_SAVE = 577,
		_IMC_ACCE_ADD_ITEM = 578,
		_IMC_ACCE_ADD_ITEM_CHK = 579,
		_IMC_ACCE_ITEM_CHK = 580,
		_IMC_BG_ADD_ITEM = 581,
		_IMC_BG_ITEM_CHK = 582,
		_NUTMIXER_CALL = 583,
		_NUTMIXER_PLAY_CHECK = 584,
		_ZUKAN_CHK_SHINOU = 585,
		_ZUKAN_CHK_NATIONAL = 586,
		_ZUKAN_RECONGNIZE_SHINOU = 587,
		_ZUKAN_RECONGNIZE_NATIONAL = 588,
		_URAYAMA_ENCOUNT_SET = 589,
		_URAYAMA_ENCOUNT_NO_CHK = 590,
		_POKE_MAIL_CHK = 591,
		_PAPERPLANE_SET = 592,
		_POKE_MAIL_DEL = 593,
		_KASEKI_COUNT = 594,
		_ITEMLIST_SET_PROC = 595,
		_ITEMLIST_GET_RESULT = 596,
		_ITEMNO_TO_MONSNO = 597,
		_KASEKI_ITEMNO = 598,
		_POKE_LEVEL_CHK = 599,
		_BTOWER_APP_CALL = 600,
		_BTOWER_WORK_CLEAR = 601,
		_BTOWER_WORK_INIT = 602,
		_BTOWER_WORK_RELEASE = 603,
		_BTOWER_TOOLS = 604,
		_BTOWER_SEVEN_POKE_GET = 605,
		_BTOWER_PRIZE_GET = 606,
		_BTOWER_PRIZEMAN_SET = 607,
		_BTOWER_SEND_BUF = 608,
		_BTOWER_RECV_BUF = 609,
		_BTOWER_GET_LEADER_ROOMID = 610,
		_BTOWER_IS_LEADER_EXIST = 611,
		_RECORD_INC = 612,
		_RECORD_GET = 613,
		_RECORD_ADD = 614,
		_RECORD_SET = 615,
		_RECORD_SETIFLARGE = 616,
		_SAFARI_START = 617,
		_SAFARI_END = 618,
		_CALL_SAFARI_SCOPE = 619,
		_CLIMAX_DEMO = 620,
		_INIT_SAFARI_TRAIN = 621,
		_MOVE_SAFARI_TRAIN = 622,
		_CHECK_SAFARI_TRAIN = 623,
		_PLAYER_HEGIHT_VALID = 624,
		_GET_POKE_SEIKAKU = 625,
		_CHK_POKE_SEIKAKU_ALL = 626,
		_UNDERGROUND_TALK_COUNT = 627,
		_NATURAL_PARK_WALK_COUNT_CLEAR = 628,
		_NATURAL_PARK_WALK_COUNT_GET = 629,
		_NATURAL_PARK_ACCESSORY_NO_GET = 630,
		_GET_NEWS_POKE_NO = 631,
		_NEWS_COUNT_SET = 632,
		_NEWS_COUNT_CHK = 633,
		_START_GENERATE = 634,
		_ADD_MOVE_POKE = 635,
		_OSHIE_WAZA_COUNT = 636,
		_REMAIND_WAZA_COUNT = 637,
		_OSHIE_WAZALIST_SET_PROC = 638,
		_REMAIND_WAZALIST_SET_PROC = 639,
		_OSHIE_WAZALIST_GET_RESULT = 640,
		_REMAIND_WAZALIST_GET_RESULT = 641,
		_NORMAL_WAZALIST_SET_PROC = 642,
		_NORMAL_WAZALIST_GET_RESULT = 643,
		_FLD_TRADE_ALLOC = 644,
		_FLD_TRADE_MONSNO = 645,
		_FLD_TRADE_CHG_MONSNO = 646,
		_FLD_TRADE_EVENT = 647,
		_FLD_TRADE_DEL = 648,
		_ZUKAN_TEXT_VER_UP = 649,
		_ZUKAN_SEX_VER_UP = 650,
		_ZENKOKU_ZUKAN_FLAG = 651,
		_CHK_RIBBON_COUNT = 652,
		_CHK_RIBBON_COUNT_ALL = 653,
		_CHK_RIBBON = 654,
		_SET_RIBBON = 655,
		_RIBBON_NAME = 656,
		_CHK_PRMEXP = 657,
		_CHK_WEEK = 658,
		_TV_ENTRY_WATCH_HIDE_ITEM = 659,
		_TV_ENTRY_WATCH_CHANGE_NAME = 660,
		_REGULATION_LIST_CALL = 661,
		_ASHIATO_CHK = 662,
		_PC_RECOVER_ANM = 663,
		_ELEVATOR_ANM = 664,
		_CALL_SHIP_DEMO = 665,
		_DEBUG_PRINT_WORK = 666,
		_DEBUG_PRINT_FLAG = 667,
		_DEBUG_PRINT_WORK_STATIONED = 668,
		_DEBUG_PRINT_FLAG_STATIONED = 669,
		_PM_VERSION_GET = 670,
		_FRONT_POKEMON = 671,
		_TEMOTI_POKE_TYPE = 672,
		_AIKOTOBA_KABEGAMI_SET = 673,
		_GET_UG_HATA_NUM = 674,
		_SETUP_PASO_ANM = 675,
		_START_PASO_ON_ANM = 676,
		_START_PASO_OFF_ANM = 677,
		_GET_KUJI_ATARI_NUM = 678,
		_KUJI_ATARI_CHK = 679,
		_KUJI_ATARI_INIT = 680,
		_NICK_NAME_PC = 681,
		_TV_INTERVIEWER_CHECK = 682,
		_COUNT_MONSBOX_SPACE = 683,
		_POKEPARK_CONTROL = 684,
		_POKEPARK_DEPOSIT_COUNT = 685,
		_POKEPARK_TRANS_MONS = 686,
		_POKEPARK_GET_SCORE = 687,
		_DENDOU_BALL_ANM = 688,
		_INIT_FLD_LIFT = 689,
		_MOVE_FLD_LIFT = 690,
		_CHECK_FLD_LIFT = 691,
		_SETUP_RAH_CYL = 692,
		_START_RAH_CYL = 693,
		_ADD_SCORE = 694,
		_ACCE_NAME = 695,
		_PARTY_MONSNO_CHECK = 696,
		_PARTY_DEOKISISUFORM_CHANGE = 697,
		_CHECKMINOMUCHICOMP = 698,
		_POKETCH_HOOK_SET = 699,
		_POKETCH_HOOK_RESET = 700,
		_SLOT_MACHINE = 701,
		_GET_NOW_HOUR = 702,
		_FLDOBJ_SHAKE_ANM = 703,
		_FLDOBJ_BLINK_ANM = 704,
		_D20R0106_LEGEND_IS_UNSEAL = 705,
		_DRESSING_IMC_ACCE_CHECK = 706,
		_AGB_CARTRIDGE_VER_GET = 707,
		_UNDERGROUND_TALK_COUNT_CLEAR = 708,
		_HIDEMAP_STATE_CHG = 709,
		_NAMEIN_MONUMENT = 710,
		_MONUMENT_NAME = 711,
		_IMC_BG_NAME = 712,
		_COMP_COIN = 713,
		_SLOT_RENTYAN_CHK = 714,
		_ADD_COIN_CHK = 715,
		_LEVEL_JIJII_NO = 716,
		_POKE_LEVEL_GET = 717,
		_IMC_ACCE_SUB_ITEM = 718,
		_C08R0801SCOPECAMERASET = 719,
		_LEVEL_JIJII_INIT = 720,
		_NEW_NANKAI_WORD_SET = 721,
		_REGULAR_CHECK = 722,
		_NEW_NANKAI_WORD_COMPLETE_CHECK = 723,
		_TEMOTI_POKE_CONTEST_STATUS_GET = 724,
		_D17SYSTEM_MAP_SELECT = 725,
		_UNDERGROUND_TOOL_GIVE_COUNT = 726,
		_UNDERGROUND_KASEKI_DIG_COUNT = 727,
		_UNDERGROUND_TRAP_HIT_COUNT = 728,
		_POFIN_ADD = 729,
		_POFIN_ADD_CHK = 730,
		_IS_HAIHU_EVENT_ENABLE = 731,
		_SODATEYA_POKELIST_SET_PROC = 732,
		_SODATEYA_POKELIST_GET_RESULT = 733,
		_GET_RANDOM_HIT = 734,
		_UNDERGROUND_TALK_COUNT2 = 735,
		_HIDENEFF_START = 736,
		_ZISHIN = 737,
		_BTL_POINT_WIN_WRITE = 738,
		_BTL_POINT_WIN_DEL = 739,
		_BTL_POINT_WRITE = 740,
		_GET_BTL_POINT = 741,
		_BTL_POINT_ADD = 742,
		_BTL_POINT_SUB = 743,
		_COMP_BTL_POINT = 744,
		_GET_BP_GIFT = 745,
		_UG_BALLITEM_CHECK = 746,
		_AUSU_ITEM_CHECK = 747,
		_CHECK_MY_GSID = 748,
		_FRIEND_DATA_NUM = 749,
		_GET_COIN_GIFT = 750,
		_SUB_WK_COIN = 751,
		_COMP_WK_COIN = 752,
		_AIKOTOBA_OKURIMONO_CHK = 753,
		_WIFI_HUSIGINAOKURIMONO_OPEN_FLAG_SET = 754,
		_UNION_GET_CARD_TALK_NO = 755,
		_WIRELESS_ICON_EASY = 756,
		_WIRELESS_ICON_EASY_END = 757,
		_SAVE_FIELD_OBJ = 758,
		_SEAL_NAME = 759,
		_SET_ESCAPE_LOCATION = 760,
		_FIELDOBJ_BITSET_FELLOWHIT = 761,
		_DAME_TAMAGO_CHK_ALL = 762,
		_UNION_BMPMENU_START = 763,
		_UNION_BATTLE_START_CHECK = 764,
		_GET_TRCARD_RANK = 765,
		_FLD_SCOPE_MODE_ON = 766,
		_FLD_SCOPE_MODE_OFF = 767,
		AC_UP = 768,
		AC_DOWN = 769,
		AC_LEFT = 770,
		AC_RIGHT = 771,
		AC_LOOP = 772,
		AC_DIR_U = 773,
		AC_DIR_R = 774,
		AC_DIR_D = 775,
		AC_DIR_L = 776,
		ACMD_END = 777,
		AC_DIR_VAL = 778,
		AC_WAIT = 779,
		_SET_TURN_HERO_FRAME = 780,
		_SET_TURN_OBJ_FRAME = 781,
		_DEBUG_PRINT = 782,
		AC_MARK_GYOE = 783,
		_FADE_WAIT = 784,
		_HERO_MOVE_GRID_CENTER = 785,
		AC_WORLD_X = 786,
		AC_WORLD_Z = 787,
		AC_HERO_MATCH_X = 788,
		AC_HERO_MATCH_Z = 789,
		_SET_POS_HERO_MATCH_X = 790,
		_SET_POS_HERO_MATCH_Z = 791,
		AC_UP_CENTER = 792,
		AC_DOWN_CENTER = 793,
		AC_LEFT_CENTER = 794,
		AC_RIGHT_CENTER = 795,
		AC_DIR_UP_CENTER = 796,
		AC_DIR_DOWN_CENTER = 797,
		AC_DIR_LEFT_CENTER = 798,
		AC_DIR_RIGHT_CENTER = 799,
		AC_VANISH_ON = 800,
		AC_VANISH_OFF = 801,
		AC_DIR_PAUSE_ON = 802,
		AC_DIR_PAUSE_OFF = 803,
		AC_ANM_PAUSE_ON = 804,
		AC_ANM_PAUSE_OFF = 805,
		AC_PC_BOW = 806,
		AC_HIDE_PULLOFF = 807,
		AC_HERO_BANZAI = 808,
		AC_MARK_SAISEN = 809,
		AC_HERO_BANZAI_UKE = 810,
		ACMD_NOT = 811,
		_GET_LANGUAGE = 812,
		_GET_REL_POS_HERO = 813,
		_CAMERA_TARGET_HERO = 814,
		_CAMERA_TARGET_DUMMY = 815,
		_DUMMY_ANIME = 816,
		_DUMMY_ANIME_WAIT = 817,
		_DUMMY_SET_POS = 818,
		_DUMMY_SET_POS_HERO = 819,
		_SET_CUSTUM_WIN_MSBT = 820,
		_ADD_CUSTUM_WIN_LABEL = 821,
		_OPEN_CUSTUM_WIN = 822,
		_VISIBLE_OBJ_PROP = 823,
		_INVISIBLE_OBJ_PROP = 824,
		_EVENT_CAMERA_MODE = 825,
		_SET_EVENT_CAMERA_PARAM = 826,
		_EVENT_CAMERA_WAIT = 827,
		_EVENT_CAMERA_FRAME = 828,
		_HIT_DOOR_ANIME = 829,
		_HIT_DOOR_ANIME_WAIT = 830,
		_SET_DOOR_OBJ = 831,
		_ROTOMU_FORM_CHECK = 832,
		_TEMOTI_ROTOMU_FORM_WAZA_CHG = 833,
		_EVENT_GET_TEMOTI_POKE_CHK_GET_POS = 834,
		_TURN_HERO_TALK_OBJ = 835,
		_FADE_SPEED = 836,
		_FADE_BALL = 837,
		_FADE_DEFAULT = 838,
		_DOOR_FORCE_ANIME_END = 839,
		_LDVAL_VERSION = 840,
		_LDVAL_SEX = 841,
		_TV_ENTRY_PARKINFO_INIT = 842,
		_TV_ENTRY_PARKINFO_ITEM = 843,
		_TV_ENTRY_PARKINFO_ACCE = 844,
		_GROUP_EXIST_CHECK = 845,
		_GROUP_ENTRY_CHECK = 846,
		_GROUP_NAME = 847,
		_GROUP_LEADER_NAME = 848,
		_GROUP_NAME_IN = 849,
		_GROUP_ENTRY = 850,
		_GROUP_MAKE = 851,
		_MYSTERY_POSTMAN_INIT = 852,
		_MYSTERY_PRESENT_CHECK = 853,
		_MYSTERY_GET_PRESENT_ID = 854,
		_MYSTERY_RECEIVE_CHECK = 855,
		_MYSTERY_RECEIVE_PRESENT = 856,
		_MYSTERY_DISABLE_MSG = 857,
		_MYSTERY_ENABLE_MSG = 858,
		_MYSTERY_POSTMAN_END = 859,
		_MYSTERY_POSTMAN_SAVE_END = 860,
		_UNKNOWN_MSG = 861,
		_TV_INTERVIEW_MSG = 862,
		_TV_INTERVIEW_ENTRY = 863,
		_TV_START = 864,
		_TV_END = 865,
		_TV_START_NUMBER = 866,
		_TV_SET_ENDFLAG = 867,
		_TV_MAKE_MSG = 868,
		_TV_GET_DATA_TOTAL = 869,
		AC_INDEX_ANIME = 870,
		AC_INDEX_ANIME_WAIT = 871,
		_DEBUG_RESET_WORK = 872,
		_SET_SYS_FLAG = 873,
		_RESET_SYS_FLAG = 874,
		_CAMERA_SET_COS_ANGLE = 875,
		_CAMERA_COS_ANGLE_WAIT = 876,
		_HERO_MOVE_GRID_CENTER_FRONT = 877,
		_WARP_ENABLE_SET = 878,
		_DOOR_ENABLE_SET = 879,
		_AC_ANIM_LOCK = 880,
		_AC_ANIM_RELEASE = 881,
		_SET_OFFSET = 882,
		_OFFSET_WAIT = 883,
		_NAMINORI_END = 884,
		_TAKIKUDARI = 885,
		_KABENOBORI_CHECK = 886,
		_TALK_POKE_GET_TEMOTI_INDEX = 887,
		_NATURAL_PARK_GET_MONOHIROI_ITEM_NO = 888,
		_CON_OPEN_POKE_SELECT_MENU = 889,
		_CON_OPEN_CAPSULE_SELECT_MENU = 890,
		_CON_OPEN_BOUTIQUE_SELECT_MENU = 891,
		_CON_WAIT_CONTEST_MENU = 892,
		_CON_MY_ENTRY_NO_WORD_SET = 893,
		_CON_BEST_PERFORMER_CHECK = 894,
		_CON_CATEGORY_RIBBON_NAME_SET = 895,
		_CON_HAVE_CONTEST_STAR_CHECK = 896,
		_CON_CONTEST_STAR_NAME_SET = 897,
		_CON_REWARD_NAME_SET = 898,
		_OBJ_ANIME_FUREAI = 899,
		AC_MARK_EMO = 900,
		_CON_CATEGORY_AND_RANK_SET = 901,
		_CON_RANK_SET = 902,
		_NATURAL_PARK_POKE_CREATE = 903,
		_NATURAL_PARK_POKE_KAISAN = 904,
		_NATURAL_PARK_POKE_SYUUGOU = 905,
		_CON_CHECK_ENTRY_POKE = 906,
		_NATURAL_PARK_POKE_SELECT_MENU = 907,
		AC_NECK_ROTATE = 908,
		_CON_RESET_PARAMETER = 909,
		_CON_SELECT_SINGLE_MODE = 910,
		_CON_SELECT_MULTI_MODE = 911,
		_DPR_SHOP_OPEN = 912,
		_DPR_SHOP_OPEN_WAIT = 913,
		_DOOR_TRANSITION_ZONE_SET = 914,
		_IMAGE_CLIP_VIEW_CON_CHECK_PROC = 915,
		_MOVE_COMBAT_GYM_WALL = 916,
		_EV_ENTITY_PLAYER_MOVE_START = 917,
		_EV_ENTITY_PLAYER_MOVE_END = 918,
		_EV_ENTITY_PLAYER_MOVE_RESET = 919,
		_CHECK_CAN_SEED_WATER = 920,
		_SHOP_OPEN_FIXED = 921,
		_SHOP_OPEN_SEAL = 922,
		_SHOP_OPEN_BATTLE = 923,
		_SHOP_OPEN_FLOWER = 924,
		_SHOP_OPEN_OTENKI = 925,
		_SHOP_OPEN_SELL = 926,
		AC_OFFSET = 927,
		_GET_COSTUME = 928,
		_SHOP_OPEN_BOUTIQUE_BUY = 929,
		_SHOP_OPEN_BOUTIQUE_CHANGE = 930,
		_CON_REWARD_SHOWMASTER_NAME_SET = 931,
		_CON_TWINKLE_STAR_NAME_SET = 932,
		_ANAWOHORU = 933,
		_ANANUKENOHIMO = 934,
		_TELEPORT = 935,
		_AMAIKAORI = 936,
		_CHECK_POFIN = 937,
		_AMAIMITU = 938,
		_WARP_START_ANIMATION = 939,
		_WARP_END_ANIMATION = 940,
		_SAFARI_SCOPE_SEQUENCE = 941,
		_EVENT_CAMERA_INDEX = 942,
		_EVENT_CAMERA_END_WAIT = 943,
		_SHOP_OPEN_PALPARK = 944,
		_BTOWER_APP_WAIT = 945,
		_FLOOR_OPEN = 946,
		_FLOOR_CLOSE = 947,
		_MONEY_OPEN = 948,
		_MONEY_CLOSE = 949,
		_AZUKARIYA_EXIST_EGG = 950,
		_AZUKARIYA_STORED_COUNT = 951,
		_AZUKARIYA_SET_STORED_NAME = 952,
		_AZUKARIYA_STORE = 953,
		_AZUKARIYA_RESTORE = 954,
		_AZUKARIYA_LOVE_LEVEL = 955,
		_AZUKARIYA_GET_STORED_MONSNO = 956,
		_AZUKARIYA_GET_EGG = 957,
		_AZUKARIYA_DISCARD_EGG = 958,
		_AZUKARIYA_SET_STORED_INFO_STR = 959,
		_AZUKARIYA_GET_STORED_SEX = 960,
		_AZUKARIYA_OLDMAN_INIT = 961,
		_ADD_CUSTUM_WIN_LABEL_WORD_SET = 962,
		_OPEN_CUSTUM_WIN_WORD_SET = 963,
		AC_INVISIBLE_ON = 964,
		AC_INVISIBLE_OFF = 965,
		_BTL_ENCSEQ_LOAD = 966,
		_USE_SPRAY = 967,
		_BIRTH_MOUNTH_INPUT = 968,
		_BIRTH_DAY_INPUT = 969,
		_SPEAKERS_NAME = 970,
		_GET_PLAYER_CAP = 971,
		_CAMERA_SHAKE = 972,
		_EVENT_ENTITY_CLIP_PLAY = 973,
		_EVENT_ENTITY_CLIP_WAIT = 974,
		_FACE_INDEX = 975,
		AC_FACE_INDEX = 976,
		_TEMOTI_BALL_LOAD = 977,
		_TEMOTI_BALL_LOAD_WAIT = 978,
		_POKECEN_PUT_BALL = 979,
		_POKECEN_CLEAR_BALL = 980,
		_CHARA_LOOK_LOCK = 981,
		_CHARA_LOOK_RELEASE = 982,
		_TALK_OBJ_START_LOOK_NONE = 983,
		_BOUKENNOOTO_TIPS_OPEN = 984,
		_HIDENEFF_WAIT = 985,
		_GET_URAYAMA_ENCOUNT_INDEX = 986,
		_CUSTOM_BALL_NUM_ADD = 987,
		_CHANGE_FASHION_REQ = 988,
		_WARP_PANEL_START = 989,
		_WARP_PANEL_END = 990,
		_CON_OPEN_MATCHING_MENU = 991,
		_OPEN_PASSWORD_SWKEYBOARD = 992,
		_DENDOU_NUM_SET = 993,
		_TEMOTI_BOX_POKE_CHK = 994,
		_TEMOTI_BOX_MONSNO = 995,
		_CALL_WAZA_OMOIDASHI_UI = 996,
		_CALL_WAZA_WASURE_UI = 997,
		_CALL_WAZA_OSHIE_UI = 998,
		_CHECK_WAZA_OSHIE = 999,
		_CHECK_WAZA_OSHIE_ALL = 1000,
		_TEMOTI_BOX_POKEMON_NAME = 1001,
		_BTWR_TOOL_CHK_ENTRY_POKE_NUM = 1002,
		_BTWR_TOOL_CLEAR_PLAY_DATA = 1003,
		_BTWR_TOOL_PUSH_NOW_LOCATION = 1004,
		_BTWR_TOOL_POP_NOW_LOCATION = 1005,
		_BTWR_TOOL_GET_WIFI_RANK = 1006,
		_BTWR_TOOL_SET_PLAY_MODE = 1007,
		_BTWR_TOOL_SET_NOW_WIN = 1008,
		_BTWR_TOOL_SET_RANK = 1009,
		_BTWR_SUB_CHK_ENTRY_POKE = 1010,
		_BTWR_SUB_GET_NOW_ROUND = 1011,
		_BTWR_SUB_INC_ROUND = 1012,
		_BTWR_SUB_IS_CLEAR = 1013,
		_BTWR_SUB_GET_RENSHOU_CNT = 1014,
		_BTWR_SUB_SET_SCORE = 1015,
		_BTWR_SUB_CHOICE_BTL_PARTNER = 1016,
		_BTWR_SUB_LOCAL_BTL_CALL = 1017,
		_BTWR_SUB_GET_PLAY_MODE = 1018,
		_BTWR_SUB_SET_LEADER_CLEAR_FLAG = 1019,
		_BTWR_SUB_GET_LEADER_CLEAR_FLAG = 1020,
		_BTWR_SUB_ADD_BATTLE_POINT = 1021,
		_BTWR_SUB_RENSHOU_RIBBON_SET = 1022,
		_BTWR_SUB_GET_MINE_OBJ = 1023,
		_BTWR_SUB_UPDATE_RANDOM = 1024,
		_BTWR_DEB_IS_WORK_NULL = 1025,
		_BOUKENNOOTO_TIPS_WAIT = 1026,
		_SAVE_RENDOU_ENABLE = 1027,
		_RETURN_LOOP = 1028,
		_INPUT_JUMP = 1029,
		_BTWR_SUB_BTL_TRAINER_SET = 1030,
		_BTWR_SUB_GET_RANK = 1031,
		_BTWR_SUB_RANK_DOWN_LOSE = 1032,
		_BTWR_SUB_RANK_DOWN_LOSE_RESET = 1033,
		_BTWR_SUB_ADD_LOSE = 1034,
		_SET_VISIBILITY = 1035,
		_LOAD_CAMERA_CONTROLLER = 1036,
		_LOAD_WAIT_CAMERA_CONTROLLER = 1037,
		_CAMERA_CONTROLLER_PLAY = 1038,
		_CAMERA_CONTROLLER_END = 1039,
		_TEMOTI_ROTOMU_FORM_CHG_CHECK = 1040,
		_TEMOTI_POKE_CHK_NUM = 1041,
		_TEMOTI_ROTOMU_FORM_GET = 1042,
		_POKELIST_FORM_CHANGE_SET_PROC = 1043,
		_POKELIST_FORM_CHANGE_GET_RESULT = 1044,
		_TUREARUKI_POKEMON_TALK = 1045,
		_TUREARUKI_POKEMON_INDEX = 1046,
		_TUREARUKI_TAKE_ITEM = 1047,
		_TUREARUKI_ITEM_TIMER_SET = 1048,
		_RELEASE_CAMERA_CONTROLLER = 1049,
		_FIND_BG_ENABLE = 1050,
		_FIND_BG_DISABLE = 1051,
		_CALL_EFFECT = 1052,
		_STOP_EFFECT = 1053,
		_RELEASE_EFFECT = 1054,
		_CASSET_VERSION_GET = 1055,
		_BOX_OPEN_NORMAL = 1056,
		_BOX_OPEN_SELECT = 1057,
		_CALL_EFFECT_OBJ = 1058,
		_SORAWOTOBU_END = 1059,
		_CON_OPEN_RESUME_MATCHING_MENU = 1060,
		_BOX_SEAL_UI_WAIT = 1061,
		_OBJ_POS_CHANGE_WORLD = 1062,
		_OPEN_SPECIAL_WIN_LABEL = 1063,
		_WAIT_SPECIAL_WIN_LABEL = 1064,
		_AK_LISNER_TRA = 1065,
		_AK_LISNER_POS = 1066,
		_AK_LISNER_ROT = 1067,
		_UNION_PROC = 1068,
		_CAMERA_CONTROLLER_WAIT = 1069,
		_SET_TV_INT = 1070,
		_SET_TV_PLAYER_NAME = 1071,
		_SET_TV_POKE_NICK_NAME = 1072,
		_TV_TPIC_ENABLE = 1073,
		_TV_TPIC_BRANCH = 1074,
		_TUREARUKI_POKE_CREATE = 1075,
		_TUREARUKI_POKE_DELETE = 1076,
		_AUTO_TANKEN_SET = 1077,
		_SET_MATCHING_GROUP = 1078,
		_AUTO_TANKEN_SET_WAIT = 1079,
		_USE_TANKENSET = 1080,
		_TALK_UNION_NPC = 1081,
		_CHECK_ONLINE_ACCOUNT = 1082,
		_WAIT_CHECK_ONLINE_ACCOUNT = 1083,
		_LOCALKOUKAN_APPLY = 1084,
		_ZUKAN_TOUROKU = 1085,
		_ZUKAN_TOUROKU_WAIT = 1086,
		_CHK_ZUKAN_TOUROKU = 1087,
		_AUTO_SAVE = 1088,
		_ENDING_DEMO = 1089,
		_AZUKARIYA_TAKE_OVER_POKE = 1090,
		_POKETORE_GET_CHARGE = 1091,
		_POKETORE_START = 1092,
		_BICYCLE_COLOR_SET = 1093,
		_BICYCLE_COLOR_GET = 1094,
		_PARK_ITEM_NAME = 1095,
		_LOAD_UMA_ANIME = 1096,
		_RELEASE_UMA_ANIME = 1097,
		_LOAD_UMA_ANIME_WAIT = 1098,
		_UMA_ANIME_PLAY = 1099,
		_UMA_ANIME_ATTACH = 1100,
		_UMA_PLAY_WAIT = 1101,
		_OBJ_ANIME_SPEED = 1102,
		_OBJ_SCALE = 1103,
		_BADGE_GET = 1104,
		_ADD_UG_ITEM = 1105,
		_TOBARI_4F_SHOP_OPEN = 1106,
		_DOF_FAR_DEPTH = 1107,
		_DISPLAY_MESSAGE = 1108,
		_DISPLAY_MESSAGE_CLOSE = 1109,
		_CUSTOM_BALL_TRAINER_PAGE = 1110,
		_CUSTOM_BALL_TRAINER_COPY_OPEN = 1111,
		_RECONGNIZE_TOKIKAKE = 1112,
		_RECONGNIZE_OPEN_WAIT = 1113,
		_UG_ITEM_NAME = 1114,
		_FUREAI_TALK_START = 1115,
		_FUREAI_TALK_END = 1116,
		_PLAY_FUREAI_VOICE_NAKAYOSHIRANK = 1117,
		_CREATE_HYOUTA = 1118,
		_CALL_SHIP_DEMO_SEA_MAP = 1119,
		_SETUP_SHIP = 1120,
		_PC_DENDOU_SET_PROC_OPEN_WAIT = 1121,
		_GET_POKETCH_APP_ID = 1122,
		_FADE_DUNGEON_OUT = 1123,
		_FADE_DUNGEON_IN = 1124,
		_FADE_BUILDING_OUT = 1125,
		_FADE_BUILDING_IN = 1126,
		_FADE_AREA_OUT = 1127,
		_FADE_AREA_IN = 1128,
		_CUSTOM_BALL_TRAINER_PAGE_WAIT = 1129,
		_C08R0801SCOPECAMERA_SEQUENCE = 1130,
		_EMBANKMENT = 1131,
		_ENTRY_UWASA_ZUKAN = 1132,
		_TALK_UG_NPC = 1133,
		_TRAINING_OPEN = 1134,
		_TRAINING_OPEN_WAIT = 1135,
		_CAMERA_CONTROLLER_IS_NULL = 1136,
		_UMA_IS_NULL = 1137,
		_GET_IS_HAVE_SECRETBASE = 1138,
		_GET_UG_NPC_TALK_COUNT = 1139,
		_RESET_UG_NPC_TALK_COUNT = 1140,
		_TEMOTI_POKE_CHK_GET_POS = 1141,
		AC_STOP_WALK_ANIME = 1142,
		_SET_FORCE_BLINK = 1143,
		_CHECK_SECRET_BASE_EXPANTION = 1144,
		_TV_TOPIC_BRANCH_GET = 1145,
		_TV_TOPIC_INT_GET = 1146,
		_TV_TOPIC_STR_WORD_SET = 1147,
		_OOKISA_VALUE_SET_BUF = 1148,
		_SET_LIGHTINTENSITY = 1149,
		_SET_LIGHTINTENSITY_CHARCTER = 1150,
		_SET_LIGHTINTENSITY_POKE = 1151,
		_END_LIGHTINTENSITY = 1152,
		_END_LIGHTINTENSITY_CHARCTER = 1153,
		_END_LIGHTINTENSITY_POKE = 1154,
		AC_ANIME_DURATION = 1155,
		_TV_RED_GYARADOS_ON = 1156,
		_TV_RED_GYARADOS_OFF = 1157,
		_PARTNER_NAME_SET = 1158,
		_TV_MONITOR_SET = 1159,
		_TV_MONITOR_RESET = 1160,
		_EFF_SCALE = 1161,
		_GET_ITEM_COUNT = 1162,
		_PLAY_EMO_SE = 1163,
		_AUTO_MSG = 1164,
		_AUTO_MSG_STOP = 1165,
		_GET_TAG_PATNER_ID = 1166,
		_ADD_WAZA = 1167,
		_NICKNAME_PLACEMENT = 1168,
		_UNIQUE_POKE_TEMP = 1169,
		_UNIQUE_POKE_FIX = 1170,
		_GET_FORM = 1171,
		_NICK_NAME_ALL = 1172,
		_DOF_CHANGE_TARGET_POS = 1173,
		_DOF_RESET_TARGET_POS = 1174,
		_ADD_MAROYAKA_POFFIN = 1175,
		_ALL_MONSNO = 1176,
		_ALL_MONS_OWN_CHK = 1177,
		_CON_CATEGORY_NAME = 1178,
		_CON_RANK_NAME = 1179,
		_POKE_TYPE_NAME = 1180,
		_POFFIN_NAME = 1181,
		_DRESS_NAME = 1182,
		_EVENT_ENTITY_VISIBLE = 1183,
		_UG_LEAVE_HOYUTA = 1184,
		_AZUKARIYA_STORE_UI = 1185,
		_SET_TELEPORT_ID = 1186,
		_POKE_LVUP_HOW_MANY = 1187,
		_USE_SPECIAL_ITEM = 1188,
		_GET_BP = 1189,
		_FOV_OFFSET_RATE = 1190,
		_OBJ_DIR_CHANGE_WORLD = 1191,
		_OBJ_POS_CHANGE_WORLD_FIND = 1192,
		_ZONE_NAME2 = 1193,
		_TALK_COLISEUM_NPC = 1194,
		_USE_SUB_ATTRIBUTE = 1195,
		_ADD_CUSTUM_WIN_LABEL_TWO_WINDOW = 1196,
		_POKE_LEVEL_GET_ALL = 1197,
		_RESET_SAVEBGM = 1198,
		_BTWR_SUB_SELECT_POKE = 1199,
		_BTWR_SUB_GET_ENTRY_POKE = 1200,
		_SET_GLOBALWATERFIELD = 1201,
		_TV_INTERVIEW_STR_WORD_SET = 1202,
		_ZONE_NAME_LABEL = 1203,
		_AUTO_SAVE_BACK_UP_ON = 1204,
		_GET_STATUE_NUM = 1205,
		_BTWR_PLAYER_WIN_CHECK = 1206,
		_GET_GOLD = 1207,
		_AG_TRANSITION_HOYUTA = 1208,
		_ADD_POKEMON_UI = 1209,
		_GET_FUREAI_SELECT_POKE_TEMOTI_NO = 1210,
		_TV_TOPIC_STR_GENDER_WORD_SET = 1211,
		_EVENT_ENTITY_CLIP_ATTACH_PLAYER = 1212,
		_GET_POKE_COUNT5 = 1213,
		_ADD_UNIQUE_POKEMON_UI = 1214,
		_BTWR_SUB_ADD_BATTLE_POINT_MANUAL = 1215,
		_POKE_TARENT_POW_MAX = 1216,
		_OPEN_BATTLE_WIN = 1217,
		_OJIGI = 1218,
		_DARKNESS_TEMPORARILY_OFF = 1219,
		_DARKNESS_TEMPORARILY_ON = 1220,
		_SAVE_PLAYREPORT = 1221,
		_SET_STOP_EYE_ENCOUNT = 1222,
		_RESET_STOP_EYE_ENCOUNT = 1223,
		_OPEN_CUSTUM_WIN_FIXED = 1224,
		_PLAY_REPORT_TRAINING = 1225,
		_PLAY_REPORT_BTLTOWER_WIN = 1226,
        _GET_FORM_OF_POKE = 1230,
    };
}
