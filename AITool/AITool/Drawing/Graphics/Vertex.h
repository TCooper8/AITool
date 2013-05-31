#pragma once

#include "../Vector2.h"
#include "../Color4.h"

namespace Drawing
{
	class Vertex
	{
	public:
		// Represents the position-component of this vertex.
		Vector2 Position;
		// Represents the color-component of this vertex.
		Color4 Color;

		// Creates a new instance of Vertex as <default>(default).
		Vertex();
		// Creates a new instance of Vertex as <position>(color).
		Vertex(const Vector2 &position, const Color4 &color);
		// Creates a Vertex copy of the reference vertex.
		Vertex(const Vertex &vertex);

		// Returns the string representation of this object.
		char* ToString() const;

		Vertex &operator=(const Vertex &vertex);
	};
}