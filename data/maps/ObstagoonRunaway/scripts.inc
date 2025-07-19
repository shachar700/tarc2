ObstagoonRunaway_MapScripts::
	.byte 0

ObstagoonRunaway_EventScript_Caught::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MALE, FALSE
	waitse
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_NORMAL
	msgbox ObstagoonRunaway_Text_Obstagoon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	warp MAP_OBSTAGOON_RUNAWAY, 0, 61
	waitstate
	release
	end

ObstagoonRunaway_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	msgbox ObstagoonRunaway_Text_Completed, MSGBOX_DEFAULT
	closemessage
	warp MAP_WOOLOO_BITTER_END, 2, 7
	waitstate
	release
	end

ObstagoonRunaway_Text_Obstagoon:
	.string "OBSTAGOON: Dinner!$"

ObstagoonRunaway_Text_Completed:
	.string "Stage 2 completed.$"
