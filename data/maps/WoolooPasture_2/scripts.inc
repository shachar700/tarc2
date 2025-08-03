WoolooPasture_2_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, WoolooPasture_2_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WoolooPasture_2_OnFrame
	.byte 0

WoolooPasture_2_OnResume:
	setstepcallback STEP_CB_ASH
	end

WoolooPasture_2_OnFrame:
	map_script_2 VAR_WOOLOO_PASTURE_2_STATE, 3, WoolooPasture_2_EventScript_Completed
	.2byte 0

WoolooPasture_2_EventScript_Completed:
	msgbox WoolooPasture_2_Text_Completed, MSGBOX_AUTOCLOSE
	togglegender
	warp MAP_OBSTAGOON_BLOCKADE, 3, 3
	waitstate
	release
	end

WoolooPasture_2_EventScript_Caught::
	lock
	faceplayer
	playse SE_PIN
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox WoolooPasture_2_Text_ZigzagoonCatchesYou, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	setvar VAR_WOOLOO_PASTURE_2_STATE, 0
	warp MAP_WOOLOO_PASTURE_2, 1, 11
	waitstate
	release
	end

WoolooPasture_2_EventScript_Trigger_1::
	lock
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_WOOLOO_1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WOOLOO_1, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	applymovement LOCALID_WOOLOO_1, Wooloopasture_2_Movement_ApproachLedge
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_WOOLOO_1, Wooloopasture_2_Movement_JumpAndReachHole
	waitmovement 0
	addvar VAR_TEMP_0, 1
	release
	end

WoolooPasture_2_EventScript_Wooloo1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_WOOLOO, 15, ITEM_SITRUS_BERRY
	dowildbattle
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_WOOLOO_1
	setflag FLAG_TEMP_1
	addvar VAR_WOOLOO_PASTURE_2_STATE, 1
	fadescreen FADE_FROM_BLACK
	special HealPlayerParty
	release
	end

WoolooPasture_2_EventScript_Wooloo2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_WOOLOO, 15, ITEM_SITRUS_BERRY
	dowildbattle
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_WOOLOO_2
	setflag FLAG_TEMP_2
	addvar VAR_WOOLOO_PASTURE_2_STATE, 1
	fadescreen FADE_FROM_BLACK
	special HealPlayerParty
	release
	end

WoolooPasture_3_EventScript_Wooloo2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_WOOLOO, 15, ITEM_SITRUS_BERRY
	dowildbattle
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_WOOLOO_3
	setflag FLAG_TEMP_3
	addvar VAR_WOOLOO_PASTURE_2_STATE, 1
	fadescreen FADE_FROM_BLACK
	special HealPlayerParty
	release
	end

WoolooPasture_2_EventScript_Trigger_2::
	lock
	playse SE_PIN
	applymovement LOCALID_WOOLOO_2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WOOLOO_2, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	applymovement LOCALID_WOOLOO_2, Wooloopasture_2_Movement_ApproachLedge2
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_WOOLOO_2, Wooloopasture_2_Movement_JumpAndReachHole2
	waitmovement 0
	addvar VAR_TEMP_1, 1
	setobjectxy LOCALID_WOOLOO_2, 33, 9
	setobjectxyperm LOCALID_WOOLOO_2, 33, 9
	release
	end

WoolooPasture_2_EventScript_Trigger_3GoBack::
	lock
	playse SE_PIN
	applymovement LOCALID_WOOLOO_2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WOOLOO_2, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	applymovement LOCALID_WOOLOO_2, Wooloopasture_2_Movement_GoBackToStartWooloo2
	waitmovement 0
	setvar VAR_TEMP_1, 0
	setobjectxy LOCALID_WOOLOO_2, 38, 6
	setobjectxyperm LOCALID_WOOLOO_2, 38, 6
	release
	end

WoolooPasture_2_EventScript_Trigger_3Corner::
	lock
	playse SE_PIN
	applymovement LOCALID_WOOLOO_2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WOOLOO_2, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	applymovement LOCALID_WOOLOO_2, Wooloopasture_2_Movement_GoToCornerWooloo2
	waitmovement 0
	addvar VAR_TEMP_1, 1
	setobjectxy LOCALID_WOOLOO_2, 33, 14
	setobjectxyperm LOCALID_WOOLOO_2, 33, 14
	release
	end

WoolooPasture_2_EventScript_Trigger_4a::
	lock
	playse SE_PIN
	applymovement LOCALID_WOOLOO_3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WOOLOO_3, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	applymovement LOCALID_WOOLOO_3, Wooloopasture_2_Movement_GoToLastCorner1
	waitmovement 0
	addvar VAR_TEMP_2, 1
	setobjectxy LOCALID_WOOLOO_3, 52, 12
	setobjectxyperm LOCALID_WOOLOO_3, 52, 12
	release
	end

WoolooPasture_2_EventScript_Trigger_4b::
	lock
	playse SE_PIN
	applymovement LOCALID_WOOLOO_3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WOOLOO_3, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	applymovement LOCALID_WOOLOO_3, Wooloopasture_2_Movement_GoToLastCorner2
	waitmovement 0
	addvar VAR_TEMP_2, 1
	setobjectxy LOCALID_WOOLOO_3, 52, 12
	setobjectxyperm LOCALID_WOOLOO_3, 52, 12
	release
	end

Wooloopasture_2_Movement_GoToLastCorner1:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Wooloopasture_2_Movement_GoToLastCorner2:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Wooloopasture_2_Movement_ApproachLedge:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	step_end

Wooloopasture_2_Movement_JumpAndReachHole:
	jump_2_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Wooloopasture_2_Movement_ApproachLedge2:
	walk_fast_down
	step_end

Wooloopasture_2_Movement_JumpAndReachHole2:
	jump_2_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Wooloopasture_2_Movement_GoBackToStartWooloo2:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Wooloopasture_2_Movement_GoToCornerWooloo2:
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

WoolooPasture_2_Text_ZigzagoonCatchesYou:
	.string "ZIGZAGOON: Stay away!$"

WoolooPasture_2_Text_Completed:
	.string "{FONT_SMALL}Stage 5 completed.$"
