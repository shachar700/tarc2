WoolooSnack_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, WoolooSnack_OnResume
	.byte 0

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
	givemon species=SPECIES_OBSTAGOON level=20, isShiny=TRUE, move1=MOVE_NIGHT_SLASH, move2=MOVE_BABY_DOLL_EYES, move3=MOVE_THIEF, move4=MOVE_ROCK_CLIMB
	setflag FLAG_OBSTAGOON_ROCK_CLIMB
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_MY_SHINY_OBSTAGOON
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

WoolooSnack_Movement_GoUp:
	jump_2_up
	delay_16
	step_end

WoolooSnack_Movement_GoDown:
	jump_2_down
	delay_16
	step_end

WoolooSnack_Text_RockClimbUp:
	.string "Climb up?$"

WoolooSnack_Text_RockClimbDown:
	.string "Climb down?$"

WoolooSnack_Text_RockClimbCantClimb:
	.string "Can't climb.$"

WoolooSnack_Text_ShinyObstagoonWantsToJoin:
	.string "Obstagoon would like to join your\n"
	.string "party. Will you accept?$"
	
