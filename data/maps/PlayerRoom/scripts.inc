PlayerRoom_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PlayerRoomOnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerRoomOnFrame
	.byte 0

PlayerRoomOnWarp:
	map_script_2 VAR_TEMP_1, 0, PlayerRoom_RemovePlayer
	.2byte 0

PlayerRoom_RemovePlayer:
	hideobjectat LOCALID_PLAYER, MAP_PLAYER_ROOM
	setvar VAR_TEMP_1, 1
	end

PlayerRoomOnFrame:
	map_script_2 VAR_TEMP_0, 0, PlayerRoom_EventScript_StartScene
	.2byte 0

PlayerRoom_EventScript_StartScene::
	lockall
	msgbox PlayerRoom_Text_Dream, MSGBOX_DEFAULT
	togglegender
	special EnableNationalPokedex
	givemon species=SPECIES_WOOLOO, level=20
	givemon species=SPECIES_WOOLOO, level=20, isShiny=TRUE
	givemon species=SPECIES_ZIGZAGOON, level=20
	givemon species=SPECIES_WOOLOO, level=20
	closemessage
	special GameClear
	waitstate
	releaseall
	end

PlayerRoom_Text_Dream:
	.string "Huh? … … …\n"
	.string "Was it all a dream? … … …\p"
	.string "MOM! Your fable story got so vivid!\n"
	.string "I was living your fairy tale.\p"
	.string "I wonder if I can make my experience\n"
	.string "faster and flawless…$"
