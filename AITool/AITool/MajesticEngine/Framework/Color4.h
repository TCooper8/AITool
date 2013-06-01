#pragma once

#include "../MajesticSystem.h"

namespace Majestic
{
	namespace Framework
	{
		class Color4
		{
		public:
			uint8 R;
			uint8 G;
			uint8 B;
			uint8 A;

			static const Color4 White;
			static const Color4 Black;

			Color4();
			Color4(uint8 r, uint8 g, uint8 b, uint8 a);
			Color4(const Color4 &color);

			void operator=(const Color4 &color);
		};
	}
}