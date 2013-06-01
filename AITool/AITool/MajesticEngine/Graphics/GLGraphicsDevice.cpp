#include <string>
#include <glut.h>
#include "GLGraphicsDevice.h"

namespace Majestic
{
	namespace Framework
	{
		namespace Graphics
		{
			GLGraphicsDevice::GLGraphicsDevice()
				: params()
			{ }

			GLGraphicsDevice::GLGraphicsDevice(const GLGraphicsDevice &device)
				: params(device.params)
			{ }

			bool GLGraphicsDevice::Initialize()
			{
				try
				{
					glutInitDisplayMode(params.DisplayMode);
					glutInitWindowSize(params.WindowSizeX, params.WindowSizeY);
					glutInitWindowPosition(params.WindowPositionX, params.WindowPositionY);

					if (params.IsFullScreen)
					{
						char* charBuffer = new char[sizeof(int)];
						std::string modeString;

						itoa(params.WindowSizeX, charBuffer, 10);
						modeString.append(charBuffer);
						modeString.append("x");

						itoa(params.WindowSizeY, charBuffer, 10);
						modeString.append(charBuffer);

						itoa(sizeof(int) * 8, charBuffer, 10);
						modeString.append(":");
						modeString.append(charBuffer);

						glutGameModeString(modeString.c_str());
						this->renderTarget = glutEnterGameMode();
					}
					else
					{
						this->renderTarget = glutCreateWindow("OpenGL window.");
					}

					glClearColor(1, 1, 1, 0);
				}
				catch (int e)
				{
					return false;
				}

				return true;
			}

			void GLGraphicsDevice::DrawPrimitives(uint primitiveType, const VertexPositionColor* vertices, uint startIndex, uint count)
			{
				glBegin(primitiveType);

				for (uint i = startIndex; i < count; i++)
				{
					glColor4ub(
						vertices[i].Color.R,
						vertices[i].Color.G,
						vertices[i].Color.B,
						vertices[i].Color.A);
					glVertex3f(
						vertices[i].Position.X,
						vertices[i].Position.Y,
						vertices[i].Position.Z);
				}

				glEnd();
			}

			void GLGraphicsDevice::Present()
			{
				glutSwapBuffers();
			}
		}
	}
}