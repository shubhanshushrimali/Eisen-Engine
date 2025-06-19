#include <Eisen.h>

class Sandbox : public Eisen::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Eisen::Application* Eisen::CreateApplication()
{
	return new Sandbox();
}