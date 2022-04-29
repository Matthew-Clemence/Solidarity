#pragma once

#ifdef SD_PLATFORM_WINDOWS

extern Solidarity::Application* Solidarity::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Solidarity::CreateApplication();
	app->Run();
	delete app;
}


#else
	#error Solidarity only supports Windows!

#endif