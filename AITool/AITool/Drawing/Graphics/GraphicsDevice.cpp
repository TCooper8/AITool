#include <iostream>
#include <sstream>
#include <glut.h>
#include "GraphicsDevice.h"

namespace Drawing
{
	namespace Graphics
	{
		GraphicsDevice::GraphicsDevice()
			: Params(), 
			RenderViewport(200, 200,
				Params.BackBufferWidth, Params.BackBufferHeight)
		{ }

		GraphicsDevice::GraphicsDevice(const GraphicsDevice &device)
			: Params(device.Params), RenderViewport(device.RenderViewport)
		{ }

		bool GraphicsDevice::Initialize()
		{
			DrawingSystem::Report("Initializing GraphicsDevice. . .");
			try
			{
				glutInit(nullptr, nullptr);

				glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
				glutInitWindowPosition(RenderViewport.GetX(), RenderViewport.GetY());
				glutInitWindowSize(RenderViewport.GetWidth(), RenderViewport.GetHeight());

				if (Params.IsFullScreen)
				{
					std::stringstream ss;

					ss << Params.BackBufferWidth
						<< Params.BackBufferHeight;

					#if defined(__WIN64)
					ss << ":64";
					#else
					ss << ":32";
					#endif

					glutGameModeString(ss.str().c_str());
					this->Params.DeviceWindowHandle = 
						glutEnterGameMode();
				}
				else
				{
					this->Params.DeviceWindowHandle = 
						glutCreateWindow(Params.Title);
				}

				glClearColor(1, 1, 1, 0);

				DrawingSystem::Report("GraphicsDevice initialization successful.");
			}
			catch (int e)
			{
				DrawingSystem::ReportError(e, "GraphicsDevice initialization failed.");
				return false;
			}

			return true;
		}

		void GraphicsDevice::Dispose()
		{
		}

		void GraphicsDevice::Clear(const Color4 &color)
		{

		}

		void GraphicsDevice::DrawVertices(uint primitiveType, const Vertex* vertices)
		{
		}

		void GraphicsDevice::Present()
		{
		}
	}
}