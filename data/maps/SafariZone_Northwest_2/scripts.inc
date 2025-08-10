SafariZone_Northwest_2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZone_Northwest_2_OnFrame
	.byte 0

SafariZone_Northwest_2_EventScript_Wooloo::
	lock
	faceplayer
	call ObstagoonChases_EventScript_WoolooSurprised
	createmon species=SPECIES_WOOLOO level=22, slot=0, side=1
	createmon species=SPECIES_DUBWOOL level=22, slot=1, side=1
	setwilddoubleflag
	dowildbattle
	special HealPlayerParty
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SafariZone_Northwest_2_EventScript_DefeatedWooloo
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SafariZone_EventScript_RanAwayFromWooloo
	release
	end

SafariZone_Northwest_2_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_WOOLOO, 6, SafariZone_North_2_EventScript_Completed
	.2byte 0

SafariZone_Northwest_2_EventScript_DefeatedWooloo:
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_DECORATION_2
	addvar VAR_SAFARI_ZONE_WOOLOO, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end
