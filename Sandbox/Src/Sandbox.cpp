#include "Eisen.h"

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



Eisen::Application* CreateApplication()
{
	return new Sandbox(); 
}