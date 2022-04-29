#include <Solidarity.h>

class Sandbox : public Solidarity::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Solidarity::Application* Solidarity::CreateApplication()
{
	return new Sandbox();
}