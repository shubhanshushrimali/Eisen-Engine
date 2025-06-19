#pragma once
#pragma warning(disable: 4251)


#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"






namespace Eisen {
	class EISEN_API Log
	{
	public:

		static void Init(); 

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger; 
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


// core log marcos 
#define EZ_CORE_FATAL(...)::Eisen::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define EZ_CORE_ERROR(...)::Eisen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EZ_CORE_WARN(...)::Eisen::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EZ_CORE_INFO(...)::Eisen::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EZ_CORE_TRACE(...)::Eisen::Log::GetCoreLogger()->trace(__VA_ARGS__)

// client log marcos 
#define EZ_FATAL(...)::Eisen::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define EZ_ERROR(...)::Eisen::Log::GetClientLogger()->error(__VA_ARGS__)
#define EZ_WARN(...)::Eisen::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EZ_INFO(...)::Eisen::Log::GetClientLogger()->info(__VA_ARGS__)
#define EZ_TRACE(...)::Eisen::Log::GetClientLogger()->trace(__VA_ARGS__)