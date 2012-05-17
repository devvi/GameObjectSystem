#include "GOSScriptManager.h"
#include "GameObjectSystem.h"
#include <iostream>
#include "tolua++.h"
using namespace  DAISY;

ScriptManager::ScriptManager(){}
ScriptManager::~ScriptManager(){}


bool ScriptManager::init()
{
	L =  lua_open();
	luaL_openlibs(L);
	tolua_OIS_open(L);
	tolua_Ogre_open(L);
	
	// open manually lib
	openManuallyLib();

	GameComponentManager* gcm = GameComponentManager::getInstancePtr();
	GameObjectManager* gom = GameObjectManager::getInstancePtr();

	tolua_pushusertype(L, gcm, "GameComponentManager");

	lua_setglobal(L,"gameComponentManager");

	tolua_pushusertype(L, gom, "GameObjectManager");

	lua_setglobal(L,"gameObjectManager");

	if(luaL_dofile(L, "script/first.lua"))
	{
		TRACE(lua_tostring(L, -1));
	}
	return true;
	
}

bool ScriptManager::update()
{

#if SCRIPT_DEBUG
	{
		lua_gc(L, LUA_GCCOLLECT, 0);
	}
#else
	{
		//PROFILE_BEGIN("Lua GC");
		double start_time = timeGetTime(); // get the ms count for current system time
		double end_time = start_time + 0.2; // 0.2ms
		do
		{
			lua_gc(L, LUA_GCSTEP, 10);
		} while(timeGetTime() < end_time);
	}
#endif

	int lua_used_memory = lua_gc(L, LUA_GCCOUNT, 0);
	return true;
}

void ScriptManager::shutdown()
{
	lua_close(L);
}

lua_State* ScriptManager::getLuaVM()
{
	return L;
}

static int al_toShowLua(lua_State *L)
{

	char buf[256];
	const char* enter = "\n";
	const char* bufR = lua_tostring(L, -1);
	memset(buf, '0', sizeof(buf));
	strcpy(buf, bufR);
	//sprintf(buf, "%.2f\n", vec.x, vec.y);

	OutputDebugString(buf);
	OutputDebugString(enter);

	return 0;
}
static const struct luaL_Reg mylib[] = 
{
	{"al_toShowLua", al_toShowLua},

	{NULL, NULL}
};

void appendlib(lua_State *L, const char* libname, const luaL_Reg *l)
{
	if (libname) {

		/* check whether lib already exists */
		lua_getglobal(L, libname);									/* STACK: table? */
		if ( !lua_istable(L, -1) )
		{
			lua_pop(L, 1);  /* remove previous result */			/* STACK: */
			/* create global variable(does not care whether it exists or not) */
			lua_newtable(L);										/* STACK: table */
			lua_pushvalue(L, -1);									/* STACK: table table */
			/* GLOBAL[libname] = new table */
			lua_setfield(L, LUA_GLOBALSINDEX, libname);  			/* STACK: table */
		}
	}
	else {
		lua_pushvalue(L, LUA_GLOBALSINDEX);							/* STACK: table(g) */
	}

	/* set the function to table */
	for (; l->name; l++) {
		lua_pushcfunction(L, l->func);								/* STACK: table cfunc*/
		lua_setfield(L, -2, l->name);								/* STACK: table */
	}

	lua_pop(L, 1);
}

static void object_remove_vtable(lua_State*L, void* object)
{
	lua_pushstring(L, DAISY_GOS_VTBL);		// stack: ... "diasy_gos_vtbl"
	lua_rawget(L,LUA_REGISTRYINDEX);			// stack: ... tbl?
	if (!lua_isnil(L, -1)) 						// stack: ... tbl
	{
		/* set object vtbl to nil, to let GC to collect the entry */
		lua_pushlightuserdata(L, object);		// stack: ... tbl, obj
		lua_pushnil(L);							// stack: ... tbl, obj, nil
		lua_rawset(L, -3);						// stack: ... tbl
	}
	lua_pop(L, 1);								// stack: ... 
}

int daisy_object_remove_vtable(lua_State *L)
{
	if (lua_isuserdata(L, 1))						// stack: obj,
	{
		void *object = tolua_tousertype(L, 1, 0);
		object_remove_vtable(L, object);			// stack: obj
	}
	lua_pop(L, 1);									// stack:
	return 0;
}
void push_object_vtable(lua_State *L, void* object)
{
	int top;

	lua_pushstring(L, DAISY_GOS_VTBL);		// stack: ... "daisy_gos_vtbl"
	lua_rawget(L,LUA_REGISTRYINDEX);			// stack: ... table?
	if (lua_isnil(L, -1)) 						// stack: ... nil
	{
		lua_pop(L, 1);							// stack: ... 
		lua_pushstring(L, DAISY_GOS_VTBL);			// stack: ... "daisy_gos_vtbl"
		/* create the table and push into registry */

		lua_newtable(L);						// stack: ... "daisy_gos_vtbl", tbl
		lua_pushlightuserdata(L, object);		// stack: ... "daisy_gos_vtbl", tbl, obj
		lua_newtable(L);						// stack: ... "daisy_gos_vtbl", tbl, obj, vtbl
		/* set v-table for this object */
		lua_rawset(L, -3);						// stack: ... "daisy_gos_vtbl", tbl

		/* NOTE: no need to set weak for key, because lightuserdata(key) is never collected. */
		/* set tbl to registry*/
		lua_rawset(L, LUA_REGISTRYINDEX);		// stack: ... 

		lua_pushstring(L, DAISY_GOS_VTBL);	// stack: ... "daisy_gos_vtbl"
		lua_rawget(L,LUA_REGISTRYINDEX);		// stack: ... tbl <- should be there!
		lua_pushlightuserdata(L, object);		// stack: ... tbl, obj
		lua_rawget(L, -2);						// stack: ... tbl, vtbl
		top = lua_gettop(L);
		lua_remove(L, top-1);					// stack: ... vtbl
	}
	else
	{
		/* see if has this object's entry */
		lua_pushlightuserdata(L, object);		// stack: ... tbl, obj
		lua_rawget(L, -2);						// stack: ... tbl, vtbl?
		if ( lua_isnil(L, -1))
		{
			lua_pop(L, 1);						// stack: ... tbl
			lua_pushlightuserdata(L, object);	// stack: ... tbl, obj
			lua_newtable(L);					// stack: ... tbl, obj, vtbl
			/* set v-table for this object */
			lua_rawset(L, -3);					// stack: ... tbl

			lua_pushlightuserdata(L, object);	// stack: ... tbl, obj
			lua_rawget(L, -2);					// stack: ... tbl, vtbl
			top = lua_gettop(L);
			lua_remove(L, top-1);				// stack: ... vtbl
		}
		else 
		{
			top = lua_gettop(L);				// stack: ... tbl, vtbl
			lua_remove(L, top-1);				// stack: ... vtbl
		}
	}
}

int daisy_debug_traceback(lua_State *L)
{
	/* copied implementation from lua standard library debug.traceback() */
	lua_Debug ar;
	int level = 0;

	char str[2048] = {0};

	while(lua_getstack(L, level, &ar))
	{
		char buf[1024] = {0};

		lua_getinfo(L, "Snl", &ar);
		sprintf(buf, "%s:", ar.short_src);
		strcat(str, buf);
		if (ar.currentline > 0)
		{
			sprintf(buf, "%d:", ar.currentline);
			strcat(str, buf);
		}
		if (*ar.namewhat != '\0')  /* is there a name? */
		{
			sprintf(buf, " in function %s", ar.name);
			strcat(str, buf);
		}
		else 
		{
			if (*ar.what == 'm')  /* main? */
				sprintf(buf, " in main chunk ");
			else if (*ar.what == 'C' || *ar.what == 't')
				sprintf(buf, " ?"); /* C function or tail call */
			else
				sprintf(buf, " in function <%s:%d>", 
				ar.short_src, ar.linedefined);
			strcat(str, buf);
		}

		sprintf(buf, "\n");
		strcat(str, buf);
		level++;
	}

	TRACE(str);
	return 1;
}
bool try_push_object_vtable(lua_State *L, void* object)
{
	int top;
	lua_pushstring(L, DAISY_GOS_VTBL);		// stack: ... "daisy_gos"
	lua_rawget(L,LUA_REGISTRYINDEX);			// stack: ... table?
	if (lua_isnil(L, -1)) 						// stack: ... nil
	{
		lua_pop(L, 1);							// stack: ... 
		lua_pushstring(L, DAISY_GOS_VTBL);			// stack: ... "daisy_gos"
		/* create the table and push into registry */

		lua_newtable(L);						// stack: ... "daisy_gos", tbl
		lua_pushvalue(L, -1);					// stack: ... "daisy_gos", tbl, tbl
		top = lua_gettop(L);
		lua_insert(L, top-2);					// stack: ... tbl, "daisy_gos", tbl
		lua_rawset(L, LUA_REGISTRYINDEX);		// stack: ... tbl
	}

	/* see if has this object's entry */
	lua_pushlightuserdata(L, object);		// stack: ... tbl, obj
	lua_rawget(L, -2);						// stack: ... tbl, vtbl?
	if ( lua_isnil(L, -1))
	{
		lua_pop(L, 2);						// stack: ... 
		lua_pushnil(L);						// stack: ... nil
		return false;
	}
	else 
	{
		top = lua_gettop(L);				// stack: ... tbl, vtbl
		lua_remove(L, top-1);				// stack: ... vtbl
		return true;
	}
}

void object_retain(lua_State *L, void *object, const char* object_typename)
{
	BEGIN_CHECK_STACK();
	if ( !L )
		return;

	lua_pushstring(L, DAISY_OLM);				// stack: "DAISY_OLM"
	lua_rawget(L, LUA_REGISTRYINDEX);			// stack: regtbl?
	if ( lua_isnil(L, -1) )						// stack: nil
	{
		int top;
		lua_pop(L, 1);							// stack: 
		lua_pushstring(L, DAISY_OLM);			// stack: "DAISY_OLM"
		lua_newtable(L);						// stack: "DAISY_OLM", regtbl
		lua_pushvalue(L, -1);					// stack: "DAISY_OLM", regtbl, regtbl
		top = lua_gettop(L);
		lua_insert(L, top - 2);					// stack: regtbl, "DAISY_OLM", regtbl
		lua_rawset(L, LUA_REGISTRYINDEX);		// stack: regtbl
	}

	lua_pushlightuserdata(L, object);			// stack: regtbl, obj
	tolua_pushusertype(L, object, object_typename);		// stack: regtbl, obj, boxed_obj
	lua_rawset(L, -3);							// stack: regtbl

	lua_pop(L, 1);								// stack:

	END_CHECK_STACK();
}

void object_release(lua_State *L, void *object)
{
	BEGIN_CHECK_STACK();

	if ( !L )
		return;

	/* clear the vtable entry if any */
	object_remove_vtable(L, object);

	lua_pushstring(L, DAISY_OLM);				// stack: "DAISY_OLM"
	lua_rawget(L, LUA_REGISTRYINDEX);			// stack: regtbl?
	if ( !lua_isnil(L, -1) )					// stack: regtbl
	{
		lua_pushlightuserdata(L, object);		// stack: regtbl, obj
		lua_pushnil(L);							// stack: regtbl, obj, nil
		lua_rawset(L, -3);						// stack: regtbl
	}

	lua_pop(L, 1);								// stack:

	END_CHECK_STACK();
}

void daisy_object_call_lua(lua_State *L, void* object,
	const char* function_name, int arg_count, ...)
{
	int i;
	va_list args;
	int errfunc_index;
	BEGIN_CHECK_STACK()
	lua_pushcfunction(L, daisy_debug_traceback);
	errfunc_index = lua_gettop(L);

	/* see if it has Lua callback */
	if (try_push_object_vtable(L, object))
	{
		//    push_object_vtable(L, object);			// stack: vtbl
		lua_pushstring(L, function_name);		// stack: vtbl, $function_name
		lua_rawget(L, -2);						// stack: vtbl, function?
		if ( lua_isfunction(L, -1) )			// stack: vtbl, function
		{
			int result;
			int top;
			lua_pushstring(L, DAISY_OLM);	// stack: vtbl, function, daisy_olm
			lua_rawget(L,LUA_REGISTRYINDEX);    // stack: vtbl, function, olm
			lua_pushlightuserdata(L, object);	// stack: vtbl, function, olm, u
			

			lua_rawget(L, -2);					// stack: vtbl, function, olm, olm[u](object)
			if(lua_isnil(L,-1))
			{
				TRACE("TOP OF STACK IS NIL");   // debug use
			}
			top = lua_gettop(L);
			lua_remove(L, top-1);				// stack: vtbl, function, object




			va_start(args, arg_count);
			for( i = 0; i < arg_count; i += 2 )
			{
				void* user_type = va_arg(args, void*);
				const char* user_type_name = va_arg(args, const char*);
				tolua_pushusertype(L, user_type, user_type_name);
			}
			va_end(args);
			top = lua_gettop(L);
			{
				
				result = lua_pcall(L, 1 + (arg_count/2), 0, errfunc_index);	// stack: vtbl
				
			}

			if ( result )
			{ 
				TRACE(lua_tostring(L, -1));
				al_debugger_break();
				
				lua_pop(L, 1);					// stack: vtbl
			}
			lua_pop(L, 2);						// stack:
		}
		else 
		{
			/* function not found, passed silently */
			lua_pop(L, 3);						// stack:
		}
	}
	else 
	{
		// stack: errfunc, nil
		lua_pop(L, 2);							// stack:
	}
	END_CHECK_STACK()
}
int daisy_object_set_lua_function(lua_State *L)
{
	if ( lua_isuserdata(L, 1) && lua_isstring(L, 2) && (lua_isfunction(L, 3) || lua_isnil(L, 3)) )	// stack: comp, $function_name, cb
	{
		int top;
		const char* function_name;
		bool setflag = lua_isfunction(L, 3);
		/* HACK: use tolua API to retrieve object */
		void *object = tolua_tousertype(L, 1, 0);
		function_name = lua_tostring(L, 2);
		push_object_vtable(L, object);				// stack: comp, $function_name, cb, vtbl

		top = lua_gettop(L);
		lua_insert(L, top - 2);						// stack: comp, vtbl, $function_name, cb
		lua_rawset(L, -3);							// stack: comp, vtbl

	}
	else 
	{
		lua_pushstring(L, "Argument type error. The first should be an userdata, the second is function name and the third is an function object");
		lua_error(L);
	}
	return 0;
}

void ScriptManager::openManuallyLib()
{
	appendlib(L, NULL, mylib);
}


template <> ScriptManager* Singleton<ScriptManager>::_singleton = NULL;

lua_State* ScriptManager::L = NULL;