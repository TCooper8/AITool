#include <sstream>
#include <string>
#include "Point.h"

namespace Drawing
{
	Point::Point()
		: X(0), Y(0)
	{ }

	Point::Point(int x, int y)
		: X(x), Y(y)
	{ }

	Point::Point(const Point &point)
		: X(point.X), Y(point.Y)
	{ }

	char* Point::ToString() const
	{
		std::ostringstream ss;

		ss << "(" 
			<< this->X 
			<< ", " 
			<< this->Y
			<< ")";

		std::string str = ss.str();
		char* out = new char[str.length()];
		std::strcpy(out, str.c_str());

		return out;
	}

	Point &Point::operator=(const Point &point)
	{
		this->X = point.X;
		this->Y = point.Y;

		return *this;
	}
}