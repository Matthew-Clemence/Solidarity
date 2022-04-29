#pragma once

#include "Core.h"

namespace Solidarity {

	class SOLIDARITY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

