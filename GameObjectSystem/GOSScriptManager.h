#ifndef __GAME_OBJECT_SYSTEM_SCRIPT_MANAGER_H__
#define __GAME_OBJECT_SYSTEM_SCRIPT_MANAGER_H__
#include "GOSInc.h"

extern "C"{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}


int tolua_OIS_open(lua_State* tolua_S);
namespace DAISY{



	class ScriptManager:public Singleton<ScriptManager>
	{
	public:
		ScriptManager();
		~ScriptManager();
		bool init();
		bool update();
		void shutdown();
		lua_State* getLuaVM();
		void appendlib(lua_State *L, const char* libname, const luaL_Reg *l);   
		static lua_State* L;
		

	};

}

#endif