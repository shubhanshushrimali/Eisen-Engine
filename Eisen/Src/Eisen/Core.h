#pragma once

#ifdef EZ_PLATFROM_WINDOWS
  #ifdef EZ_BUILD_DLL
    #define EISEN_API _declspec(dllexport)
  #else
    #define EISEN_API _declspec(dllimport)
  #endif
  #else
#error EISEN only Support windows 
#endif