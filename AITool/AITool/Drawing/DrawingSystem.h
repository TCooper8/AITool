#pragma once

namespace Drawing
{
	typedef unsigned int uint;
	typedef unsigned __int8 uint8;
	typedef unsigned __int16 uint16;

	typedef unsigned __int32 uint32;
	typedef unsigned __int64 uint64;

	typedef unsigned char uchar;
	typedef unsigned long ulong;
	typedef unsigned short ushort;


	class DrawingSystem
	{
	public:
		static void Report(const char* information);
		static void ReportError(int error, const char* information);
		static void RaiseExpectedException(const char* expected, const char* got, const char* location);
	};
}