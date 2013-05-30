#pragma once

#include "DrawingSystem.h"

namespace Drawing
{
	// Defines a rectangle with four components as (x, y, width, height).
	class Rectangle
	{
	public:
		int Bottom;
		int Left;
		int Right;
		int Top;

		// Represents an empty rectangle.
		static const Rectangle Empty;

		// Creates a new instance of Rectangle as Rectangle::Empty.
		Rectangle();
		// Creates a new instance of Rectangle as (x, y, width, height).
		Rectangle(int x, int y, int width, int height);
		// Creates a Rectangle copy of the reference rectangle.
		Rectangle(const Rectangle &rect);

		Rectangle &operator=(const Rectangle &rect);
	};
}