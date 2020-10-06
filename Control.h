#pragma once
#include <Windows.h>
#include <string>


struct OFfsets
{
	DWORD isRegion;
	uintptr_t world = 0x903B310;
	uintptr_t rotation;
	uintptr_t lock;



};

namespace Control
{
	static bool Aimbot;
	static bool RenderFOV;
	static bool DrawSkeletons;
	static bool DrawBoxes;
	static int fieldofview;
}

namespace Menu
{
	static bool show;
}