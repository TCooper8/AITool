#pragma once

#include "../MajesticSystem.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Input
		{
			struct ButtonState
			{
				static const uchar Pressed;
				static const uchar Released;
			};

			struct MouseButton
			{
				static const uchar LeftButton;
				static const uchar MiddleButton;
				static const uchar RightButton;
			};

			class MouseState
			{
				uchar leftState;
				uchar middleState;
				uchar rightState;

				int x;
				int y;

			public:
				MouseState();
				MouseState(const MouseState &state);

				int GetX() const;
				int GetY() const;
				uchar GetLeftState() const;
				uchar GetMiddleState() const;
				uchar GetRightState() const;

				void SetX(int x);
				void SetY(int y);
				void SetLeftState(uchar state);
				void SetMiddleState(uchar state);
				void SetRightState(uchar state);
			};
		}
	}
}