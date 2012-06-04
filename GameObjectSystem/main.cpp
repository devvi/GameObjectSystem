/*
-----------------------------------------------------------------------------
This soure file is part of GameObjectSystem.
Copyright (c) 2012 Devvi
-----------------------------------------------------------------------------
*/

#include "GameObjectSystem.h"
#include <windows.h>


INT WINAPI WinMain( __in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd )

{
	using namespace DAISY;
	
	Director director;
	if(director.init())
	{
		director.run();
	}
	else
		exit(0);

	return 0;
}

