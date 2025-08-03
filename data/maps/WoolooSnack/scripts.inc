WoolooSnack_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, WoolooSnack_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WoolooSnack_OnFrame
	.byte 0


WoolooSnack_OnFrame:
	map_script_2 VAR_WOOLOO_SNACK_STATE, 4, WoolooSnack_EventScript_Completed
	.2byte 0

WoolooSnack_EventScript_Completed:
	lock
	msgbox WoolooSnack_Text_Completed, MSGBOX_AUTOCLOSE
	clearflag FLAG_SYS_B_DASH
	clearflag FLAG_SYS_POKEMON_GET
	togglegender
	warp MAP_OBSTAGOON_FIERY_PATH, 27, 32
	waitstate
	release
	end

WoolooSnack_OnResume:
	setstepcallback STEP_CB_ASH
	end

WoolooSnack_EventScript_RockClimb::
	lock
	goto_if_unset FLAG_OBSTAGOON_ROCK_CLIMB, WoolooSnack_EventScript_RockClimbCantClimb
	switch VAR_FACING
	case DIR_NORTH, WoolooSnack_EventScript_RockClimbUp
	case DIR_SOUTH, WoolooSnack_EventScript_RockClimbDown
	end

WoolooSnack_EventScript_RockClimbCantClimb::
	msgbox WoolooSnack_Text_RockClimbCantClimb, MSGBOX_AUTOCLOSE
	end

WoolooSnack_EventScript_RockClimbDeclined::
	release
	end

WoolooSnack_EventScript_RockClimbUp::
	msgbox WoolooSnack_Text_RockClimbUp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, WoolooSnack_EventScript_RockClimbDeclined
	closemessage
	applymovement LOCALID_PLAYER, WoolooSnack_Movement_GoUp
	waitmovement 0
	release
	end

WoolooSnack_EventScript_RockClimbDown::
	msgbox WoolooSnack_Text_RockClimbDown, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, WoolooSnack_EventScript_RockClimbDeclined
	closemessage
	applymovement LOCALID_PLAYER, WoolooSnack_Movement_GoDown
	waitmovement 0
	release
	end

WoolooSnack_EventScript_ShinyObstagoon::
	lock
	faceplayer
	msgbox WoolooSnack_Text_ShinyObstagoonWantsToJoin, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, WoolooSnack_EventScript_RockClimbDeclined
	playfanfare MUS_OBTAIN_ITEM
	message WoolooSnack_Text_ShinyObstagoonJoinedYourParty
	waitfanfare
	waitmessage
	closemessage
	givemon species=SPECIES_OBSTAGOON level=20, isShiny=TRUE, move1=MOVE_NIGHT_SLASH, move2=MOVE_BABY_DOLL_EYES, move3=MOVE_THIEF, move4=MOVE_ROCK_CLIMB
	setflag FLAG_OBSTAGOON_ROCK_CLIMB
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_MY_SHINY_OBSTAGOON
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

WoolooSnack_EventScript_1stWooloo::
	lock
	faceplayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_eq VAR_TEMP_1, 6, WoolooSnack_EventScript_1stWoolooEscapes
	call ObstagoonChases_EventScript_WoolooSurprised
	createmon species=SPECIES_WOOLOO level=20, slot=0, side=1
	createmon species=SPECIES_WOOLOO level=20, slot=1, side=1
	setwilddoubleflag
	dowildbattle
	setflag FLAG_TEMP_1
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	addvar VAR_WOOLOO_SNACK_STATE, 1
	special HealPlayerParty
	release
	end

WoolooSnack_EventScript_1stWoolooEscapes::
	call ObstagoonChases_EventScript_WoolooSurprised
	waitse
	playse SE_LEDGE
	applymovement LOCALID_1ST_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_1ST_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_1ST_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	applymovement LOCALID_1ST_WOOLOO, WoolooSnack_Movement_1stWoolooGoCorner
	waitmovement 0
	setobjectxy LOCALID_1ST_WOOLOO, 8, 10
	setobjectxyperm LOCALID_1ST_WOOLOO, 8, 10
	release
	end

WoolooSnack_EventScript_2ndWooloo::
	lock
	faceplayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_le VAR_TEMP_1, 25, WoolooSnack_EventScript_2ndWoolooEscapes
	goto_if_le VAR_TEMP_1, 31, WoolooSnack_EventScript_2ndWoolooLoop_Part1
	goto_if_le VAR_TEMP_1, 35, WoolooSnack_EventScript_2ndWoolooLoop_Part2
	call ObstagoonChases_EventScript_WoolooSurprised
	createmon species=SPECIES_WOOLOO level=20, slot=0, side=1
	createmon species=SPECIES_WOOLOO level=20, slot=1, side=1
	setwilddoubleflag
	dowildbattle
	setflag FLAG_TEMP_2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	addvar VAR_WOOLOO_SNACK_STATE, 1
	special HealPlayerParty
	release
	end

WoolooSnack_EventScript_3rdWooloo::
	lock
	call ObstagoonChases_EventScript_WoolooSurprised
	createmon species=SPECIES_WOOLOO level=20, slot=0, side=1
	createmon species=SPECIES_WOOLOO level=20, slot=1, side=1
	setwilddoubleflag
	dowildbattle
	setflag FLAG_TEMP_3
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	addvar VAR_WOOLOO_SNACK_STATE, 1
	special HealPlayerParty
	release
	end	

WoolooSnack_EventScript_4thWooloo::
	lock
	call ObstagoonChases_EventScript_WoolooSurprised
	createmon species=SPECIES_WOOLOO level=20, slot=0, side=1
	createmon species=SPECIES_WOOLOO level=20, slot=1, side=1
	setwilddoubleflag
	dowildbattle
	setflag FLAG_TEMP_4
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	addvar VAR_WOOLOO_SNACK_STATE, 1
	special HealPlayerParty
	release
	end	


WoolooSnack_EventScript_2ndWoolooLoop_Part1::
	call ObstagoonChases_EventScript_WoolooSurprised
	switch VAR_FACING
	case DIR_WEST, WoolooSnack_EventScript_2ndWoolooFacesWest
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooReach1stStop2
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkDownFast
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkDownFast
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkRightFast
	waitmovement 0
	setobjectxy LOCALID_2ND_WOOLOO, 18, 34
	setobjectxyperm LOCALID_2ND_WOOLOO, 18, 34
	release
	end

WoolooSnack_EventScript_2ndWoolooLoop_Part2::
	call ObstagoonChases_EventScript_WoolooSurprised
	goto_if_gt VAR_TEMP_0, 13, WoolooSnack_EventScript_2ndWoolooLoop_GoBackUp
	switch VAR_FACING
	case DIR_NORTH, WoolooSnack_EventScript_2ndWoolooFacesNorth2
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkDownFast
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkDownFast
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooReach1stStop2
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooReach1stStop2
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkRightFast
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	delay 30
	playse SE_LEDGE
	waitse
	setobjectxy LOCALID_2ND_WOOLOO, 22, 43
	setobjectxyperm LOCALID_2ND_WOOLOO, 22, 43
	release
	end

WoolooSnack_EventScript_2ndWoolooFacesNorth2::
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooFacesNorthEscapes
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkDownFast
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooReach1stStop2
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooReach1stStop2
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkRightFast
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	delay 30
	playse SE_LEDGE
	waitse
	setobjectxy LOCALID_2ND_WOOLOO, 22, 43
	setobjectxyperm LOCALID_2ND_WOOLOO, 22, 43
	release
	end

WoolooSnack_EventScript_2ndWoolooLoop_GoBackUp::
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_JumpRight
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoBackUp
	waitmovement 0
	setobjectxy LOCALID_2ND_WOOLOO, 13, 30
	setobjectxyperm LOCALID_2ND_WOOLOO, 13, 30
	release
	end


WoolooSnack_EventScript_2ndWoolooFacesWest::
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooApproachesLeftLedge
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooParksLeftSide
	waitmovement 0
	setobjectxy LOCALID_2ND_WOOLOO, 8, 34
	setobjectxyperm LOCALID_2ND_WOOLOO, 8, 34
	release
	end

WoolooSnack_EventScript_2ndWoolooEscapes::
	call ObstagoonChases_EventScript_WoolooSurprised
	switch VAR_FACING
	case DIR_NORTH, WoolooSnack_EventScript_2ndWoolooFacesNorth
	applymovement LOCALID_2ND_WOOLOO, Common_Movement_WalkDownFast
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooReach1stStop2
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooReach1stStop
	waitmovement 0
	setobjectxy LOCALID_2ND_WOOLOO, 13, 30
	setobjectxyperm LOCALID_2ND_WOOLOO, 13, 30
	release
	end

WoolooSnack_EventScript_2ndWoolooFacesNorth::
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooFacesNorthEscapes
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_GoDown
	waitmovement 0
	applymovement LOCALID_2ND_WOOLOO, WoolooSnack_Movement_2ndWoolooReach1stStop
	waitmovement 0
	setobjectxy LOCALID_2ND_WOOLOO, 13, 30
	setobjectxyperm LOCALID_2ND_WOOLOO, 13, 30
	release
	end

WoolooSnack_EventScript_ObstagoonRestart::
	lock
	faceplayer
	msgbox WoolooSnack_Text_ObstagoonRestart, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, WoolooSnack_EventScript_RockClimbDeclined
	setvar VAR_WOOLOO_SNACK_STATE, 0
	addvar VAR_TWO_RESPAWN_COUNTER, 1
	warp MAP_WOOLOO_SNACK, 11, 5
	waitstate
	release
	end

WoolooSnack_Movement_GoBackUp:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

WoolooSnack_Movement_JumpRight:
	jump_2_right
	step_end

WoolooSnack_Movement_2ndWoolooParksLeftSide:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

WoolooSnack_Movement_2ndWoolooApproachesLeftLedge:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

WoolooSnack_Movement_2ndWoolooReach1stStop2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

WoolooSnack_Movement_2ndWoolooReach1stStop:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end

WoolooSnack_Movement_2ndWoolooFacesNorthEscapes:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	step_end

WoolooSnack_Movement_1stWoolooGoCorner:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	step_end

WoolooSnack_Movement_GoUp:
	jump_2_up
	delay_16
	step_end

WoolooSnack_Movement_GoDown:
	jump_2_down
	delay_16
	step_end

WoolooSnack_Text_ObstagoonRestart:
	.string "Obstagoon: Restart descend?$"

WoolooSnack_Text_RockClimbUp:
	.string "Climb up?$"

WoolooSnack_Text_RockClimbDown:
	.string "Climb down?$"

WoolooSnack_Text_RockClimbCantClimb:
	.string "Can't climb.$"

WoolooSnack_Text_ShinyObstagoonWantsToJoin:
	.string "Obstagoon would like to join your\n"
	.string "party. Will you accept?$"

WoolooSnack_Text_ShinyObstagoonJoinedYourParty:
	.string "Obstagoon joined your party.$"	

WoolooSnack_Text_Completed:
	.string "{FONT_SMALL}Stage 7 completed.$"
