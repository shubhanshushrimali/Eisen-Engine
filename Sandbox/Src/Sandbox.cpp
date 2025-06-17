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




int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox; 
}