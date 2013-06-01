#pragma once

#include "../MajesticSystem.h"
#include "MouseState.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Input
		{
			class Mouse sealed
			{
				static MouseState currentState;

			public:
				static bool BindToGlut();

				static const MouseState	GetState();
				
				static void MouseCallback(int button, int state, int x, int y);
				static void MouseMotionCallback(int x, int y);
				static void MousePassiveMotionCallback(int x, int y);
			};
		}
	}
}