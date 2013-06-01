#include <glut.h>
#include "GLPresentationParameters.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Graphics
		{
			GLPresentationParameters::GLPresentationParameters()
				: DisplayMode(GLUT_DOUBLE | GLUT_RGBA),
				WindowPositionX(100),
				WindowPositionY(100),
				WindowSizeX(800),
				WindowSizeY(600),
				IsFullScreen(false)
			{ }

			GLPresentationParameters::GLPresentationParameters(const GLPresentationParameters &params)
				: DisplayMode(params.DisplayMode),
				WindowPositionX(params.WindowPositionX),
				WindowPositionY(params.WindowPositionY),
				WindowSizeX(params.WindowSizeX),
				WindowSizeY(params.WindowSizeY),
				IsFullScreen(params.IsFullScreen)
			{ }
		}
	}
}