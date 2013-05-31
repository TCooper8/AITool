#include <glut.h>
#include "PrimitiveType.h"

namespace Drawing
{
	namespace Graphics
	{
		const uint 
			PrimitiveType::LineLoop = GL_LINE_LOOP,
			PrimitiveType::Lines = GL_LINES,
			PrimitiveType::LineStrip = GL_LINE_STRIP,
			PrimitiveType::Points = GL_POINTS,
			PrimitiveType::Polygon = GL_POLYGON,
			PrimitiveType::Quads = GL_QUADS,
			PrimitiveType::TriangleFan = GL_TRIANGLE_FAN,
			PrimitiveType::Triangles = GL_TRIANGLES,
			PrimitiveType::TriangleStrip = GL_TRIANGLE_STRIP;
	}
}