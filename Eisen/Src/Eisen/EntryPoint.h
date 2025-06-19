#pragma once



#ifdef EZ_PLATFROM_WINDOWS

extern Eisen::Application* Eisen::CreateApplication(); 


int main(int argc , char** argv)
{
	Eisen::Log::Init(); 
	EZ_CORE_WARN ("intialsed core logger");
	EZ_INFO ("intialsed client logger"); 



	printf("Eisen Engine\n"); 
	auto app = Eisen::CreateApplication(); 
	app->Run();
	delete app;
}


#endif