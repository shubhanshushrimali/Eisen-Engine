#include "Eisen.h"

class Sandbox : public Eisen::Application
{
  public:
	  Sandbox()
	  {

	  }
	   
	  ~Sandbox() override
	  {

	  }
};



Eisen::Application* Eisen::CreateApplication()
{
	return new Sandbox(); 
}