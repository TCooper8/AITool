#pragma once

#include "../MajesticSystem.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Graphics
		{
			struct PrimitiveType
			{
				static const uint Points;
				static const uint Lines;
				static const uint LineLoop;
				static const uint LineStrip;
				static const uint Triangles;
				static const uint TriangleStrip;
				static const uint TriangleFan;
				static const uint Polygon;
			};
		}
	}
}