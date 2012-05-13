#include "Debug.h"

void TRACE(const char* info)
{
	char buf[256];
	const char* enter = "\n";
	const char* bufR = info;
	memset(buf, '0', sizeof(buf));
	strcpy(buf, bufR);
	//sprintf(buf, "%.2f\n", vec.x, vec.y);

	OutputDebugString(buf);
	OutputDebugString(enter);
}
void al_debugger_break()
{
	DebugBreak();
}