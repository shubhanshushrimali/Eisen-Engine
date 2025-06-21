#pragma once

#include "Core.h"
#include "Eisen/Events/Event.h"

namespace Eisen {

	class EISEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}