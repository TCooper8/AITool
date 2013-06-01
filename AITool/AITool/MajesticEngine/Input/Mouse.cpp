#include <glut.h>
#include "Mouse.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Input
		{
			MouseState Mouse::currentState = MouseState();

			bool Mouse::BindToGlut()
			{
				try
				{
					glutMouseFunc(MouseCallback);
					glutMotionFunc(MouseMotionCallback);
					glutPassiveMotionFunc(MousePassiveMotionCallback);
					return true;
				}
				catch (int e)
				{ }
				return false;
			}

			const MouseState Mouse::GetState()
			{
				return MouseState(currentState);
			}	

			void Mouse::MouseCallback(int button, int state, int x, int y)
			{
				if (MouseButton::LeftButton == button)
					currentState.SetLeftState(state);
				else if (MouseButton::MiddleButton == button)
					currentState.SetMiddleState(state);
				else if (MouseButton::RightButton == button)
					currentState.SetRightState(state);
			}

			void Mouse::MouseMotionCallback(int x, int y)
			{
				currentState.SetX(x);
				currentState.SetY(y);
			}

			void Mouse::MousePassiveMotionCallback(int x, int y)
			{
				currentState.SetX(x);
				currentState.SetY(y);
			}
		}
	}
}