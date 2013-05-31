#pragma once

#include "PrimitiveType.h"
#include "Vertex.h"
#include "PresentationParams.h"
#include "Viewport.h"

namespace Drawing
{
	namespace Graphics
	{
		// Performs primitive-based rendering.
		class GraphicsDevice
		{
		public:
			PresentationParams Params;
			Viewport RenderViewport;

			GraphicsDevice();
			GraphicsDevice(const GraphicsDevice &device);

			virtual bool Initialize();
			virtual void Dispose();

			virtual void Clear(const Color4 &color);
			virtual void DrawVertices(uint primitiveType, const Vertex* vertices);
			virtual void Present();
		};
	}
}