#include <iostream>
#include "DrawingSystem.h"

namespace Drawing
{
	void DrawingSystem::Report(const char* information)
	{
		std::cout << information << std::endl;
	}

	void DrawingSystem::ReportError(int error, const char* information)
	{
		std::cout << "Error " << error << " : " << information << std::endl;
	}

	void DrawingSystem::RaiseExpectedException(const char* expect, const char* got, const char* location)
	{

	}
}