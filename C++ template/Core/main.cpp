#include "Application.h"
#include "../Application/BaseScene.h"

#if !_DEBUG
#define NOGDI           
#define NOUSER  
#include <Windows.h>
#endif

#if _DEBUG
#pragma comment(linker, "/SUBSYSTEM:CONSOLE")
	int main()
#else
#pragma comment(linker, "/SUBSYSTEM:WINDOWS")
	int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
#endif
	{
		BaseScene scene;

		Core::Application app;
		app.SetScene(scene);
		app.Run();
	}