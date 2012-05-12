/*
** Lua binding: OIS
** Generated automatically by tolua++-1.0.92 on 05/12/12 17:41:21.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_OIS_open (lua_State* tolua_S);


#include "OIS/OIS.h"
using namespace OIS;
/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Component (lua_State* tolua_S)
{
	Component* self = (Component*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_MouseEvent (lua_State* tolua_S)
{
	MouseEvent* self = (MouseEvent*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Button (lua_State* tolua_S)
{
	Button* self = (Button*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_KeyEvent (lua_State* tolua_S)
{
	KeyEvent* self = (KeyEvent*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_MouseState (lua_State* tolua_S)
{
	MouseState* self = (MouseState*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Axis (lua_State* tolua_S)
{
	Axis* self = (Axis*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
	tolua_usertype(tolua_S,"Component");
	tolua_usertype(tolua_S,"KeyEvent");
	tolua_usertype(tolua_S,"Object");
	tolua_usertype(tolua_S,"MouseEvent");
	tolua_usertype(tolua_S,"Button");
	tolua_usertype(tolua_S,"EventArg");
	tolua_usertype(tolua_S,"MouseState");
	tolua_usertype(tolua_S,"Axis");
}

/* method: new of class  Component */
#ifndef TOLUA_DISABLE_tolua_OIS_Component_new00
static int tolua_OIS_Component_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Component* tolua_ret = (Component*)  Mtolua_new((Component)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Component */
#ifndef TOLUA_DISABLE_tolua_OIS_Component_new00_local
static int tolua_OIS_Component_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Component* tolua_ret = (Component*)  Mtolua_new((Component)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Component */
#ifndef TOLUA_DISABLE_tolua_OIS_Component_new01
static int tolua_OIS_Component_new01(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		ComponentType type = ((ComponentType) (int)  tolua_tonumber(tolua_S,2,0));
		{
			Component* tolua_ret = (Component*)  Mtolua_new((Component)(type));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
		}
	}
	return 1;
tolua_lerror:
	return tolua_OIS_Component_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Component */
#ifndef TOLUA_DISABLE_tolua_OIS_Component_new01_local
static int tolua_OIS_Component_new01_local(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Component",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		ComponentType type = ((ComponentType) (int)  tolua_tonumber(tolua_S,2,0));
		{
			Component* tolua_ret = (Component*)  Mtolua_new((Component)(type));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
tolua_lerror:
	return tolua_OIS_Component_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cType of class  Component */
#ifndef TOLUA_DISABLE_tolua_get_Component_cType
static int tolua_get_Component_cType(lua_State* tolua_S)
{
	Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cType'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->cType);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cType of class  Component */
#ifndef TOLUA_DISABLE_tolua_set_Component_cType
static int tolua_set_Component_cType(lua_State* tolua_S)
{
	Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cType'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->cType = ((ComponentType) (int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Button */
#ifndef TOLUA_DISABLE_tolua_OIS_Button_new00
static int tolua_OIS_Button_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Button* tolua_ret = (Button*)  Mtolua_new((Button)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Button");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Button */
#ifndef TOLUA_DISABLE_tolua_OIS_Button_new00_local
static int tolua_OIS_Button_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Button* tolua_ret = (Button*)  Mtolua_new((Button)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Button");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Button */
#ifndef TOLUA_DISABLE_tolua_OIS_Button_new01
static int tolua_OIS_Button_new01(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
		!tolua_isboolean(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		bool bPushed = ((bool)  tolua_toboolean(tolua_S,2,0));
		{
			Button* tolua_ret = (Button*)  Mtolua_new((Button)(bPushed));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Button");
		}
	}
	return 1;
tolua_lerror:
	return tolua_OIS_Button_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Button */
#ifndef TOLUA_DISABLE_tolua_OIS_Button_new01_local
static int tolua_OIS_Button_new01_local(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Button",0,&tolua_err) ||
		!tolua_isboolean(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
	{
		bool bPushed = ((bool)  tolua_toboolean(tolua_S,2,0));
		{
			Button* tolua_ret = (Button*)  Mtolua_new((Button)(bPushed));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Button");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
tolua_lerror:
	return tolua_OIS_Button_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pushed of class  Button */
#ifndef TOLUA_DISABLE_tolua_get_Button_pushed
static int tolua_get_Button_pushed(lua_State* tolua_S)
{
	Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pushed'",NULL);
#endif
	tolua_pushboolean(tolua_S,(bool)self->pushed);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pushed of class  Button */
#ifndef TOLUA_DISABLE_tolua_set_Button_pushed
static int tolua_set_Button_pushed(lua_State* tolua_S)
{
	Button* self = (Button*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pushed'",NULL);
	if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->pushed = ((bool)  tolua_toboolean(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Axis */
#ifndef TOLUA_DISABLE_tolua_OIS_Axis_new00
static int tolua_OIS_Axis_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Axis",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Axis* tolua_ret = (Axis*)  Mtolua_new((Axis)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Axis");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Axis */
#ifndef TOLUA_DISABLE_tolua_OIS_Axis_new00_local
static int tolua_OIS_Axis_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"Axis",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			Axis* tolua_ret = (Axis*)  Mtolua_new((Axis)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"Axis");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: abs of class  Axis */
#ifndef TOLUA_DISABLE_tolua_get_Axis_abs
static int tolua_get_Axis_abs(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'abs'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->abs);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: abs of class  Axis */
#ifndef TOLUA_DISABLE_tolua_set_Axis_abs
static int tolua_set_Axis_abs(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'abs'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->abs = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rel of class  Axis */
#ifndef TOLUA_DISABLE_tolua_get_Axis_rel
static int tolua_get_Axis_rel(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rel'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->rel);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rel of class  Axis */
#ifndef TOLUA_DISABLE_tolua_set_Axis_rel
static int tolua_set_Axis_rel(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rel'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->rel = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: absOnly of class  Axis */
#ifndef TOLUA_DISABLE_tolua_get_Axis_absOnly
static int tolua_get_Axis_absOnly(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'absOnly'",NULL);
#endif
	tolua_pushboolean(tolua_S,(bool)self->absOnly);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: absOnly of class  Axis */
#ifndef TOLUA_DISABLE_tolua_set_Axis_absOnly
static int tolua_set_Axis_absOnly(lua_State* tolua_S)
{
	Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'absOnly'",NULL);
	if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->absOnly = ((bool)  tolua_toboolean(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  Axis */
#ifndef TOLUA_DISABLE_tolua_OIS_Axis_clear00
static int tolua_OIS_Axis_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"Axis",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Axis* self = (Axis*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
		{
			self->clear();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseState_new00
static int tolua_OIS_MouseState_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"MouseState",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			MouseState* tolua_ret = (MouseState*)  Mtolua_new((MouseState)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"MouseState");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseState_new00_local
static int tolua_OIS_MouseState_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"MouseState",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		{
			MouseState* tolua_ret = (MouseState*)  Mtolua_new((MouseState)());
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"MouseState");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: width of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_width
static int tolua_get_MouseState_width(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->width);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: width of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_width
static int tolua_set_MouseState_width(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->width = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_height
static int tolua_get_MouseState_height(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->height);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_height
static int tolua_set_MouseState_height(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->height = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: X of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_X
static int tolua_get_MouseState_X(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
#endif
	tolua_pushusertype(tolua_S,(void*)&self->X,"Axis");
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: X of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_X
static int tolua_set_MouseState_X(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
	if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Axis",0,&tolua_err)))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->X = *((Axis*)  tolua_tousertype(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Y of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_Y
static int tolua_get_MouseState_Y(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
#endif
	tolua_pushusertype(tolua_S,(void*)&self->Y,"Axis");
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Y of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_Y
static int tolua_set_MouseState_Y(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
	if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Axis",0,&tolua_err)))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->Y = *((Axis*)  tolua_tousertype(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Z of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_Z
static int tolua_get_MouseState_Z(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Z'",NULL);
#endif
	tolua_pushusertype(tolua_S,(void*)&self->Z,"Axis");
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Z of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_Z
static int tolua_set_MouseState_Z(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Z'",NULL);
	if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Axis",0,&tolua_err)))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->Z = *((Axis*)  tolua_tousertype(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: buttons of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_get_MouseState_buttons
static int tolua_get_MouseState_buttons(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'buttons'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->buttons);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: buttons of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_set_MouseState_buttons
static int tolua_set_MouseState_buttons(lua_State* tolua_S)
{
	MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'buttons'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->buttons = ((int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: buttonDown of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseState_buttonDown00
static int tolua_OIS_MouseState_buttonDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"const MouseState",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,2,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,3,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		const MouseState* self = (const MouseState*)  tolua_tousertype(tolua_S,1,0);
		MouseButtonID button = ((MouseButtonID) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'buttonDown'", NULL);
#endif
		{
			bool tolua_ret = (bool)  self->buttonDown(button);
			tolua_pushboolean(tolua_S,(bool)tolua_ret);
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'buttonDown'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  MouseState */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseState_clear00
static int tolua_OIS_MouseState_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"MouseState",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		MouseState* self = (MouseState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
		{
			self->clear();
		}
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  MouseEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseEvent_new00
static int tolua_OIS_MouseEvent_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"MouseEvent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const MouseState",0,&tolua_err)) ||
		!tolua_isnoobj(tolua_S,4,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
		const MouseState* ms = ((const MouseState*)  tolua_tousertype(tolua_S,3,0));
		{
			MouseEvent* tolua_ret = (MouseEvent*)  Mtolua_new((MouseEvent)(obj,*ms));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"MouseEvent");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  MouseEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseEvent_new00_local
static int tolua_OIS_MouseEvent_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"MouseEvent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const MouseState",0,&tolua_err)) ||
		!tolua_isnoobj(tolua_S,4,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
		const MouseState* ms = ((const MouseState*)  tolua_tousertype(tolua_S,3,0));
		{
			MouseEvent* tolua_ret = (MouseEvent*)  Mtolua_new((MouseEvent)(obj,*ms));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"MouseEvent");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  MouseEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_MouseEvent_delete00
static int tolua_OIS_MouseEvent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"MouseEvent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		MouseEvent* self = (MouseEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  MouseEvent */
#ifndef TOLUA_DISABLE_tolua_get_MouseEvent_state_ref
static int tolua_get_MouseEvent_state_ref(lua_State* tolua_S)
{
	MouseEvent* self = (MouseEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
	tolua_pushusertype(tolua_S,(void*)&self->state,"const MouseState");
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_KeyEvent_new00
static int tolua_OIS_KeyEvent_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"KeyEvent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,3,0,&tolua_err) ||
		!tolua_isnumber(tolua_S,4,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,5,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
		KeyCode kc = ((KeyCode) (int)  tolua_tonumber(tolua_S,3,0));
		unsigned int txt = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
		{
			KeyEvent* tolua_ret = (KeyEvent*)  Mtolua_new((KeyEvent)(obj,kc,txt));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"KeyEvent");
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_KeyEvent_new00_local
static int tolua_OIS_KeyEvent_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertable(tolua_S,1,"KeyEvent",0,&tolua_err) ||
		!tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
		!tolua_isnumber(tolua_S,3,0,&tolua_err) ||
		!tolua_isnumber(tolua_S,4,0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,5,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
		KeyCode kc = ((KeyCode) (int)  tolua_tonumber(tolua_S,3,0));
		unsigned int txt = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
		{
			KeyEvent* tolua_ret = (KeyEvent*)  Mtolua_new((KeyEvent)(obj,kc,txt));
			tolua_pushusertype(tolua_S,(void*)tolua_ret,"KeyEvent");
			tolua_register_gc(tolua_S,lua_gettop(tolua_S));
		}
	}
	return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_OIS_KeyEvent_delete00
static int tolua_OIS_KeyEvent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (
		!tolua_isusertype(tolua_S,1,"KeyEvent",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		KeyEvent* self = (KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
		if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
		Mtolua_delete(self);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
	return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: key of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_KeyEvent_key
static int tolua_get_KeyEvent_key(lua_State* tolua_S)
{
	KeyEvent* self = (KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'key'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->key);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: text of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_KeyEvent_unsigned_text
static int tolua_get_KeyEvent_unsigned_text(lua_State* tolua_S)
{
	KeyEvent* self = (KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
#endif
	tolua_pushnumber(tolua_S,(lua_Number)self->text);
	return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: text of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_set_KeyEvent_unsigned_text
static int tolua_set_KeyEvent_unsigned_text(lua_State* tolua_S)
{
	KeyEvent* self = (KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
	if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
		tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
	self->text = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
		;
	return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_OIS_open (lua_State* tolua_S)
{
	tolua_open(tolua_S);
	tolua_reg_types(tolua_S);
	tolua_module(tolua_S,NULL,0);
	tolua_beginmodule(tolua_S,NULL);
	tolua_constant(tolua_S,"OIS_Unknown",OIS_Unknown);
	tolua_constant(tolua_S,"OIS_Button",OIS_Button);
	tolua_constant(tolua_S,"OIS_Axis",OIS_Axis);
	tolua_constant(tolua_S,"OIS_Slider",OIS_Slider);
	tolua_constant(tolua_S,"OIS_POV",OIS_POV);
	tolua_constant(tolua_S,"OIS_Vector3",OIS_Vector3);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"Component","Component","",tolua_collect_Component);
#else
	tolua_cclass(tolua_S,"Component","Component","",NULL);
#endif
	tolua_beginmodule(tolua_S,"Component");
	tolua_function(tolua_S,"new",tolua_OIS_Component_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_Component_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_Component_new00_local);
	tolua_function(tolua_S,"new",tolua_OIS_Component_new01);
	tolua_function(tolua_S,"new_local",tolua_OIS_Component_new01_local);
	tolua_function(tolua_S,".call",tolua_OIS_Component_new01_local);
	tolua_variable(tolua_S,"cType",tolua_get_Component_cType,tolua_set_Component_cType);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"Button","Button","Component",tolua_collect_Button);
#else
	tolua_cclass(tolua_S,"Button","Button","Component",NULL);
#endif
	tolua_beginmodule(tolua_S,"Button");
	tolua_function(tolua_S,"new",tolua_OIS_Button_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_Button_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_Button_new00_local);
	tolua_function(tolua_S,"new",tolua_OIS_Button_new01);
	tolua_function(tolua_S,"new_local",tolua_OIS_Button_new01_local);
	tolua_function(tolua_S,".call",tolua_OIS_Button_new01_local);
	tolua_variable(tolua_S,"pushed",tolua_get_Button_pushed,tolua_set_Button_pushed);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"Axis","Axis","Component",tolua_collect_Axis);
#else
	tolua_cclass(tolua_S,"Axis","Axis","Component",NULL);
#endif
	tolua_beginmodule(tolua_S,"Axis");
	tolua_function(tolua_S,"new",tolua_OIS_Axis_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_Axis_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_Axis_new00_local);
	tolua_variable(tolua_S,"abs",tolua_get_Axis_abs,tolua_set_Axis_abs);
	tolua_variable(tolua_S,"rel",tolua_get_Axis_rel,tolua_set_Axis_rel);
	tolua_variable(tolua_S,"absOnly",tolua_get_Axis_absOnly,tolua_set_Axis_absOnly);
	tolua_function(tolua_S,"clear",tolua_OIS_Axis_clear00);
	tolua_endmodule(tolua_S);
	tolua_constant(tolua_S,"MB_Left",MB_Left);
	tolua_constant(tolua_S,"MB_Right",MB_Right);
	tolua_constant(tolua_S,"MB_Middle",MB_Middle);
	tolua_constant(tolua_S,"MB_Button3",MB_Button3);
	tolua_constant(tolua_S,"MB_Button4",MB_Button4);
	tolua_constant(tolua_S,"MB_Button5",MB_Button5);
	tolua_constant(tolua_S,"MB_Button6",MB_Button6);
	tolua_constant(tolua_S,"MB_Button7",MB_Button7);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"MouseState","MouseState","",tolua_collect_MouseState);
#else
	tolua_cclass(tolua_S,"MouseState","MouseState","",NULL);
#endif
	tolua_beginmodule(tolua_S,"MouseState");
	tolua_function(tolua_S,"new",tolua_OIS_MouseState_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_MouseState_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_MouseState_new00_local);
	tolua_variable(tolua_S,"width",tolua_get_MouseState_width,tolua_set_MouseState_width);
	tolua_variable(tolua_S,"height",tolua_get_MouseState_height,tolua_set_MouseState_height);
	tolua_variable(tolua_S,"X",tolua_get_MouseState_X,tolua_set_MouseState_X);
	tolua_variable(tolua_S,"Y",tolua_get_MouseState_Y,tolua_set_MouseState_Y);
	tolua_variable(tolua_S,"Z",tolua_get_MouseState_Z,tolua_set_MouseState_Z);
	tolua_variable(tolua_S,"buttons",tolua_get_MouseState_buttons,tolua_set_MouseState_buttons);
	tolua_function(tolua_S,"buttonDown",tolua_OIS_MouseState_buttonDown00);
	tolua_function(tolua_S,"clear",tolua_OIS_MouseState_clear00);
	tolua_endmodule(tolua_S);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"MouseEvent","MouseEvent","EventArg",tolua_collect_MouseEvent);
#else
	tolua_cclass(tolua_S,"MouseEvent","MouseEvent","EventArg",NULL);
#endif
	tolua_beginmodule(tolua_S,"MouseEvent");
	tolua_function(tolua_S,"new",tolua_OIS_MouseEvent_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_MouseEvent_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_MouseEvent_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_MouseEvent_delete00);
	tolua_variable(tolua_S,"state",tolua_get_MouseEvent_state_ref,NULL);
	tolua_endmodule(tolua_S);
	tolua_constant(tolua_S,"KC_UNASSIGNED",KC_UNASSIGNED);
	tolua_constant(tolua_S,"KC_ESCAPE",KC_ESCAPE);
	tolua_constant(tolua_S,"KC_1",KC_1);
	tolua_constant(tolua_S,"KC_2",KC_2);
	tolua_constant(tolua_S,"KC_3",KC_3);
	tolua_constant(tolua_S,"KC_4",KC_4);
	tolua_constant(tolua_S,"KC_5",KC_5);
	tolua_constant(tolua_S,"KC_6",KC_6);
	tolua_constant(tolua_S,"KC_7",KC_7);
	tolua_constant(tolua_S,"KC_8",KC_8);
	tolua_constant(tolua_S,"KC_9",KC_9);
	tolua_constant(tolua_S,"KC_0",KC_0);
	tolua_constant(tolua_S,"KC_MINUS",KC_MINUS);
	tolua_constant(tolua_S,"KC_EQUALS",KC_EQUALS);
	tolua_constant(tolua_S,"KC_BACK",KC_BACK);
	tolua_constant(tolua_S,"KC_TAB",KC_TAB);
	tolua_constant(tolua_S,"KC_Q",KC_Q);
	tolua_constant(tolua_S,"KC_W",KC_W);
	tolua_constant(tolua_S,"KC_E",KC_E);
	tolua_constant(tolua_S,"KC_R",KC_R);
	tolua_constant(tolua_S,"KC_T",KC_T);
	tolua_constant(tolua_S,"KC_Y",KC_Y);
	tolua_constant(tolua_S,"KC_U",KC_U);
	tolua_constant(tolua_S,"KC_I",KC_I);
	tolua_constant(tolua_S,"KC_O",KC_O);
	tolua_constant(tolua_S,"KC_P",KC_P);
	tolua_constant(tolua_S,"KC_LBRACKET",KC_LBRACKET);
	tolua_constant(tolua_S,"KC_RBRACKET",KC_RBRACKET);
	tolua_constant(tolua_S,"KC_RETURN",KC_RETURN);
	tolua_constant(tolua_S,"KC_LCONTROL",KC_LCONTROL);
	tolua_constant(tolua_S,"KC_A",KC_A);
	tolua_constant(tolua_S,"KC_S",KC_S);
	tolua_constant(tolua_S,"KC_D",KC_D);
	tolua_constant(tolua_S,"KC_F",KC_F);
	tolua_constant(tolua_S,"KC_G",KC_G);
	tolua_constant(tolua_S,"KC_H",KC_H);
	tolua_constant(tolua_S,"KC_J",KC_J);
	tolua_constant(tolua_S,"KC_K",KC_K);
	tolua_constant(tolua_S,"KC_L",KC_L);
	tolua_constant(tolua_S,"KC_SEMICOLON",KC_SEMICOLON);
	tolua_constant(tolua_S,"KC_APOSTROPHE",KC_APOSTROPHE);
	tolua_constant(tolua_S,"KC_GRAVE",KC_GRAVE);
	tolua_constant(tolua_S,"KC_LSHIFT",KC_LSHIFT);
	tolua_constant(tolua_S,"KC_BACKSLASH",KC_BACKSLASH);
	tolua_constant(tolua_S,"KC_Z",KC_Z);
	tolua_constant(tolua_S,"KC_X",KC_X);
	tolua_constant(tolua_S,"KC_C",KC_C);
	tolua_constant(tolua_S,"KC_V",KC_V);
	tolua_constant(tolua_S,"KC_B",KC_B);
	tolua_constant(tolua_S,"KC_N",KC_N);
	tolua_constant(tolua_S,"KC_M",KC_M);
	tolua_constant(tolua_S,"KC_COMMA",KC_COMMA);
	tolua_constant(tolua_S,"KC_PERIOD",KC_PERIOD);
	tolua_constant(tolua_S,"KC_SLASH",KC_SLASH);
	tolua_constant(tolua_S,"KC_RSHIFT",KC_RSHIFT);
	tolua_constant(tolua_S,"KC_MULTIPLY",KC_MULTIPLY);
	tolua_constant(tolua_S,"KC_LMENU",KC_LMENU);
	tolua_constant(tolua_S,"KC_SPACE",KC_SPACE);
	tolua_constant(tolua_S,"KC_CAPITAL",KC_CAPITAL);
	tolua_constant(tolua_S,"KC_F1",KC_F1);
	tolua_constant(tolua_S,"KC_F2",KC_F2);
	tolua_constant(tolua_S,"KC_F3",KC_F3);
	tolua_constant(tolua_S,"KC_F4",KC_F4);
	tolua_constant(tolua_S,"KC_F5",KC_F5);
	tolua_constant(tolua_S,"KC_F6",KC_F6);
	tolua_constant(tolua_S,"KC_F7",KC_F7);
	tolua_constant(tolua_S,"KC_F8",KC_F8);
	tolua_constant(tolua_S,"KC_F9",KC_F9);
	tolua_constant(tolua_S,"KC_F10",KC_F10);
	tolua_constant(tolua_S,"KC_NUMLOCK",KC_NUMLOCK);
	tolua_constant(tolua_S,"KC_SCROLL",KC_SCROLL);
	tolua_constant(tolua_S,"KC_NUMPAD7",KC_NUMPAD7);
	tolua_constant(tolua_S,"KC_NUMPAD8",KC_NUMPAD8);
	tolua_constant(tolua_S,"KC_NUMPAD9",KC_NUMPAD9);
	tolua_constant(tolua_S,"KC_SUBTRACT",KC_SUBTRACT);
	tolua_constant(tolua_S,"KC_NUMPAD4",KC_NUMPAD4);
	tolua_constant(tolua_S,"KC_NUMPAD5",KC_NUMPAD5);
	tolua_constant(tolua_S,"KC_NUMPAD6",KC_NUMPAD6);
	tolua_constant(tolua_S,"KC_ADD",KC_ADD);
	tolua_constant(tolua_S,"KC_NUMPAD1",KC_NUMPAD1);
	tolua_constant(tolua_S,"KC_NUMPAD2",KC_NUMPAD2);
	tolua_constant(tolua_S,"KC_NUMPAD3",KC_NUMPAD3);
	tolua_constant(tolua_S,"KC_NUMPAD0",KC_NUMPAD0);
	tolua_constant(tolua_S,"KC_DECIMAL",KC_DECIMAL);
	tolua_constant(tolua_S,"KC_OEM_102",KC_OEM_102);
	tolua_constant(tolua_S,"KC_F11",KC_F11);
	tolua_constant(tolua_S,"KC_F12",KC_F12);
	tolua_constant(tolua_S,"KC_F13",KC_F13);
	tolua_constant(tolua_S,"KC_F14",KC_F14);
	tolua_constant(tolua_S,"KC_F15",KC_F15);
	tolua_constant(tolua_S,"KC_KANA",KC_KANA);
	tolua_constant(tolua_S,"KC_ABNT_C1",KC_ABNT_C1);
	tolua_constant(tolua_S,"KC_CONVERT",KC_CONVERT);
	tolua_constant(tolua_S,"KC_NOCONVERT",KC_NOCONVERT);
	tolua_constant(tolua_S,"KC_YEN",KC_YEN);
	tolua_constant(tolua_S,"KC_ABNT_C2",KC_ABNT_C2);
	tolua_constant(tolua_S,"KC_NUMPADEQUALS",KC_NUMPADEQUALS);
	tolua_constant(tolua_S,"KC_PREVTRACK",KC_PREVTRACK);
	tolua_constant(tolua_S,"KC_AT",KC_AT);
	tolua_constant(tolua_S,"KC_COLON",KC_COLON);
	tolua_constant(tolua_S,"KC_UNDERLINE",KC_UNDERLINE);
	tolua_constant(tolua_S,"KC_KANJI",KC_KANJI);
	tolua_constant(tolua_S,"KC_STOP",KC_STOP);
	tolua_constant(tolua_S,"KC_AX",KC_AX);
	tolua_constant(tolua_S,"KC_UNLABELED",KC_UNLABELED);
	tolua_constant(tolua_S,"KC_NEXTTRACK",KC_NEXTTRACK);
	tolua_constant(tolua_S,"KC_NUMPADENTER",KC_NUMPADENTER);
	tolua_constant(tolua_S,"KC_RCONTROL",KC_RCONTROL);
	tolua_constant(tolua_S,"KC_MUTE",KC_MUTE);
	tolua_constant(tolua_S,"KC_CALCULATOR",KC_CALCULATOR);
	tolua_constant(tolua_S,"KC_PLAYPAUSE",KC_PLAYPAUSE);
	tolua_constant(tolua_S,"KC_MEDIASTOP",KC_MEDIASTOP);
	tolua_constant(tolua_S,"KC_VOLUMEDOWN",KC_VOLUMEDOWN);
	tolua_constant(tolua_S,"KC_VOLUMEUP",KC_VOLUMEUP);
	tolua_constant(tolua_S,"KC_WEBHOME",KC_WEBHOME);
	tolua_constant(tolua_S,"KC_NUMPADCOMMA",KC_NUMPADCOMMA);
	tolua_constant(tolua_S,"KC_DIVIDE",KC_DIVIDE);
	tolua_constant(tolua_S,"KC_SYSRQ",KC_SYSRQ);
	tolua_constant(tolua_S,"KC_RMENU",KC_RMENU);
	tolua_constant(tolua_S,"KC_PAUSE",KC_PAUSE);
	tolua_constant(tolua_S,"KC_HOME",KC_HOME);
	tolua_constant(tolua_S,"KC_UP",KC_UP);
	tolua_constant(tolua_S,"KC_PGUP",KC_PGUP);
	tolua_constant(tolua_S,"KC_LEFT",KC_LEFT);
	tolua_constant(tolua_S,"KC_RIGHT",KC_RIGHT);
	tolua_constant(tolua_S,"KC_END",KC_END);
	tolua_constant(tolua_S,"KC_DOWN",KC_DOWN);
	tolua_constant(tolua_S,"KC_PGDOWN",KC_PGDOWN);
	tolua_constant(tolua_S,"KC_INSERT",KC_INSERT);
	tolua_constant(tolua_S,"KC_DELETE",KC_DELETE);
	tolua_constant(tolua_S,"KC_LWIN",KC_LWIN);
	tolua_constant(tolua_S,"KC_RWIN",KC_RWIN);
	tolua_constant(tolua_S,"KC_APPS",KC_APPS);
	tolua_constant(tolua_S,"KC_POWER",KC_POWER);
	tolua_constant(tolua_S,"KC_SLEEP",KC_SLEEP);
	tolua_constant(tolua_S,"KC_WAKE",KC_WAKE);
	tolua_constant(tolua_S,"KC_WEBSEARCH",KC_WEBSEARCH);
	tolua_constant(tolua_S,"KC_WEBFAVORITES",KC_WEBFAVORITES);
	tolua_constant(tolua_S,"KC_WEBREFRESH",KC_WEBREFRESH);
	tolua_constant(tolua_S,"KC_WEBSTOP",KC_WEBSTOP);
	tolua_constant(tolua_S,"KC_WEBFORWARD",KC_WEBFORWARD);
	tolua_constant(tolua_S,"KC_WEBBACK",KC_WEBBACK);
	tolua_constant(tolua_S,"KC_MYCOMPUTER",KC_MYCOMPUTER);
	tolua_constant(tolua_S,"KC_MAIL",KC_MAIL);
	tolua_constant(tolua_S,"KC_MEDIASELECT",KC_MEDIASELECT);
#ifdef __cplusplus
	tolua_cclass(tolua_S,"KeyEvent","KeyEvent","EventArg",tolua_collect_KeyEvent);
#else
	tolua_cclass(tolua_S,"KeyEvent","KeyEvent","EventArg",NULL);
#endif
	tolua_beginmodule(tolua_S,"KeyEvent");
	tolua_function(tolua_S,"new",tolua_OIS_KeyEvent_new00);
	tolua_function(tolua_S,"new_local",tolua_OIS_KeyEvent_new00_local);
	tolua_function(tolua_S,".call",tolua_OIS_KeyEvent_new00_local);
	tolua_function(tolua_S,"delete",tolua_OIS_KeyEvent_delete00);
	tolua_variable(tolua_S,"key",tolua_get_KeyEvent_key,NULL);
	tolua_variable(tolua_S,"text",tolua_get_KeyEvent_unsigned_text,tolua_set_KeyEvent_unsigned_text);
	tolua_endmodule(tolua_S);
	tolua_endmodule(tolua_S);
	return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
TOLUA_API int luaopen_OIS (lua_State* tolua_S) {
	return tolua_OIS_open(tolua_S);
};
#endif

