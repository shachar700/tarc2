ObstagoonRunaway_MapScripts::
	.byte 0

ObstagoonRunaway_EventScript_Caught::
	lock
	faceplayer
	waitse
	playse SE_PIN
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_NORMAL
	msgbox ObstagoonRunaway_Text_Obstagoon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	addmoney 1
	warp MAP_OBSTAGOON_RUNAWAY, 0, 61
	waitstate
	release
	end

ObstagoonRunaway_EventScript_Wooloo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	msgbox ObstagoonRunaway_Text_Completed, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_BADGE02_GET
	togglegender
	warp MAP_OBSTAGOON_CHASES, 14, 12
	waitstate
	release
	end

ObstagoonRunaway_Text_Obstagoon:
	.string "OBSTAGOON: Dinner!$"

ObstagoonRunaway_Text_Completed:
	.string "{FONT_SMALL}Stage 2 completed.$"
