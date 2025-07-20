WoolooBitterEnd_MapScripts::
	.byte 0

WoolooBitterEnd_EventScript_Caught::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MALE, FALSE
	playse SE_PIN
	waitse
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_NORMAL
	msgbox ObstagoonRunaway_Text_Obstagoon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	warp MAP_WOOLOO_BITTER_END, 2, 7
	waitstate
	release
	end

WoolooBitterEnd_EventScript_ZigzagoonBoulder::
	lockall
	goto_if_set FLAG_SYS_USE_STRENGTH, WoolooBitterEnd_EventScript_CheckActivatedBoulder
	setfieldeffectargument 1, VAR_RESULT
	msgbox WoolooBitterEnd_Text_WantToUseZigzagoon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, WoolooBitterEnd_EventScript_CancelStrength
	closemessage
	@dofieldeffect FLDEFF_USE_STRENGTH
	@waitstate
	goto WoolooBitterEnd_EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	@dofieldeffect FLDEFF_USE_STRENGTH
	@waitstate
	goto WoolooBitterEnd_EventScript_ActivateStrength
	end

WoolooBitterEnd_EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox WoolooBitterEnd_Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

WoolooBitterEnd_EventScript_CancelStrength::
	closemessage
	releaseall
	end

WoolooBitterEnd_EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

WoolooBitterEndEventScript_Trigger1::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	goto WoolooBitterEndEventScript_Trigger2
	end

WoolooBitterEndEventScript_Trigger2::
	lock
	applymovement LOCALID_WOOLOO_HERD, WoolooBitterEnd_Movement_ApproachLedge
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_WOOLOO_HERD, WoolooBitterEnd_Movement_JumpLedge
	waitmovement 0
	addvar VAR_TEMP_0, 1
	setobjectxyperm LOCALID_WOOLOO_HERD, 19, 7
	releaseall
	end

WoolooBitterEndEventScript_Trigger3a::
	applymovement LOCALID_WOOLOO_HERD, WoolooBitterEnd_Movement_ComeTo19x7y
	waitmovement 0
	addvar VAR_TEMP_0, 1
	end

WoolooBitterEndEventScript_Trigger3b::
	applymovement LOCALID_WOOLOO_HERD, WoolooBitterEnd_Movement_ComeTo19x7y2
	waitmovement 0
	addvar VAR_TEMP_0, 1
	end

WoolooBitterEndEventScript_Trigger4::
	lockall
	applymovement LOCALID_WOOLOO_HERD, WoolooBitterEnd_Movement_ReachCloseToEnd
	waitmovement 0
	applymovement LOCALID_WOOLOO_HERD, WoolooBitterEnd_Movement_GoToEnd1
	waitmovement 0
	addvar VAR_TEMP_0, 1
	releaseall
	end

WoolooBitterEndEventScript_Trigger5::
	lockall
	applymovement LOCALID_WOOLOO_HERD, WoolooBitterEnd_Movement_ReachCloseToEnd
	waitmovement 0
	applymovement LOCALID_WOOLOO_HERD, WoolooBitterEnd_Movement_GoToEnd2
	waitmovement 0
	addvar VAR_TEMP_0, 1
	releaseall
	end


WoolooBitterEnd_EventScript_ShinyWooloo::
	lock
	faceplayer
	waitse
	playse SE_SHINY
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	msgbox WoolooBitterEnd_Text_Completed, MSGBOX_DEFAULT
	closemessage
	warp MAP_OBSTAGOON_RUNAWAY, 6, 6
	waitstate
	release
	end

WoolooBitterEnd_Movement_ReachCloseToEnd:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

WoolooBitterEnd_Movement_GoToEnd1:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

WoolooBitterEnd_Movement_GoToEnd2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

WoolooBitterEnd_Movement_ApproachLedge:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

WoolooBitterEnd_Movement_JumpLedge:
	jump_2_down
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

WoolooBitterEnd_Movement_ComeTo19x7y:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

WoolooBitterEnd_Movement_ComeTo19x7y2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end


WoolooBitterEnd_EventScript_Wooloo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	msgbox WoolooBitterEnd_Text_Wooloo, MSGBOX_DEFAULT
	waitmoncry
	release
	end

WoolooBitterEnd_Text_Wooloo:
	.string "WOOLOO: Wooloo?$"

WoolooBitterEnd_Text_WantToUseZigzagoon:
	.string "It's a ZIGZAGOON, a POKéMON\n"
	.string "that can protect the herd.\p"
	.string "Would you like to use its help?$"

WoolooBitterEnd_Text_MonUsedStrength:
	.string "WOOLOO called for ZIGZAGOON!\p"
	.string "ZIGZAGOON's STRENGTH made it\n"
	.string "possible to move the herd around!$"

WoolooBitterEnd_Text_StrengthActivated:
	.string "WOOLOO made it possible to move\n"
	.string "the ZIGZAGOON around.$"

WoolooBitterEnd_Text_Completed:
	.string "Stage 4 completed.$"
