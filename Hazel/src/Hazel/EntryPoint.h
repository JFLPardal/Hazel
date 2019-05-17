#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("log CORE initialized");
	int a = 15;
	HZ_INFO("log APP initialized {0}", a);	// substitutes Hazel::Log::GetClientLogger()->info("");	

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif 

