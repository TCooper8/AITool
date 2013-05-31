#include <sstream>
#include <string>
#include "PresentationParams.h"

namespace Drawing
{
	namespace Graphics
	{
		PresentationParams::PresentationParams()
			: BackBufferHeight(512),
			BackBufferWidth(762),
			DeviceWindowHandle(0),
			IsFullScreen(false),
			Title("OpenGL window.")
		{ }

		PresentationParams::PresentationParams(const PresentationParams &params)
			: BackBufferHeight(params.BackBufferHeight),
			BackBufferWidth(params.BackBufferWidth),
			DeviceWindowHandle(params.DeviceWindowHandle),
			IsFullScreen(params.IsFullScreen),
			Title(params.Title)
		{ }

		Rectangle PresentationParams::GetBounds() const
		{
			return Rectangle(0, 0, BackBufferWidth, BackBufferHeight);
		}

		char* PresentationParams::ToString() const
		{
			std::ostringstream ss;

			ss << "PresentationParams("
				<< this->BackBufferHeight << ", "
				<< this->BackBufferWidth << ", "
				<< this->DeviceWindowHandle << ", "
				<< this->IsFullScreen << ")";

			std::string str = ss.str();
			char* out = new char[str.length()];
			std::strcpy(out, str.c_str());

			return out;
		}
	}
}