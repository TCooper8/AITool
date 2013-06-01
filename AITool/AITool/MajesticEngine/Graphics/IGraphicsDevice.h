#pragma once

#include "../MajesticSystem.h"
#include "../Framework.h"
#include "VertexPositionColor.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Graphics
		{
			class IGraphicsDevice
			{
			public:
				IGraphicsDevice() { }
				IGraphicsDevice(const IGraphicsDevice &device) { }

				virtual bool Initialize() = 0;
				virtual void DrawPrimitives(uint primitiveType, const VertexPositionColor* vertices, uint startIndex, uint count) = 0;
				virtual void Present() = 0;
			};
		}
	}
}