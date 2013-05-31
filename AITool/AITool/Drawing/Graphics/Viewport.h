#pragma once

#include "../Rectangle.h"

namespace Drawing
{
	namespace Graphics
	{
		class Viewport
		{
			float aspectRatio;
			Rectangle bounds;

		public:
			Viewport(int x, int y, int width, int height);
			Viewport(const Viewport &viewport);

			float GetAspectRatio() const;
			const Rectangle const &GetBounds() const;
			int GetHeight() const;
			int GetWidth() const;
			int GetX() const;
			int GetY() const;

			void SetHeight(int height);
			void SetWidth(int width);
			void SetX(int x);
			void SetY(int y);
		};
	}
}