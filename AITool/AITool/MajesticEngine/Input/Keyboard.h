#pragma once

#include "../MajesticSystem.h"
#include "KeyboardState.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Input
		{
			class Keyboard sealed
			{
			public:
				static KeyboardState GetState();
			};
		}
	}
}