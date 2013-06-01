#pragma once

#include "IGraphicsDevice.h"
#include "GLPresentationParameters.h"
#include "VertexPositionColor.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Graphics
		{
			class GLGraphicsDevice : public IGraphicsDevice
			{
				int renderTarget;

			public:
				GLPresentationParameters params;

				GLGraphicsDevice();
				GLGraphicsDevice(const GLGraphicsDevice &device);

				virtual bool Initialize() override;
				virtual void DrawPrimitives(uint primitiveType, const VertexPositionColor* vertices, uint startIndex, uint count) override;
				virtual void Present() override;
			};
		}
	}
}