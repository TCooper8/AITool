#pragma once

#include "DrawingSystem.h"

namespace Drawing
{
	// Defines a color with four components as (R, G, B, A).
	class Color4
	{
	public:
		// Represents the red-component of this color.
		uint8 R;
		// Represents the green-component of this color.
		uint8 G;
		// Represents the blue-component of this color.
		uint8 B;
		// Represents the alpha-component of this color.
		uint8 A;
		
		// Represents the color (255, 255, 255, 255).
		static const Color4 Black;
		// Represents the color (0, 0, 0, 255).
		static const Color4 White;

		// Creates a new instance of Color4 as (0, 0, 0, 0).
		Color4();
		// Creates a new instance of Color4 as (value, value, value, value).
		Color4(uint8 value);
		// Creates a new instance of Color4 as (rgb, rgb, rgb, a).
		Color4(uint8 rgb, uint8 a);
		// Creates a new instance of Color4 as (r, g, b, a).
		Color4(uint8 r, uint8 g, uint8 b, uint8 a);
		// Creates a Color4 copy of the reference color.
		Color4(const Color4 &color);
		~Color4() { }

		char* ToString() const;

		Color4 &operator=(const Color4 &color);
		bool operator==(const Color4 &color);
		bool operator!=(const Color4 &color);
	};
}