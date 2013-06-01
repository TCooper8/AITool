#pragma once

#include "../MajesticSystem.h"
#include "IPresentationParameters.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Graphics
		{
			// A class that contains values needed for OpenGL.
			class GLPresentationParameters : public IPresentationParameters
			{
			public:
				uint DisplayMode;
				int WindowPositionX;
				int WindowPositionY;
				int WindowSizeX;
				int WindowSizeY;
				bool IsFullScreen;

				// Creates a new instance of this class with default values.
				GLPresentationParameters();
				// Creates a new instance of this class with copied values.
				GLPresentationParameters(const GLPresentationParameters &params);
			};
		}
	}
}