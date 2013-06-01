#include "KeyboardState.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Input
		{
			KeyboardState::KeyboardState()
				: keymap()
			{
				keymap = new uchar[0];
				keymap[0] = 0;
			}

			KeyboardState::KeyboardState(const uchar *keymap)
				: keymap(nullptr)
			{
				this->SetKeys(keymap);
			}

			KeyboardState::KeyboardState(const KeyboardState &state)
			{
				this->SetKeys(state.keymap);
			}

			KeyboardState::~KeyboardState()
			{
				if (keymap)
					delete [] keymap;
			}

			bool KeyboardState::IsKeyDown(uchar key) const
			{
				int i = 0;
				while (keymap[i])
				{
					if (keymap[i] == key)
						return true;
					i++;
				}
				
				return false;
			}

			const uchar *KeyboardState::GetPressedKeys() const
			{
				return this->keymap;
			}

			void KeyboardState::SetKeys(const uchar *keymap)
			{
				if (this->keymap)
					delete [] this->keymap;

				int i = 0;
				while (keymap[i])
					i++;

				this->keymap = new uchar[i+1];
				i = 0;
				while (keymap[i])
				{
					this->keymap[i] = keymap[i];
					i++;
				}
				this->keymap[i] = 0;
			}
		}
	}
}