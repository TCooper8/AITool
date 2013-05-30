#include <sstream>
#include <string>
#include "Color4.h"

namespace Drawing
{
	const Color4 Color4::Black	(255, 255);
	const Color4 Color4::White	(0, 255);

	Color4::Color4()
		: R(0), G(0), B(0), A(0)
	{ }

	Color4::Color4(uint8 value)
		: R(value), G(value), B(value), A(value)
	{ }

	Color4::Color4(uint8 rgb, uint8 a)
		: R(rgb), G(rgb), B(rgb), A(a)
	{ }

	Color4::Color4(uint8 r, uint8 g, uint8 b, uint8 a)
		: R(r), G(g), B(b), A(a)
	{ }

	Color4::Color4(const Color4 &color)
		: R(color.R), G(color.G), B(color.B), A(color.A)
	{ }

	char* Color4::ToString() const
	{
		std::ostringstream ss;

		ss << "(" 
			<< (short)this->R 
			<< ", " 
			<< (short)this->G
			<< ", " 
			<< (short)this->B
			<< ", " 
			<< (short)this->A
			<< ")";

		std::string str = ss.str();
		char* out = new char[str.length()];
		std::strcpy(out, str.c_str());

		return out;
	}

	Color4 &Color4::operator=(const Color4 &color)
	{
		this->R = color.R;
		this->G = color.G;
		this->B = color.B;
		this->A = color.A;

		return *this;
	}

	bool Color4::operator==(const Color4 &color)
	{
		return (
			this->R == color.R &&
			this->G == color.G &&
			this->B == color.B &&
			this->A == color.A );
	}

	bool Color4::operator!=(const Color4 &color)
	{
		return !(*this == color);
	}
}