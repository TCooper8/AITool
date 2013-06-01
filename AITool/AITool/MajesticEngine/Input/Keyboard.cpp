#include <iostream>
#include <Windows.h>
#include "Keyboard.h"
#include "Keys.h"

using namespace std;

namespace Majestic
{
	namespace Framework
	{
		namespace Input
		{
			KeyboardState Keyboard::GetState()
			{
				int count = 0;
				for (int i = Keys::Back; i <= Keys::OemClear; i++)
				{
					if (GetAsyncKeyState(i) != 0)
						count++;
				}

				uchar* keymap = new uchar[count+1];
				count = 0;
				for (int i = Keys::Back; i <= Keys::OemClear; i++)
				{
					if (GetAsyncKeyState(i))
					{
						keymap[count] = (uchar)i;
						count++;
					}
				}
				keymap[count] = 0;

				return KeyboardState(keymap);
			}
		}
	}
}