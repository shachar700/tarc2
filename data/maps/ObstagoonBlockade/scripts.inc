ObstagoonBlockade_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ObstagoonBlockade_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, ObstagoonBlockade_OnResume
	map_script MAP_SCRIPT_ON_LOAD, ObstagoonBlockade_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, ObstagoonBlockade_OnTransition
	.byte 0

ObstagoonBlockade_OnFrame:
	map_script_2 VAR_ICE_STEP_COUNT, 0, ObstagoonBlockade_EventScript_FallThroughIce
	.2byte 0

ObstagoonBlockade_OnTransition:
	setvar VAR_ICE_STEP_COUNT, 1
	end

ObstagoonBlockade_OnResume:
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end

ObstagoonBlockade_OnLoad:
	special SetSootopolisGymCrackedIceMetatiles
	end

ObstagoonBlockade_EventScript_Caught::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MALE, FALSE
	playse SE_PIN
	waitse
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_NORMAL
	msgbox ObstagoonRunaway_Text_Obstagoon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	warp MAP_OBSTAGOON_BLOCKADE, 3, 3
	waitstate
	release
	end

ObstagoonBlockade_EventScript_FallThroughIce::
	lockall
	delay 20
	applymovement LOCALID_PLAYER, ObstagoonBlockade_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	addmoney 1
	warpsilent MAP_OBSTAGOON_BLOCKADE, 3, 3
	waitstate
	end

ObstagoonBlockade_EventScript_Wooloo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	msgbox ObstagoonBlockade_Text_Completed, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_BADGE06_GET
	togglegender
	warp MAP_WOOLOO_SNACK, 11, 5
	waitstate
	release
	end

ObstagoonBlockade_Movement_FallThroughIce:
	set_invisible
	step_end

ObstagoonBlockade_Text_Completed:
	.string "{FONT_SMALL}Stage 6 completed.$"
