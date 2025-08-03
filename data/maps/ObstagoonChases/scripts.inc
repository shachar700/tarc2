ObstagoonChases_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ObstagoonChases_OnTransition
	.byte 0

ObstagoonChases_OnTransition:
	copyvar VAR_LAST_TALKED, LOCALID_WOOLOO_CHASED
	end

ObstagoonChases_EventScript_WoolooSurprised::
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	return

ObstagoonChases_EventScript_Triggert1::
	lock
	call ObstagoonChases_EventScript_WoolooSurprised
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_WoolooOut
	waitmovement 0
	setobjectxy LOCALID_WOOLOO_CHASED, 4, 2
	setobjectxyperm LOCALID_WOOLOO_CHASED, 4, 2
	addvar VAR_TEMP_0, 1
	release
	end

ObstagoonChases_EventScript_Triggert2::
	lock
	call ObstagoonChases_EventScript_WoolooSurprised
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_WoolooOut2
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_WoolooJumpsLeft
	waitmovement 0
	setobjectxy LOCALID_WOOLOO_CHASED, 3, 10
	setobjectxyperm LOCALID_WOOLOO_CHASED, 3, 10
	addvar VAR_TEMP_0, 1
	release
	end

ObstagoonChases_EventScript_Triggert3a::
	lock
	call ObstagoonChases_EventScript_WoolooSurprised
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_WoolooOutUp
	waitmovement 0
	setobjectxy LOCALID_WOOLOO_CHASED, 13, 3
	setobjectxyperm LOCALID_WOOLOO_CHASED, 13, 3
	addvar VAR_TEMP_0, 1
	release
	end

ObstagoonChases_EventScript_Triggert3b::
	lock
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	call ObstagoonChases_EventScript_WoolooSurprised
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_WoolooOutUp2
	waitmovement 0
	setobjectxy LOCALID_WOOLOO_CHASED, 13, 3
	setobjectxyperm LOCALID_WOOLOO_CHASED, 13, 3
	addvar VAR_TEMP_0, 1
	release
	end

ObstagoonChases_EventScript_Triggert4::
	lock
	call ObstagoonChases_EventScript_WoolooSurprised
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_WoolooOut3
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_WoolooJumpsLeft
	waitmovement 0
	setobjectxy LOCALID_WOOLOO_CHASED, 11, 11
	setobjectxyperm LOCALID_WOOLOO_CHASED, 11, 11
	addvar VAR_TEMP_0, 1
	release
	end

ObstagoonChases_EventScript_Wooloo::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_ge VAR_TEMP_0, 16, ObstagoonChases_EventScript_WoolooBattle
	call ObstagoonChases_EventScript_WoolooSurprised
	switch VAR_FACING
	case DIR_WEST, ObstagoonChases_EventScript_PlayerFacesWest
	case DIR_EAST, ObstagoonChases_EventScript_PlayerFacesEast
	end

ObstagoonChases_EventScript_PlayerFacesWest::
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_BackToInit
	waitmovement 0
	setvar VAR_TEMP_0, 0
	release
	end

ObstagoonChases_EventScript_PlayerFacesEast::
	applymovement LOCALID_WOOLOO_CHASED, ObstagoonChases_Movement_Cornered
	waitmovement 0
	setobjectxy LOCALID_WOOLOO_CHASED, 17, 12
	setobjectxyperm LOCALID_WOOLOO_CHASED, 17, 12
	release
	end

ObstagoonChases_EventScript_WoolooBattle::
	lock
	call ObstagoonChases_EventScript_WoolooSurprised
	setwildbattle SPECIES_WOOLOO, 13, ITEM_SITRUS_BERRY
	dowildbattle
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_WOOLOO_CHASED
	fadescreenswapbuffers FADE_FROM_BLACK
	special HealPlayerParty
	msgbox ObstagoonChases_Text_Completed, MSGBOX_AUTOCLOSE
	clearflag FLAG_SYS_B_DASH
	clearflag FLAG_SYS_POKEMON_GET
	togglegender
	warp MAP_WOOLOO_PUSHES, 2, 7
	waitstate
	release
	end


ObstagoonChases_Movement_Cornered:
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

ObstagoonChases_Movement_BackToInit:
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ObstagoonChases_Movement_WoolooOut:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ObstagoonChases_Movement_WoolooOut2:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ObstagoonChases_Movement_WoolooJumpsLeft:
	jump_2_down
	delay_16
	walk_fast_down
	walk_fast_down
	step_end

ObstagoonChases_Movement_WoolooOutUp:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ObstagoonChases_Movement_WoolooOutUp2:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ObstagoonChases_Movement_WoolooOut3:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	step_end

ObstagoonChases_Text_Completed:
	.string "{FONT_SMALL}Stage 3 completed.$"

