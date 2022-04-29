#pragma once

#ifdef SD_PLATFORM_WINDOWS
	#ifdef SD_BUILD_DLL
		#define SOLIDARITY_API __declspec(dllexport)
	#else
		#define SOLIDARITY_API __declspec(dllimport)
	#endif
#else
	#error Solidarity only supports Windows!
#endif
