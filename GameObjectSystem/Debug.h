#ifndef __GAME_OBJECT_SYSTEM_DEBUG_H__
#define __GAME_OBJECT_SYSTEM_DEBUG_H__
#if defined(_DEBUG)
#include <stdio.h>
#include <wtypes.h>
#include <stdarg.h>
#include <tchar.h>

void TRACE(const char* info);
#endif
#endif