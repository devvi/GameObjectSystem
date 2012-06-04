-- Function: Define constant types
-- Author  : Devvi
-- Data    : 2012.05.16

--- fixed update rate
FIXED_UPDATE_RATE = 0.0167 --1/60
TERRAIN_SIZE = 5000

-- collission id
COL_PLAYER 		= 1
COL_BULLET 		= 2
COL_LETTER 	    = 3
COL_TERRAIN		= 5000; 

-- internal gc types
INVALID			= 1
OGRENODE		= 2
PHYBODY			= 3
EVENTRECIEVER   = 4
RENDER_CAM      = 5
RENDER_ENTITY   = 6
USER			= 7

-- user gc types
USER_GC_INTERNAL = 100
PLAYER 			 = USER_GC_INTERNAL + 1
CAM_MAIN         = USER_GC_INTERNAL + 2
SHOOT_GUN        = USER_GC_INTERNAL + 3
BULLET			 = USER_GC_INTERNAL + 4
EVENT_RECEIVER   = USER_GC_INTERNAL + 5