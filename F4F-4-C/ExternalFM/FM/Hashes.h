#pragma once
#include <Windows.h>

static WCHAR* files[] = {
	L"entry.lua",
	L"A-4E-C.lua",
	L"Cockpit/Scripts/EFM_Data_Bus.lua",
	L"Entry/Suspension.lua",
	L"EFM_BETA_1_BUILD_DO_NOT_DISTRIBUTE.lua",
};

static BYTE hashes[][32] = {
	{0x2c,0x97,0x98,0x2f,0xb6,0xbf,0x64,0x68,0x14,0x37,0xad,0x8b,0x74,0x43,0x75,0xe4,0x36,0xcd,0x41,0xe6},
	{0x26,0x9a,0x30,0x5c,0x0a,0x3f,0x04,0x88,0x47,0x5c,0x7f,0xd9,0x8b,0x98,0xbe,0x61,0xb8,0x92,0xa1,0xfe},
	{0xe8,0x1f,0x5e,0x2c,0x24,0x17,0xe7,0xb3,0x92,0x7d,0x17,0xc8,0x59,0xc7,0xdd,0xce,0x71,0xe1,0x72,0x9f},
	{0xbe,0xee,0x43,0x7b,0x17,0xca,0x4e,0xd0,0xd9,0x36,0xa0,0xac,0x18,0x3c,0x3b,0x5d,0x1f,0x63,0x52,0xa4},
	{0xc5,0x45,0xa1,0xec,0x92,0x4b,0x49,0x9a,0x55,0xa0,0x8e,0xbe,0xa2,0x0c,0x6c,0x35,0x2f,0xb9,0xf0,0xa6}
};
    