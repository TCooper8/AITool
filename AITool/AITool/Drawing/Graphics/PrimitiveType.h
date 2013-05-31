#pragma once

#include "../DrawingSystem.h"

namespace Drawing
{
	namespace Graphics
	{
		struct PrimitiveType
		{
			static const uint 
				Points,
				Lines,
				LineStrip,
				LineLoop,
				Triangles,
				TriangleStrip,
				TriangleFan,
				Quads,
				Polygon;
		};
	}
}