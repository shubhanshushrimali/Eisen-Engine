workspace "Eisen"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Eisen"
	location "Eisen"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"EZ_PLATFORM_WINDOWS",
			"EZ_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "EZ_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "EZ_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "EZ_DIST"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Eisen/vendor/spdlog/include",
		"Eisen/src"
	}

	links
	{
		"Eisen"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"EZ_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "EZ_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "EZ_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "EZ_DIST"
		optimize "On"