#pragma once

#include "../Rectangle.h"

namespace Drawing
{
	namespace Graphics
	{
		// Contains presentation parameters.
		struct PresentationParams
		{
			int BackBufferWidth;
			int BackBufferHeight;
			int DeviceWindowHandle;
			bool IsFullScreen;
			char* Title;

			// Initializes a new instance of PresentationParams with default values.
			PresentationParams();
			PresentationParams(const PresentationParams &params);

			Rectangle GetBounds() const;
			char* ToString() const;
		};
	}
}