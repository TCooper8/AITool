#include <iostream>
//#include "Drawing/Point.h"
//#include "Drawing/Graphics/Vertex.h"
#include "Drawing.h"

using namespace Drawing;
using namespace Drawing::Graphics;

int main()
{
	Color4 c = Color4(255);
	Vertex v = Vertex(Vector2(.5), Color4::Black);
	Point p = Point(10, 10);

	char* str = p.ToString();
	std::cout << str << std::endl;

	return 0;
}