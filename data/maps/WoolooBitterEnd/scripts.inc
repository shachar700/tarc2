WoolooBitterEnd_MapScripts::
	.byte 0

WoolooBitterEnd_EventScript_Caught::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MALE, FALSE
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
	setfieldeffectargument 0, VAR_RESULT
	msgbox WoolooBitterEnd_Text_WantToUseZigzagoon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, WoolooBitterEnd_EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto WoolooBitterEnd_EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
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
