#pragma once

#ifdef EZ_PLATFROM_WINDOWS

extern Eisen::Application* Eisen::CreateApplication(); 


int main(int argc , char** argv)
{
	printf("Eisen Engine\n"); 
	auto app = Eisen::CreateApplication(); 
	app->Run();
	delete app;
}


#endif