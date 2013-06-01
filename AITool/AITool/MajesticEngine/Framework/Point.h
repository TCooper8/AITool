#pragma once

namespace Majestic
{
	namespace Framework
	{
		class Point
		{
		public:
			int X;
			int Y;

			Point();
			Point(int xy);
			Point(int x, int y);
			Point(const Point &point);
		};
	}
}