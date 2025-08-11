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
	addmoney 1
	warp MAP_OBSTAGOON_FIERY_PATH, 27, 32
	waitstate
	release
	end

ObstagoonFieryPath_EventScript_PickedPokeToy::
	lock
	removeobject 7
	playfanfare MUS_OBTAIN_ITEM
	msgbox ObstagoonFieryPath_Text_PickedPokeToy, MSGBOX_DEFAULT
	waitfanfare
	waitmessage
	closemessage
	setflag FLAG_TEMP_1
	call ObstagoonFieryPath_EventScript_LetTheDogsOut
	release
	end

ObstagoonFieryPath_EventScript_LetTheDogsOut::
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
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
	warp MAP_SAFARI_ZONE_NORTH_2, 5, 38
	waitstate
	end

ObstagoonFieryPath_Text_PickedPokeToy:
	.string "Wooloo picked up the POKé TOY!\p"
	.string "It made Hisui Growlithe excited.$"

ObstagoonFieryPath_Text_Completed:
	.string "{FONT_SMALL}Stage 8 completed.$"
