#pragma once

namespace Drawing
{
	class DrawingSystem
	{
	public:
		static void ReportError(const char* error);
		static void RaiseExpectedException(const char* expected, const char* got, const char* location);
	};
}