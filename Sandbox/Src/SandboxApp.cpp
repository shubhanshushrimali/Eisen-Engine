#include <Eisen.h>
#include <iostream>

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