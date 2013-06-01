#include <glut.h>
#include "MouseState.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Input
		{
			const uchar ButtonState::Pressed = GLUT_DOWN;
			const uchar ButtonState::Released = GLUT_UP;

			const uchar MouseButton::LeftButton = GLUT_LEFT_BUTTON;
			const uchar MouseButton::MiddleButton = GLUT_MIDDLE_BUTTON;
			const uchar MouseButton::RightButton = GLUT_RIGHT_BUTTON;

			MouseState::MouseState()
				: leftState(ButtonState::Released),
				middleState(ButtonState::Released),
				rightState(ButtonState::Released),
				x(0), y(0)
			{ }

			MouseState::MouseState(const MouseState &state)
				: leftState(state.leftState),
				middleState(state.middleState),
				rightState(state.rightState),
				x(state.x), y(state.y)
			{ }

			int MouseState::GetX() const
			{
				return this->x;
			}

			int MouseState::GetY() const
			{
				return this->y;
			}

			uchar MouseState::GetLeftState() const
			{
				return leftState;
			}

			uchar MouseState::GetMiddleState() const
			{
				return middleState;
			}

			uchar MouseState::GetRightState() const
			{
				return rightState;
			}

			void MouseState::SetX(int x)
			{
				this->x = x;
			}

			void MouseState::SetY(int y)
			{
				this->y = y;
			}

			void MouseState::SetLeftState(uchar state)
			{
				this->leftState = state;
			}

			void MouseState::SetMiddleState(uchar state)
			{
				this->middleState = state;
			}

			void MouseState::SetRightState(uchar state)
			{
				this->rightState = state;
			}
		}
	}
}