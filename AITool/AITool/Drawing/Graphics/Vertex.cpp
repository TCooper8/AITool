#include <string>
#include "Vertex.h"

namespace Drawing
{
	Vertex::Vertex()
		: Position(), Color()
	{ }

	Vertex::Vertex(const Vector2 &position, const Color4 &color)
		: Position(position), Color(color)
	{ }

	Vertex::Vertex(const Vertex &vertex)
		: Position(vertex.Position), Color(vertex.Color)
	{ }

	char* Vertex::ToString() const
	{
		char* bufferPosition;
		char* bufferColor;
		std::string str;

		bufferPosition = this->Position.ToString();
		bufferColor = this->Color.ToString();

		str.append(bufferPosition);
		str.append(bufferColor);

		char* out = new char[str.length()];
		std::strcpy(out, str.c_str());

		return out;
	}

	Vertex &Vertex::operator=(const Vertex &vertex)
	{
		this->Position = vertex.Position;
		this->Color = vertex.Color;

		return *this;
	}
}