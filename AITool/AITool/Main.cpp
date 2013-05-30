#include <iostream>
#include "Vector2.h"

using namespace Drawing;

int main()
{
	Vector2 a = Vector2(1.01f);
	Vector2 b;

	char* str = (a + b).ToString();

	std::cout << str << std::endl;

	return 0;
}