#pragma once

#include "Core.h"

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