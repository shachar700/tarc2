WoolooPasture_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WoolooPasture_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WoolooPasture_OnFrame
	.byte 0

WoolooPasture_OnTransition:
	clearflag FLAG_WOOLOO_PASTURE_SHINY_WOOLOO
	clearflag FLAG_WOOLOO_PASTURE_WOOLOO_LEFT
	clearflag FLAG_WOOLOO_PASTURE_WOOLOO_RIGHT
	clearflag FLAG_OBSTAGON_CHASES_WOOLOO
	clearflag FLAG_DECORATION_1
	clearflag FLAG_DECORATION_2
	clearflag FLAG_DECORATION_3
	clearflag FLAG_DECORATION_4
	clearflag FLAG_DECORATION_5
	clearflag FLAG_DECORATION_6
	setvar VAR_WOOLOO_PASTURE_STATE, 0
	setvar VAR_WOOLOO_PASTURE_2_STATE, 0
	setvar VAR_WOOLOO_SNACK_STATE, 0
	setvar VAR_SAFARI_ZONE_WOOLOO, 0
	setvar VAR_OBSTAGOON_STEPS_COUNTER, 0
	setflag FLAG_SYS_B_DASH
	setrespawn HEAL_LOCATION_TWO_START
	addvar VAR_TWO_RESTART_COUNTER, 1
	end

WoolooPasture_OnFrame:
	map_script_2 VAR_WOOLOO_PASTURE_STATE, 4, WoolooPasture_EventScript_Completed
	.2byte 0

WoolooPasture_EventScript_Completed:
	waitse
	playse SE_SUCCESS
	msgbox WoolooPasture_Text_Completed, MSGBOX_AUTOCLOSE
	togglegender
	clearflag FLAG_SYS_B_DASH
	clearflag FLAG_SYS_POKEMON_GET
	setflag FLAG_BADGE01_GET
	warp MAP_OBSTAGOON_RUNAWAY, 0, 61
	waitstate
	release
	end

WoolooPasture_EventScript_Trigger_WoolooPanic::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_ge VAR_TEMP_0, 21, WoolooPasture_EventScript_MoveLeft
	call_if_le VAR_TEMP_0, 20, WoolooPasture_EventScript_MoveDown
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_ENCOUNTER
	playbgm MUS_HELP, TRUE
	playse SE_PIN
	applymovement LOCALID_SHINY_WOOLOO, Common_Movement_ExclamationMark
	applymovement LOCALID_WOOLOO_LEFT, Common_Movement_ExclamationMark
	applymovement LOCALID_WOOLOO_RIGHT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SHINY_WOOLOO, Common_Movement_FacePlayer
	applymovement LOCALID_WOOLOO_LEFT, Common_Movement_FacePlayer
	applymovement LOCALID_WOOLOO_RIGHT, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_SHINY_WOOLOO, Common_Movement_Delay48
	applymovement LOCALID_WOOLOO_LEFT, Common_Movement_Delay48
	applymovement LOCALID_WOOLOO_RIGHT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_WOOLOO_LEFT, WoolooPasture_Movement_WoolooRightOut
	applymovement LOCALID_WOOLOO_RIGHT, WoolooPasture_Movement_WoolooRightOut
	applymovement LOCALID_SHINY_WOOLOO, WoolooPasture_Movement_ShinyWoolooOut
	waitmovement 0
	setobjectxy LOCALID_WOOLOO_RIGHT, 56, 17
	setobjectxyperm LOCALID_WOOLOO_RIGHT, 56, 17
	setobjectmovementtype LOCALID_WOOLOO_RIGHT, MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE
	setobjectxy LOCALID_WOOLOO_LEFT, 1, 12
	setobjectxyperm LOCALID_WOOLOO_LEFT, 1, 12
	setobjectmovementtype LOCALID_WOOLOO_LEFT, MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE
	setobjectxy LOCALID_SHINY_WOOLOO, 8, 6
	setobjectxyperm LOCALID_SHINY_WOOLOO, 8, 6
	setobjectmovementtype LOCALID_SHINY_WOOLOO, MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE
	addvar VAR_WOOLOO_PASTURE_STATE, 1
	setflag FLAG_UNUSED_0x881
	release
	end

WoolooPasture_EventScript_MoveDown:
	applymovement LOCALID_PLAYER, WoolooPasture_Movement_WalkSlowDown
	waitmovement 0
	return

WoolooPasture_EventScript_MoveLeft:
	applymovement LOCALID_PLAYER, WoolooPasture_Movement_WalkSlowLeft
	waitmovement 0
	return

WoolooPasture_Movement_WalkSlowDown:
	walk_slow_down
	delay_16
	step_end

WoolooPasture_Movement_WalkSlowLeft:
	walk_slow_left
	delay_16
	step_end

WoolooPasture_Movement_WoolooRightOut:
	walk_in_place_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

WoolooPasture_Movement_ShinyWoolooOut:
	walk_in_place_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

WoolooPasture_EventScript_ShinyWooloo::
	lock
	faceplayer
	waitse
	playse SE_SHINY
	playmoncry SPECIES_WOOLOO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	createmon side=1, slot=0, species=SPECIES_WOOLOO, level=10, isShiny=TRUE
	dowildbattle
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_SHINY_WOOLOO
	setflag FLAG_WOOLOO_PASTURE_SHINY_WOOLOO
	addvar VAR_WOOLOO_PASTURE_STATE, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	special HealPlayerParty
	release
	end

WoolooPasture_EventScript_LeftWooloo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_WOOLOO, 10, ITEM_SITRUS_BERRY
	dowildbattle
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_WOOLOO_LEFT
	setflag FLAG_WOOLOO_PASTURE_WOOLOO_LEFT
	addvar VAR_WOOLOO_PASTURE_STATE, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	special HealPlayerParty
	release
	end

WoolooPasture_EventScript_RightWooloo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_WOOLOO, 10, ITEM_SITRUS_BERRY
	dowildbattle
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_WOOLOO_RIGHT
	setflag FLAG_WOOLOO_PASTURE_WOOLOO_RIGHT
	addvar VAR_WOOLOO_PASTURE_STATE, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	special HealPlayerParty
	release
	end

WoolooPasture_Tip::
	switch VAR_0x8008
	case 1, WoolooPasture_EventScript_Tip1
	case 2, WoolooPasture_EventScript_Tip2
	case 3, WoolooPasture_EventScript_Tip3
	case 4, WoolooPasture_EventScript_Tip4
	case 5, WoolooPasture_EventScript_Tip5
	case 6, WoolooPasture_EventScript_Tip6
	case 7, WoolooPasture_EventScript_Tip7
	case 8, WoolooPasture_EventScript_Tip8
	case 9, WoolooPasture_EventScript_Tip9
	case 10, WoolooPasture_EventScript_Tip10
	msgbox WoolooPastureTip_Text_Generic, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip1:
	msgbox WoolooPasture_Text_Tip1, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip2:
	msgbox WoolooPasture_Text_Tip2, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip3:
	msgbox WoolooPasture_Text_Tip3, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip4:
	msgbox WoolooPasture_Text_Tip4, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip5:
	msgbox WoolooPasture_Text_Tip5, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip6:
	msgbox WoolooPasture_Text_Tip6, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip7:
	msgbox WoolooPasture_Text_Tip7, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip8:
	msgbox WoolooPasture_Text_Tip8, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip9:
	msgbox WoolooPasture_Text_Tip9, MSGBOX_DEFAULT
	release
	end

WoolooPasture_EventScript_Tip10:
	msgbox WoolooPasture_Text_Tip10, MSGBOX_DEFAULT
	release
	end

WoolooPasture_Text_Tip1:
	.string "Stage 1: Wooloo Pasture\n"
	.string "Tip: Chase all 3 Wooloo.$"

WoolooPasture_Text_Tip2:
	.string "Stage 2: Obstagoon Runaway\n"
	.string "Tip: Check patterns and avoid Obstagoon.$"

WoolooPasture_Text_Tip3:
	.string "Stage 3: Obstagoon Chases\n"
	.string "Tip: Corner the Wooloo.$"

WoolooPasture_Text_Tip4:
	.string "Stage 4: Wooloo Pushes\n"
	.string "Tip: Block Obstagoon sight using Dogs.$"

WoolooPasture_Text_Tip5:
	.string "Stage 5: Wooloo Pasture 2\n"
	.string "Tip: Chase all 3 Wooloo.$"

WoolooPasture_Text_Tip6:
	.string "Stage 6: Obstagoon Blockade\n"
	.string "Tip: Dog can be pushed over cracked ice.$"

WoolooPasture_Text_Tip7:
	.string "Stage 7: Wooloo Snack\n"
	.string "Tip: Be careful when you drop a ledge.$"

WoolooPasture_Text_Tip8:
	.string "Stage 8: Obstagoon Fiery Path\n"
	.string "Tip: Push dogs to clear a path.$"

WoolooPasture_Text_Tip9:
	.string "Stage 9: Safari Zone\n"
	.string "Tip: Each map has 1 Wooloo.$"

WoolooPasture_Text_Tip10:
	.string "Stage 10: Obstagoon Temple\n"
	.string "Tip: Watch patterns and don't rush.$"

WoolooPastureTip_Text_Generic:
	.string "Tip: Do not give up friends for foes.$"

WoolooPasture_Text_Completed:
	.string "{FONT_SMALL}Stage 1 completed.$"

