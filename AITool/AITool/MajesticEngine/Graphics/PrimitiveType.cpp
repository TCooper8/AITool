#include <glut.h>
#include "PrimitiveType.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Graphics
		{
			const uint PrimitiveType::Points = GL_POINTS;
			const uint PrimitiveType::Lines = GL_LINES;
			const uint PrimitiveType::LineLoop = GL_LINE_LOOP;
			const uint PrimitiveType::LineStrip = GL_LINE_STRIP;
			const uint PrimitiveType::Triangles = GL_TRIANGLES;
			const uint PrimitiveType::TriangleStrip = GL_TRIANGLE_STRIP;
			const uint PrimitiveType::TriangleFan = GL_TRIANGLE_FAN;
			const uint PrimitiveType::Polygon = GL_POLYGON;
		}
	}
}