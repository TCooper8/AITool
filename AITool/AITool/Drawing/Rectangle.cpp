#include "Rectangle.h"

namespace Drawing
{
	Rectangle::Rectangle()
		: X(0), Y(0), Width(0), Height(0)
	{ }

	Rectangle::Rectangle(int x, int y, int width, int height)
		: X(x), Y(y), Width(width), Height(height)
	{ }

	Rectangle::Rectangle(const Rectangle &rect)
		: X(rect.X), Y(rect.Y), Width(rect.Width), Height(rect.Height)
	{ }

	int Rectangle::GetBottom() const
	{
		return (Y + Height);
	}

	int Rectangle::GetLeft() const
	{
		return (Width >= 0) ?
			X : X + Width;
	}

	int Rectangle::GetRight() const
	{
		return (X + Width);
	}

	int Rectangle::GetTop() const
	{
		return (Height >= 0) ?
			Y : Y + Height;
	}

	Rectangle &Rectangle::operator=(const Rectangle &rect)
	{
		this->X = rect.X;
		this->Y = rect.Y;
		this->Width = rect.Width;
		this->Height = rect.Height;

		return *this;
	}
}