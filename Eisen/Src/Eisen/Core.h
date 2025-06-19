#pragma once

#ifdef EZ_PLATFORM_WINDOWS
	#ifdef EZ_BUILD_DLL
		#define EISEN_API __declspec(dllexport)
	#else
		#define EISEN_API __declspec(dllimport)
	#endif
#else
	#error Eisen only supports Windows!
#endif