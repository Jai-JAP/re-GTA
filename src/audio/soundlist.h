#pragma once

enum eSound
{
	SOUND_CAR_DOOR_CLOSE_BONNET = 0,
	SOUND_CAR_DOOR_CLOSE_BUMPER,
	SOUND_CAR_DOOR_CLOSE_FRONT_LEFT,
	SOUND_CAR_DOOR_CLOSE_FRONT_RIGHT,
	SOUND_CAR_DOOR_CLOSE_BACK_LEFT,
	SOUND_CAR_DOOR_CLOSE_BACK_RIGHT,
	SOUND_CAR_DOOR_OPEN_BONNET,
	SOUND_CAR_DOOR_OPEN_BUMPER,
	SOUND_CAR_DOOR_OPEN_FRONT_LEFT,
	SOUND_CAR_DOOR_OPEN_FRONT_RIGHT,
	SOUND_CAR_DOOR_OPEN_BACK_LEFT,
	SOUND_CAR_DOOR_OPEN_BACK_RIGHT,
	SOUND_CAR_WINDSHIELD_CRACK,
	SOUND_CAR_JUMP,
	SOUND_E,
	SOUND_F,
	SOUND_CAR_ENGINE_START,
	SOUND_CAR_LIGHT_BREAK,
	SOUND_CAR_HYDRAULIC_1,
	SOUND_CAR_HYDRAULIC_2,
	SOUND_CAR_HYDRAULIC_3,
	SOUND_CAR_JERK,
	SOUND_CAR_SPLASH,
	SOUND_BOAT_SLOWDOWN,
	SOUND_TRAIN_DOOR_CLOSE,
	SOUND_TRAIN_DOOR_OPEN,
	SOUND_CAR_TANK_TURRET_ROTATE,
	SOUND_CAR_BOMB_TICK,
	SOUND_PLANE_ON_GROUND,
	SOUND_STEP_START,
	SOUND_STEP_END,
	SOUND_FALL_LAND,
	SOUND_FALL_COLLAPSE,
	SOUND_FIGHT_PUNCH_33,
	SOUND_FIGHT_KICK_34,
	SOUND_FIGHT_HEADBUTT_35,
	SOUND_FIGHT_PUNCH_36,
	SOUND_FIGHT_PUNCH_37,
	SOUND_FIGHT_CLOSE_PUNCH_38,
	SOUND_FIGHT_PUNCH_39,
	SOUND_FIGHT_PUNCH_OR_KICK_BELOW_40,
	SOUND_FIGHT_PUNCH_41,
	SOUND_FIGHT_PUNCH_FROM_BEHIND_42,
	SOUND_FIGHT_KNEE_OR_KICK_43,
	SOUND_FIGHT_KICK_44,
	SOUND_2D,
	SOUND_WEAPON_BAT_ATTACK,
	SOUND_WEAPON_SHOT_FIRED,
	SOUND_WEAPON_RELOAD,
	SOUND_WEAPON_AK47_BULLET_ECHO,
	SOUND_WEAPON_UZI_BULLET_ECHO,
	SOUND_WEAPON_M16_BULLET_ECHO,
	SOUND_WEAPON_FLAMETHROWER_FIRE,
	SOUND_WEAPON_SNIPER_SHOT_NO_ZOOM,
	SOUND_WEAPON_ROCKET_SHOT_NO_ZOOM,
	SOUND_WEAPON_HIT_PED,
	SOUND_WEAPON_HIT_VEHICLE,
	SOUND_GARAGE_NO_MONEY,
	SOUND_GARAGE_BAD_VEHICLE,
	SOUND_GARAGE_OPENING,
	SOUND_GARAGE_BOMB_ALREADY_SET,
	SOUND_GARAGE_BOMB1_SET,
	SOUND_GARAGE_BOMB2_SET,
	SOUND_GARAGE_BOMB3_SET,
	SOUND_40,
	SOUND_41,
	SOUND_GARAGE_VEHICLE_DECLINED,
	SOUND_GARAGE_VEHICLE_ACCEPTED,
	SOUND_GARAGE_DOOR_CLOSED,
	SOUND_GARAGE_DOOR_OPENED,
	SOUND_CRANE_PICKUP,
	SOUND_PICKUP_WEAPON_BOUGHT,
	SOUND_PICKUP_WEAPON,
	SOUND_PICKUP_HEALTH,
	SOUND_PICKUP_ERROR,
	SOUND_4B,
	SOUND_PICKUP_ADRENALINE,
	SOUND_PICKUP_ARMOUR,
	SOUND_PICKUP_BONUS,
	SOUND_PICKUP_MONEY,
	SOUND_PICKUP_HIDDEN_PACKAGE,
	SOUND_PICKUP_PACMAN_PILL,
	SOUND_PICKUP_PACMAN_PACKAGE,
	SOUND_PICKUP_FLOAT_PACKAGE,
	SOUND_BOMB_TIMED_ACTIVATED,
	SOUND_55,
	SOUND_BOMB_ONIGNITION_ACTIVATED,
	SOUND_BOMB_TICK,
	SOUND_RAMPAGE_START,
	SOUND_RAMPAGE_ONGOING,
	SOUND_RAMPAGE_PASSED,
	SOUND_RAMPAGE_FAILED,
	SOUND_RAMPAGE_KILL,
	SOUND_RAMPAGE_CAR_BLOWN,
	SOUND_EVIDENCE_PICKUP,
	SOUND_UNLOAD_GOLD,
	SOUND_PAGER,
	SOUND_PED_DEATH,
	SOUND_PED_DAMAGE,
	SOUND_PED_HIT,
	SOUND_PED_LAND,
	SOUND_PED_BULLET_HIT,
	SOUND_PED_BOMBER,
	SOUND_PED_BURNING,
	SOUND_PED_ARREST_FBI,
	SOUND_PED_ARREST_SWAT,
	SOUND_PED_ARREST_COP,
	SOUND_PED_HELI_PLAYER_FOUND,
	SOUND_PED_HANDS_UP,
	SOUND_PED_HANDS_COWER,
	SOUND_PED_FLEE_SPRINT,
	SOUND_PED_CAR_JACKING,
	SOUND_PED_MUGGING,
	SOUND_PED_CAR_JACKED,
	SOUND_PED_ROBBED,
	SOUND_PED_TAXI_WAIT,
	SOUND_PED_ATTACK,
	SOUND_PED_DEFEND,
	SOUND_PED_PURSUIT_ARMY,
	SOUND_PED_PURSUIT_FBI,
	SOUND_PED_PURSUIT_SWAT,
	SOUND_PED_PURSUIT_COP,
	SOUND_PED_HEALING,
	SOUND_PED_7B,
	SOUND_PED_LEAVE_VEHICLE,
	SOUND_PED_EVADE,
	SOUND_PED_FLEE_RUN,
	SOUND_PED_ANNOYED_DRIVER,
	SOUND_PED_SOLICIT,
	SOUND_PED_EXTINGUISHING_FIRE,
	SOUND_PED_WAIT_DOUBLEBACK,
	SOUND_PED_CHAT_SEXY,
	SOUND_PED_CHAT_EVENT,
	SOUND_PED_CHAT,
	SOUND_PED_BODYCAST_HIT,
	SOUND_PED_TAXI_CALL,
	SOUND_INJURED_PED_MALE_OUCH,
	SOUND_INJURED_PED_FEMALE,
	SOUND_INJURED_PED_MALE_PRISON,
	SOUND_RACE_START_3,
	SOUND_RACE_START_2,
	SOUND_RACE_START_1,
	SOUND_RACE_START_GO,
	SOUND_SPLASH,
	SOUND_WATER_FALL,
	SOUND_SPLATTER,
	SOUND_CAR_PED_COLLISION,
	SOUND_CLOCK_TICK,
	SOUND_PART_MISSION_COMPLETE,
	SOUND_FRONTEND_MENU_STARTING,
	SOUND_FRONTEND_MENU_NEW_PAGE,
	SOUND_FRONTEND_MENU_NAVIGATION,
	SOUND_FRONTEND_MENU_SETTING_CHANGE,
	SOUND_FRONTEND_MENU_BACK,
	SOUND_FRONTEND_STEREO,
	SOUND_FRONTEND_MONO,
	SOUND_FRONTEND_AUDIO_TEST,
	SOUND_FRONTEND_FAIL,
	SOUND_FRONTEND_RADIO_TURN_OFF,
	SOUND_FRONTEND_RADIO_CHANGE,
	SOUND_HUD,
	SOUND_AMMUNATION_WELCOME_1,
	SOUND_AMMUNATION_WELCOME_2,
	SOUND_AMMUNATION_WELCOME_3,
	SOUND_LIGHTNING,
	SOUND_A5,
	SOUND_TOTAL_SOUNDS,
	SOUND_NO_SOUND,
};


enum eScriptSounds {
	SCRIPT_SOUND_0 = 0,
	SCRIPT_SOUND_1,
	SCRIPT_SOUND_2,
	SCRIPT_SOUND_3,
	SCRIPT_SOUND_PARTY_1_LOOP_S,
	SCRIPT_SOUND_PARTY_1_LOOP_L,
	SCRIPT_SOUND_PARTY_2_LOOP_S,
	SCRIPT_SOUND_PARTY_2_LOOP_L,
	SCRIPT_SOUND_PARTY_3_LOOP_S,
	SCRIPT_SOUND_PARTY_3_LOOP_L,
	SCRIPT_SOUND_PARTY_4_LOOP_S,
	SCRIPT_SOUND_PARTY_4_LOOP_L,
	SCRIPT_SOUND_PARTY_5_LOOP_S,
	SCRIPT_SOUND_PARTY_5_LOOP_L,
	SCRIPT_SOUND_PARTY_6_LOOP_S,
	SCRIPT_SOUND_PARTY_6_LOOP_L,
	SCRIPT_SOUND_PARTY_7_LOOP_S,
	SCRIPT_SOUND_PARTY_7_LOOP_L,
	SCRIPT_SOUND_PARTY_8_LOOP_S,
	SCRIPT_SOUND_PARTY_8_LOOP_L,
	SCRIPT_SOUND_PARTY_9_LOOP_S,
	SCRIPT_SOUND_PARTY_9_LOOP_L,
	SCRIPT_SOUND_PARTY_10_LOOP_S,
	SCRIPT_SOUND_PARTY_10_LOOP_L,
	SCRIPT_SOUND_PARTY_11_LOOP_S,
	SCRIPT_SOUND_PARTY_11_LOOP_L,
	SCRIPT_SOUND_PARTY_12_LOOP_S,
	SCRIPT_SOUND_PARTY_12_LOOP_L,
	SCRIPT_SOUND_PARTY_13_LOOP_S,
	SCRIPT_SOUND_PARTY_13_LOOP_L,
	SCRIPT_SOUND_STRIP_CLUB_LOOP_1_S,
	SCRIPT_SOUND_STRIP_CLUB_LOOP_1_L,
	SCRIPT_SOUND_STRIP_CLUB_LOOP_2_S,
	SCRIPT_SOUND_STRIP_CLUB_LOOP_2_L,
	SCRIPT_SOUND_WORK_SHOP_LOOP_S,
	SCRIPT_SOUND_WORK_SHOP_LOOP_L,
	SCRIPT_SOUND_SAWMILL_LOOP_S,
	SCRIPT_SOUND_SAWMILL_LOOP_L,
	SCRIPT_SOUND_DOG_FOOD_FACTORY_S,
	SCRIPT_SOUND_DOG_FOOD_FACTORY_L,
	SCRIPT_SOUND_LAUNDERETTE_LOOP_S,
	SCRIPT_SOUND_LAUNDERETTE_LOOP_L,
	SCRIPT_SOUND_CHINATOWN_RESTAURANT_S,
	SCRIPT_SOUND_CHINATOWN_RESTAURANT_L,
	SCRIPT_SOUND_CIPRIANI_RESAURANT_S,
	SCRIPT_SOUND_CIPRIANI_RESAURANT_L,
	SCRIPT_SOUND_46_S,
	SCRIPT_SOUND_47_L,
	SCRIPT_SOUND_MARCO_BISTRO_S,
	SCRIPT_SOUND_MARCO_BISTRO_L,
	SCRIPT_SOUND_AIRPORT_LOOP_S,
	SCRIPT_SOUND_AIRPORT_LOOP_L,
	SCRIPT_SOUND_SHOP_LOOP_S,
	SCRIPT_SOUND_SHOP_LOOP_L,
	SCRIPT_SOUND_CINEMA_LOOP_S,
	SCRIPT_SOUND_CINEMA_LOOP_L,
	SCRIPT_SOUND_DOCKS_LOOP_S,
	SCRIPT_SOUND_DOCKS_LOOP_L,
	SCRIPT_SOUND_HOME_LOOP_S,
	SCRIPT_SOUND_HOME_LOOP_L,
	SCRIPT_SOUND_FRANKIE_PIANO,
	SCRIPT_SOUND_PARTY_1_LOOP,
	SCRIPT_SOUND_PORN_CINEMA_1_S,
	SCRIPT_SOUND_PORN_CINEMA_1_L,
	SCRIPT_SOUND_PORN_CINEMA_2_S,
	SCRIPT_SOUND_PORN_CINEMA_2_L,
	SCRIPT_SOUND_PORN_CINEMA_3_S,
	SCRIPT_SOUND_PORN_CINEMA_3_L,
	SCRIPT_SOUND_BANK_ALARM_LOOP_S,
	SCRIPT_SOUND_BANK_ALARM_LOOP_L,
	SCRIPT_SOUND_POLICE_BALL_LOOP_S,
	SCRIPT_SOUND_POLICE_BALL_LOOP_L,
	SCRIPT_SOUND_RAVE_LOOP_INDUSTRIAL_S,
	SCRIPT_SOUND_RAVE_LOOP_INDUSTRIAL_L,
	SCRIPT_SOUND_74,
	SCRIPT_SOUND_75,
	SCRIPT_SOUND_POLICE_CELL_BEATING_LOOP_S,
	SCRIPT_SOUND_POLICE_CELL_BEATING_LOOP_L,
	SCRIPT_SOUND_INJURED_PED_MALE_OUCH_S,
	SCRIPT_SOUND_INJURED_PED_MALE_OUCH_L,
	SCRIPT_SOUND_INJURED_PED_FEMALE_OUCH_S,
	SCRIPT_SOUND_INJURED_PED_FEMALE_OUCH_L,
	SCRIPT_SOUND_EVIDENCE_PICKUP,
	SCRIPT_SOUND_UNLOAD_GOLD,
	SCRIPT_SOUND_RAVE_1_LOOP_S,
	SCRIPT_SOUND_RAVE_1_LOOP_L,
	SCRIPT_SOUND_RAVE_2_LOOP_S,
	SCRIPT_SOUND_RAVE_2_LOOP_L,
	SCRIPT_SOUND_RAVE_3_LOOP_S,
	SCRIPT_SOUND_RAVE_3_LOOP_L,
	SCRIPT_SOUND_MISTY_SEX_S,
	SCRIPT_SOUND_MISTY_SEX_L,
	SCRIPT_SOUND_GATE_START_CLUNK,
	SCRIPT_SOUND_GATE_STOP_CLUNK,
	SCRIPT_SOUND_PART_MISSION_COMPLETE,
	SCRIPT_SOUND_CHUNKY_RUN_SHOUT,
	SCRIPT_SOUND_SECURITY_GUARD_AWAY_SHOUT,
	SCRIPT_SOUND_RACE_START_3,
	SCRIPT_SOUND_RACE_START_2,
	SCRIPT_SOUND_RACE_START_1,
	SCRIPT_SOUND_RACE_START_GO,
	SCRIPT_SOUND_SWAT_PED_SHOUT,
	SCRIPT_SOUND_PRETEND_FIRE_LOOP,
	SCRIPT_SOUND_AMMUNATION_CHAT_1,
	SCRIPT_SOUND_AMMUNATION_CHAT_2,
	SCRIPT_SOUND_AMMUNATION_CHAT_3,
	SCRIPT_SOUND_BULLET_HIT_GROUND_1,
	SCRIPT_SOUND_BULLET_HIT_GROUND_2,
	SCRIPT_SOUND_BULLET_HIT_GROUND_3,
	SCRIPT_SOUND_BULLET_HIT_WATER, // no sound
	SCRIPT_SOUND_TRAIN_ANNOUNCEMENT_1,
	SCRIPT_SOUND_TRAIN_ANNOUNCEMENT_2,
	SCRIPT_SOUND_PAYPHONE_RINGING,
	SCRIPT_SOUND_113,
	SCRIPT_SOUND_GLASS_BREAK_L,
	SCRIPT_SOUND_GLASS_BREAK_S,
	SCRIPT_SOUND_GLASS_CRACK,
	SCRIPT_SOUND_GLASS_LIGHT_BREAK,
	SCRIPT_SOUND_BOX_DESTROYED_1,
	SCRIPT_SOUND_BOX_DESTROYED_2,
	SCRIPT_SOUND_METAL_COLLISION,
	SCRIPT_SOUND_TIRE_COLLISION,
	SCRIPT_SOUND_GUNSHELL_DROP,
	SCRIPT_SOUND_GUNSHELL_DROP_SOFT,
	SCRIPT_SOUND_TOTAL,
	SCRIPT_SOUND_INVALID,
};
