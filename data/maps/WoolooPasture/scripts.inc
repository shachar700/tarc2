WoolooPasture_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WoolooPasture_OnFrame
	.byte 0

WoolooPasture_OnFrame:
	map_script_2 VAR_WOOLOO_PASTURE_STATE, 4, WoolooPasture_EventScript_Completed
	.2byte 0

WoolooPasture_EventScript_Completed:
	msgbox WoolooPasture_Text_Completed, MSGBOX_AUTOCLOSE
	togglegender
	warp MAP_OBSTAGOON_RUNAWAY, 0, 61
	waitstate
	release
	end

WoolooPasture_EventScript_Trigger_WoolooPanic::
	lock
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	givemon SPECIES_OBSTAGOON, 15
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
	setobjectxy LOCALID_WOOLOO_RIGHT, 28, 17
	setobjectxyperm LOCALID_WOOLOO_RIGHT, 28, 17
	setobjectmovementtype LOCALID_WOOLOO_RIGHT, MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE
	setobjectxy LOCALID_WOOLOO_LEFT, 0, 9
	setobjectxyperm LOCALID_WOOLOO_LEFT, 0, 9
	setobjectmovementtype LOCALID_WOOLOO_RIGHT, MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE
	setobjectxy LOCALID_SHINY_WOOLOO, 7, 5
	setobjectxyperm LOCALID_SHINY_WOOLOO, 7, 5
	setobjectmovementtype LOCALID_SHINY_WOOLOO, MOVEMENT_TYPE_COPY_PLAYER
	addvar VAR_WOOLOO_PASTURE_STATE, 1
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
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SHINY_WOOLOO
	setflag FLAG_WOOLOO_PASTURE_SHINY_WOOLOO
	addvar VAR_WOOLOO_PASTURE_STATE, 1
	fadescreen FADE_FROM_BLACK
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
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_WOOLOO_LEFT
	setflag FLAG_WOOLOO_PASTURE_WOOLOO_LEFT
	addvar VAR_WOOLOO_PASTURE_STATE, 1
	fadescreen FADE_FROM_BLACK
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
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_WOOLOO_RIGHT
	setflag FLAG_WOOLOO_PASTURE_WOOLOO_RIGHT
	addvar VAR_WOOLOO_PASTURE_STATE, 1
	fadescreen FADE_FROM_BLACK
	special HealPlayerParty
	release
	end

WoolooPasture_Text_Completed:
	.string "Stage 1 completed.$"

