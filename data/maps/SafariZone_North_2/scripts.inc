SafariZone_North_2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZone_North_2_OnFrame
	.byte 0

SafariZone_North_2_EventScript_Wooloo::
	lock
	faceplayer
	call ObstagoonChases_EventScript_WoolooSurprised
	createmon species=SPECIES_WOOLOO level=22, slot=0, side=1
	createmon species=SPECIES_DUBWOOL level=22, slot=1, side=1
	setwilddoubleflag
	dowildbattle
	special HealPlayerParty
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SafariZone_North_2_EventScript_DefeatedWooloo
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SafariZone_EventScript_RanAwayFromWooloo
	release
	end

SafariZone_North_2_OnFrame:
	map_script_2 VAR_TEMP_0, 0, SafariZone_North_2_EventScript_Start
	map_script_2 VAR_SAFARI_ZONE_WOOLOO, 6, SafariZone_North_2_EventScript_Completed
	.2byte 0

SafariZone_North_2_EventScript_DefeatedWooloo:
	playmoncry SPECIES_WOOLOO, CRY_MODE_FAINT
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_DECORATION_1
	addvar VAR_SAFARI_ZONE_WOOLOO, 1
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

SafariZone_EventScript_RanAwayFromWooloo::
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_0x8004, SPECIES_WOOLOO
	goto Common_EventScript_LegendaryFlewAway
	end

SafariZone_North_2_EventScript_Completed::
	lock
	buffernumberstring STR_VAR_1, VAR_OBSTAGOON_STEPS_COUNTER
	msgbox SafariZone_North_2_Text_Completed, MSGBOX_AUTOCLOSE
	clearflag FLAG_SYS_B_DASH
	clearflag FLAG_SYS_POKEMON_GET
	togglegender
	warp MAP_OBSTAGOON_TEMPLE, 1, 48
	waitstate
	release
	end

SafariZone_North_2_EventScript_Start::
	goto_if_ne VAR_OBSTAGOON_STEPS_COUNTER, 0, SafariZone_North_2_EventScript_End
	setvar VAR_TEMP_0, 1
	lock
	msgbox SafariZone_North_2_Text_Start, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZone_North_2_EventScript_End::
	setvar VAR_TEMP_0, 1
	end

SafariZone_North_2_EventScript_StepsCounter::
	lock
	buffernumberstring STR_VAR_1, VAR_OBSTAGOON_STEPS_COUNTER
	msgbox SafariZone_North_2_Text_StepsCounter, MSGBOX_SIGN
	end

EventScript_WarpBackToSafariZone::
	lock
	msgbox SafariZone_North_2_Text_WarpBack, MSGBOX_DEFAULT
	waitmessage
	closemessage
	addmoney 1
	warp MAP_SAFARI_ZONE_NORTH_2, 5, 38
	waitstate
	release
	end

SafariZone_North_2_Text_Start:
	.string "Stage 9: Defeat all Wooloo in fewer\n"
	.string "than 700 steps.$"

SafariZone_North_2_Text_WarpBack:
	.string "Stage 9 failed.\n"
	.string "Reached 700 steps.$"

SafariZone_North_2_Text_StepsCounter:
	.string "Steps: {STR_VAR_1}/700$"

SafariZone_North_2_Text_Completed:
	.string "{FONT_SMALL}Stage 9 completed.\n"
	.string "Steps: {STR_VAR_1}/700$"
