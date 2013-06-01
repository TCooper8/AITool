#pragma once

#include "../MajesticSystem.h"

namespace Majestic
{
	namespace Framework
	{
		class GameWindow
		{
			int handle;
			int windowSizeX;
			int windowSizeY;

		public:
			bool AllowUserResizing;
			char* Title;

			static GameWindow* WindowInstance;

			GameWindow();
			GameWindow(int handle);
			
		private:
			GameWindow(const GameWindow &window) { } 

			static void ReshapeCallback(int width, int height);
		};
	}
}