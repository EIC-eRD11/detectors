#include "ctof.h"

void ctofPlugin::loadSensitivePars(int runno, string variation)
{
	gSensitiveParameters = new GSensitivePars(10, 20);
}
