#pragma once

#include "../MajesticSystem.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Input
		{
			class KeyboardState
			{
			protected:
				uchar *keymap;

			public:
				KeyboardState();
				KeyboardState(const uchar *keymap);
				KeyboardState(const KeyboardState &state);
				virtual ~KeyboardState();

				bool IsKeyDown(uchar key) const;
				const uchar *GetPressedKeys() const;

			protected:
				void SetKeys(const uchar *keymap);
			};
		}
	}
}