#include "Application.h"

#include "Eisen/Events/ApplicationEvent.h"
#include "Eisen/Log.h"

namespace Eisen {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			EZ_TRACE(e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			EZ_TRACE(e.ToString());
		}

		while (true);
	}

}