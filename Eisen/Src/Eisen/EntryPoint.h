#pragma once

#ifdef EZ_PLATFORM_WINDOWS

extern Eisen::Application* Eisen::CreateApplication();

int main(int argc, char** argv)
{
	Eisen::Log::Init();
	EZ_CORE_WARN("Initialized Log!");
	int a = 5;
	EZ_INFO("Hello! Var={0}", a);

	auto app = Eisen::CreateApplication();
	app->Run();
	delete app;
}

#endif