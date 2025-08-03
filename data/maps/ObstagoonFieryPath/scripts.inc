ObstagoonFieryPath_MapScripts::
	.byte 0
	
ObstagoonFieryPath_EventScript_RockruffBoulder::
	lock
	bufferspeciesname STR_VAR_1, SPECIES_ROCKRUFF
	goto WoolooPushes_EventScript_DogBoulder
	end

ObstagoonFieryPath_EventScript_Caught::
	lock
	faceplayer
	waitse
	playse SE_PIN
	playmoncry SPECIES_OBSTAGOON, CRY_MODE_NORMAL
	msgbox ObstagoonRunaway_Text_Obstagoon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	addvar VAR_TWO_RESPAWN_COUNTER, 1
	warp MAP_OBSTAGOON_FIERY_PATH, 27, 32
	waitstate
	release
	end

ObstagoonFieryPath_EventScript_PickedPokeToy::
	lock
	playfanfare MUS_OBTAIN_ITEM
	message ObstagoonFieryPath_Text_PickedPokeToy
	waitfanfare
	setflag FLAG_TEMP_1
	removeobject 7
	call ObstagoonFieryPath_EventScript_LetTheDogsOut
	release
	end

ObstagoonFieryPath_EventScript_LetTheDogsOut::
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 3, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 5, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 12, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 13, MOVEMENT_TYPE_WANDER_AROUND
	return

ObstagoonFieryPath_EventScript_Wooloo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOLOO, CRY_MODE_NORMAL
	delay 40
	waitmoncry
	msgbox ObstagoonFieryPath_Text_Completed, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	togglegender
	warp MAP_ROUTE101, 9, 9
	waitstate
	release
	end

ObstagoonFieryPath_Text_PickedPokeToy:
	.string "Wooloo picked the up POKé TOY!\p"
	.string "All dogs became loose.$"

ObstagoonFieryPath_Text_Completed:
	.string "{FONT_SMALL}Stage 8 completed.$"
