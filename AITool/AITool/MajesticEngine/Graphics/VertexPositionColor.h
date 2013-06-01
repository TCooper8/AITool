#pragma once

#include "../Framework.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Graphics
		{
			class VertexPositionColor
			{
			public:
				Vector3 Position;
				Color4 Color;

				VertexPositionColor()
					: Position(), Color()
				{ }

				VertexPositionColor(const VertexPositionColor &vertex)
					: Position(vertex.Position), Color(vertex.Color)
				{ }

				VertexPositionColor(const Vector3 &position, const Color4 &color)
					: Position(position), Color(color)
				{ }

				void operator=(const VertexPositionColor &vertex)
				{
					this->Position = vertex.Position;
					this->Color = vertex.Color;
				}
			};
		}
	}
}