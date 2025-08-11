ObstagoonTemple_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ObstagoonTemple_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, ObstagoonTemple_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ObstagoonTemple_OnFrame
	.byte 0

ObstagoonTemple_OnFrame:
	map_script_2 VAR_OBSTAGOON_TEMPLE_BUTTONS_PRESSED, 2, ObstagoonTemple_Eventscript_EntranceOpened
	.2byte 0

ObstagoonTemple_Eventscript_EntranceOpened:
	lock
	msgbox ObstagoonTemple_Text_EntranceOpened, MSGBOX_DEFAULT
	closemessage
	addvar VAR_OBSTAGOON_TEMPLE_BUTTONS_PRESSED, 1
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_DOWN
	call ObstagoonTemple_PutExitTiles
	release
	end

ObstagoonTemple_PutExitTiles:
	setmetatile 24, 3, 0x20B, FALSE
	setmetatile 24, 4, 0x20B, FALSE
	setmetatile 24, 5, 0x20B, FALSE
	setmetatile 24, 6, 0x20B, FALSE
	setmetatile 24, 7, 0x20B, FALSE
	setmetatile 24, 8, 0x20B, FALSE
	setmetatile 23, 1, 0x2A0, TRUE
	setmetatile 24, 1, 0x2A1, TRUE
	setmetatile 25, 1, 0x2A2, TRUE
	setmetatile 23, 2, 0x2A8, TRUE
	setmetatile 24, 2, 0x2A9, FALSE
	setmetatile 25, 2, 0x2AA, TRUE
	return

ObstagoonTemple_OnLoad:
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, ObstagoonTemple_SetButton
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, ObstagoonTemple_SetButton2
	call_if_set FLAG_DECORATION_7, ObstagoonTemple_RemoveFire1
	call_if_set FLAG_DECORATION_8, ObstagoonTemple_RemoveFire2
	call_if_set FLAG_DECORATION_9, ObstagoonTemple_RemoveFire3
	call_if_set FLAG_DECORATION_10, ObstagoonTemple_RemoveFire4
	call_if_set FLAG_DECORATION_11, ObstagoonTemple_RemoveFire5
	call_if_set FLAG_DECORATION_12, ObstagoonTemple_RemoveFire6
	call_if_set FLAG_DECORATION_13, ObstagoonTemple_RemoveFire7
	call_if_set FLAG_DECORATION_14, ObstagoonTemple_RemoveFire8
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, ObstagoonTemple_RemoveFire9
	call_if_ge VAR_OBSTAGOON_TEMPLE_BUTTONS_PRESSED, 2, ObstagoonTemple_PutExitTiles
	call_if_eq VAR_OBSTAGOON_ALERT, 1, ObstagoonTemple_ObstagoonLooksUp
	end

ObstagoonTemple_ObstagoonLooksUp:
	setobjectmovementtype LOCALID_MY_OBSTAGOON_GUARD, MOVEMENT_TYPE_FACE_UP
	return

ObstagoonTemple_RemoveFire1:
	setmetatile 24, 48, 0x22C, TRUE
	setmetatile 24, 47, 0x20B, FALSE
	return

ObstagoonTemple_RemoveFire2:
	setmetatile 1, 32, 0x22C, TRUE
	setmetatile 1, 31, 0x20B, FALSE
	return

ObstagoonTemple_RemoveFire3:
	setmetatile 37, 42, 0x22C, TRUE
	setmetatile 37, 41, 0x20B, FALSE
	return

ObstagoonTemple_RemoveFire4:
	setmetatile 28, 16, 0x22C, TRUE
	setmetatile 28, 15, 0x20B, FALSE
	return

ObstagoonTemple_RemoveFire5:
	setmetatile 48, 27, 0x22C, TRUE
	setmetatile 48, 26, 0x20B, FALSE
	return

ObstagoonTemple_RemoveFire6:
	setmetatile 19, 3, 0x22C, TRUE
	setmetatile 19, 2, 0x20B, FALSE
	return

ObstagoonTemple_RemoveFire7:
	setmetatile 17, 33, 0x22C, TRUE
	setmetatile 17, 32, 0x20B, FALSE
	return

ObstagoonTemple_RemoveFire8:
	setmetatile 28, 4, 0x22C, TRUE
	setmetatile 28, 3, 0x20B, FALSE
	return

ObstagoonTemple_RemoveFire9:
	setmetatile 18, 21, 0x22C, TRUE
	setmetatile 18, 20, 0x20B, FALSE
	return

ObstagoonTemple_SetButton:
	setmetatile 7, 4, 0x215, FALSE
	return

ObstagoonTemple_SetButton2:
	setmetatile 42, 4, 0x215, FALSE
	return

ObstagoonTemple_OnTransition:
	setflashlevel 1
	end

ObstagoonTemple_Trigger_LeftButton::
	lock
	waitse
	playse SE_CLICK
	setmetatile 7, 4, 0x215, FALSE
	special DrawWholeMapView
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
	setvar VAR_TEMP_0, 1
	addvar VAR_OBSTAGOON_TEMPLE_BUTTONS_PRESSED, 1
	release
	end

ObstagoonTemple_Trigger_LeftButton2::
	lock
	waitse
	playse SE_CLICK
	setmetatile 7, 4, 0x20D, FALSE
	special DrawWholeMapView
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
	subvar VAR_OBSTAGOON_TEMPLE_BUTTONS_PRESSED, 1
	setvar VAR_TEMP_0, 0
	release
	end

ObstagoonTemple_Trigger_RightButton::
	lock
	waitse
	playse SE_CLICK 
	setmetatile 42, 4, 0x215, FALSE
	special DrawWholeMapView
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
	addvar VAR_OBSTAGOON_TEMPLE_BUTTONS_PRESSED, 1
	setvar VAR_TEMP_1, 1
	release
	end

ObstagoonTemple_Trigger_RightButton2::
	lock
	waitse
	playse SE_CLICK 
	setmetatile 42, 4, 0x20D, FALSE
	special DrawWholeMapView
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
	subvar VAR_OBSTAGOON_TEMPLE_BUTTONS_PRESSED, 1
	setvar VAR_TEMP_1, 0
	release
	end

ObstagoonTemple_EventScript_Caught::
	lock
	faceplayer
	waitse
	playse SE_PIN
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_NORMAL
	msgbox ObstagoonRunaway_Text_Obstagoon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	addmoney 1
	warp MAP_OBSTAGOON_TEMPLE, 1, 48
	waitstate
	release
	end

ObstagoonTemple_EventScript_Fire1::
	lock
	goto_if_set FLAG_DECORATION_7, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 10
	setflag FLAG_DECORATION_7
	setmetatile 24, 48, 0x22C, TRUE
	setmetatile 24, 47, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Fire2::
	lock
	goto_if_set FLAG_DECORATION_8, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 1
	setflag FLAG_DECORATION_8
	setmetatile 1, 32, 0x22C, TRUE
	setmetatile 1, 31, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Fire3::
	lock
	goto_if_set FLAG_DECORATION_9, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 5
	setflag FLAG_DECORATION_9
	setmetatile 37, 42, 0x22C, TRUE
	setmetatile 37, 41, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Fire4::
	lock
	goto_if_set FLAG_DECORATION_10, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 15
	setflag FLAG_DECORATION_10
	setmetatile 28, 16, 0x22C, TRUE
	setmetatile 28, 15, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Fire5::
	lock
	goto_if_set FLAG_DECORATION_11, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 16
	setflag FLAG_DECORATION_11
	setmetatile 48, 27, 0x22C, TRUE
	setmetatile 48, 26, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Fire6::
	lock
	goto_if_set FLAG_DECORATION_12, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 17
	setflag FLAG_DECORATION_12
	setmetatile 19, 3, 0x22C, TRUE
	setmetatile 19, 2, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Fire7::
	lock
	goto_if_set FLAG_DECORATION_13, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 18
	setflag FLAG_DECORATION_13
	setmetatile 17, 33, 0x22C, TRUE
	setmetatile 17, 32, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Fire8::
	lock
	goto_if_set FLAG_DECORATION_14, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 19
	setflag FLAG_DECORATION_14
	setmetatile 28, 4, 0x22C, TRUE
	setmetatile 28, 3, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Fire9::
	lock
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, ObstagoonTemple_EventScript_FireDoNothing
	removeobject 20
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
	setmetatile 18, 21, 0x22C, TRUE
	setmetatile 18, 20, 0x20B, FALSE
	special DrawWholeMapView
	msgbox ObstagoonTemple_Text_FirePutOut, MSGBOX_DEFAULT
	closemessage
	release
	end

ObstagoonTemple_EventScript_Alert::
	lock
	waitse
	playse SE_PIN
	applymovement LOCALID_MY_OBSTAGOON_GUARD, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MY_OBSTAGOON_GUARD, Common_Movement_Delay48
	waitmovement 0
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	applymovement LOCALID_MY_OBSTAGOON_GUARD, Common_Movement_FaceUp
	waitmovement 0
	addvar VAR_OBSTAGOON_ALERT, 1
	release
	end

ObstagoonTemple_EventScript_Completed::
	lock
	msgbox ObstagoonTemple_Text_Completed, MSGBOX_DEFAULT
	setmetatile 24, 7, 0x201, TRUE
	special DrawWholeMapView
	setflag FLAG_BADGE10_GET
	closemessage
	addvar VAR_TEMP_3, 1
	release
	end

ObstagoonTemple_EventScript_FireDoNothing:
	release
	end

ObstagoonTemple_EventScript_FireSign::
	msgbox ObstagoonTemple_Text_FireSign, MSGBOX_SIGN
	end

ObstagoonTemple_EventScript_StatueSign::
	msgbox ObstagoonTemple_Text_StatueSign, MSGBOX_SIGN
	end

ObstagoonTemple_EventScript_FirewoodSign::
	msgbox ObstagoonTemple_Text_FirewoodSign, MSGBOX_SIGN
	end

ObstagoonTemple_Text_FireSign:
	.string "Cushion with a fire sign on top of it.$"

ObstagoonTemple_Text_FirePutOut:
	.string "The fire got extinguished.$"

ObstagoonTemple_Text_StatueSign:
	.string "Statue resembling a wolf.$"

ObstagoonTemple_Text_FirewoodSign:
	.string "Fire is burning bright.$"

ObstagoonTemple_Text_EntranceOpened:
	.string "Exit path has opened.$"

ObstagoonTemple_Text_Completed:
	.string "{FONT_SMALL}Stage 10 completed.$"
