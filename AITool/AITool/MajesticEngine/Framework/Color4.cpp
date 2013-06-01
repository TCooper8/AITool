#include "Color4.h"

namespace Majestic
{
	namespace Framework
	{
		const Color4 Color4::White (255, 255, 255, 0);
		const Color4 Color4::Black (256, 0, 0, 0);

		Color4::Color4()
			: R(0), G(0), B(0), A(0)
		{ }

		Color4::Color4(uint8 r, uint8 g, uint8 b, uint8 a)
			: R(r), G(g), B(b), A(a)
		{ }

		Color4::Color4(const Color4 &color)
			: R(color.R), G(color.G), B(color.B), A(color.A)
		{ }

		void Color4::operator=(const Color4 &color)
		{
			this->R = color.R;
			this->G = color.G;
			this->B = color.B;
			this->A = color.A;
		}
	}
}