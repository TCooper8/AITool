#include "Viewport.h"

namespace Drawing
{
	namespace Graphics
	{
		Viewport::Viewport(int x, int y, int width, int height)
			: aspectRatio((float)width / (float)height),
			bounds(x, y, width, height)
		{ }

		Viewport::Viewport(const Viewport &viewport)
			: aspectRatio(viewport.aspectRatio),
			bounds(viewport.bounds)
		{ }

		float Viewport::GetAspectRatio() const
		{
			return this->aspectRatio;
		}

		const Rectangle const &Viewport::GetBounds() const
		{
			return this->bounds;
		}

		int Viewport::GetHeight() const
		{
			return this->bounds.Height;
		}

		int Viewport::GetWidth() const
		{
			return this->bounds.Width;
		}

		int Viewport::GetX() const
		{
			return this->bounds.X;
		}

		int Viewport::GetY() const
		{
			return this->bounds.Y;
		}

		void Viewport::SetHeight(int height)
		{
			this->bounds.Height = height;
		}

		void Viewport::SetWidth(int width)
		{
			this->bounds.Width = width;
		}

		void Viewport::SetX(int x)
		{
			this->bounds.X = x;
		}

		void Viewport::SetY(int y)
		{
			this->bounds.Y = y;
		}
	}
}