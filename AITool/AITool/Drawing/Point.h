#pragma once

namespace Drawing
{
	// Defines a point with two components as (X, Y).
	class Point
	{
	public:
		int X;
		int Y;

		// Creates a new instance of Point as (0, 0).
		Point();
		// Creates a new instance of Point as (x, y).
		Point(int x, int y);
		// Creates a Point copy of the reference point.
		Point(const Point &point);

		char* ToString() const;

		Point &operator=(const Point &point);
	};
}