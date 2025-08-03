WoolooPushes_MapScripts::
	.byte 0

WoolooPushes_EventScript_Caught::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MALE, FALSE
	playse SE_PIN
	waitse
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_NORMAL
	msgbox ObstagoonRunaway_Text_Obstagoon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	addvar VAR_TWO_RESPAWN_COUNTER, 1
	warp MAP_WOOLOO_PUSHES, 2, 7
	waitstate
	release
	end

WoolooPushes_EventScript_ZigzagoonBoulder::
	lock
	bufferspeciesname STR_VAR_1, SPECIES_ZIGZAGOON
	goto WoolooPushes_EventScript_DogBoulder
	end

WoolooPushes_EventScript_GrowlitheBoulder::
	lock
	bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
	goto WoolooPushes_EventScript_DogBoulder
	end

WoolooPushes_EventScript_HoundourBoulder::
	lock
	bufferspeciesname STR_VAR_1, SPECIES_HOUNDOUR
	goto WoolooPushes_EventScript_DogBoulder
	end

WoolooPushes_EventScript_DogBoulder::
	lockall
	goto_if_set FLAG_SYS_USE_STRENGTH, WoolooPushes_EventScript_CheckActivatedBoulder
	setfieldeffectargument 1, VAR_RESULT
	msgbox WoolooPushes_Text_WantToUseZigzagoon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, WoolooPushes_EventScript_CancelStrength
	closemessage
	@dofieldeffect FLDEFF_USE_STRENGTH
	@waitstate
	goto WoolooPushes_EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	@dofieldeffect FLDEFF_USE_STRENGTH
	@waitstate
	goto WoolooPushes_EventScript_ActivateStrength
	end

WoolooPushes_EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox WoolooPushes_Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

WoolooPushes_EventScript_CancelStrength::
	closemessage
	releaseall
	end

WoolooPushes_EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

WoolooPushesEventScript_Trigger1::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	goto WoolooPushesEventScript_Trigger2
	end

WoolooPushesEventScript_Trigger2::
	lock
	applymovement LOCALID_WOOLOO_HERD, WoolooPushes_Movement_ApproachLedge
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_WOOLOO_HERD, WoolooPushes_Movement_JumpLedge
	waitmovement 0
	addvar VAR_TEMP_0, 1
	setobjectxyperm LOCALID_WOOLOO_HERD, 19, 7
	releaseall
	end

WoolooPushesEventScript_Trigger3a::
	applymovement LOCALID_WOOLOO_HERD, WoolooPushes_Movement_ComeTo19x7y
	waitmovement 0
	addvar VAR_TEMP_0, 1
	end

WoolooPushesEventScript_Trigger3b::
	applymovement LOCALID_WOOLOO_HERD, WoolooPushes_Movement_ComeTo19x7y2
	waitmovement 0
	addvar VAR_TEMP_0, 1
	end

WoolooPushesEventScript_Trigger4::
	lockall
	applymovement LOCALID_WOOLOO_HERD, WoolooPushes_Movement_ReachCloseToEnd
	waitmovement 0
	applymovement LOCALID_WOOLOO_HERD, WoolooPushes_Movement_GoToEnd1
	waitmovement 0
	addvar VAR_TEMP_0, 1
	releaseall
	end

WoolooPushesEventScript_Trigger5::
	lockall
	applymovement LOCALID_WOOLOO_HERD, WoolooPushes_Movement_ReachCloseToEnd
	waitmovement 0
	applymovement LOCALID_WOOLOO_HERD, WoolooPushes_Movement_GoToEnd2
	waitmovement 0
	addvar VAR_TEMP_0, 1
	releaseall
	end


WoolooPushes_EventScript_ShinyWooloo::
	lock
	faceplayer
	waitse
	playse SE_SHINY
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	msgbox WoolooPushes_Text_Completed, MSGBOX_AUTOCLOSE
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	togglegender
	warp MAP_WOOLOO_PASTURE_2, 1, 11
	waitstate
	release
	end

WoolooPushes_Movement_ReachCloseToEnd:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

WoolooPushes_Movement_GoToEnd1:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

WoolooPushes_Movement_GoToEnd2:
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

WoolooPushes_Movement_ApproachLedge:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

WoolooPushes_Movement_JumpLedge:
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

WoolooPushes_Movement_ComeTo19x7y:
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

WoolooPushes_Movement_ComeTo19x7y2:
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


WoolooPushes_EventScript_Wooloo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	msgbox WoolooPushes_Text_Wooloo, MSGBOX_DEFAULT
	waitmoncry
	release
	end

WoolooPushes_Text_Wooloo:
	.string "WOOLOO: Wooloo?$"

WoolooPushes_Text_WantToUseZigzagoon:
	.string "It's a {STR_VAR_1}, a POKéMON\n"
	.string "that can protect the herd.\p"
	.string "Would you like to use its help?$"

WoolooPushes_Text_MonUsedStrength:
	.string "WOOLOO called for {STR_VAR_1}!\p"
	.string "{STR_VAR_1}'s PROTECTION made it\n"
	.string "possible to move the herd around!$"

WoolooPushes_Text_StrengthActivated:
	.string "The dogs' protection make it possible to\n"
	.string "move the herd around.$"

WoolooPushes_Text_Completed:
	.string "{FONT_SMALL}Stage 4 completed.$"
