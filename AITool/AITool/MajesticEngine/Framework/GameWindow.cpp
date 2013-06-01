#include <glut.h>
#include "GameWindow.h"

namespace Majestic
{
	namespace Framework
	{
		GameWindow* GameWindow::WindowInstance = nullptr;

		GameWindow::GameWindow()
			: handle(0), windowSizeX(0), windowSizeY(0),
			AllowUserResizing(true), Title("Game Window")
		{ }

		GameWindow::GameWindow(int handle)
			: handle(handle), windowSizeX(0), windowSizeY(0),
			AllowUserResizing(true), Title("Game Window")
		{ }

		void GameWindow::ReshapeCallback(int width, int height)
		{
			glutReshapeWindow(width, height);
		}
	}
}