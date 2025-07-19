ObstagoonRunaway_MapScripts::
	.byte 0

ObstagoonRunaway_EventScript_Caught::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_NORMAL
	msgbox ObstagoonRunaway_Text_Obstagoon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	warp MAP_OBSTAGOON_RUNAWAY, 0, 12
	waitstate
	release
	end

ObstagoonRunaway_Text_Obstagoon:
	.string "OBSTAGOON: Dinner!$"
