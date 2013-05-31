#pragma once

#include "DrawingSystem.h"

namespace Drawing
{
	// Defines a rectangle with four components as (x, y, width, height).
	class Rectangle
	{
	public:
		int X;
		int Y;
		int Width;
		int Height;

		// Creates a new instance of an empty Rectangle as (0, 0, 0, 0).
		Rectangle();
		// Creates a new instance of Rectangle as (x, y, width, height).
		Rectangle(int x, int y, int width, int height);
		// Creates a Rectangle copy of the reference rectangle.
		Rectangle(const Rectangle &rect);

		int GetBottom() const;
		int GetLeft() const;
		int GetRight() const;
		int GetTop() const;

		Rectangle &operator=(const Rectangle &rect);
	};
}