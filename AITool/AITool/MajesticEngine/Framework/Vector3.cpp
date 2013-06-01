#include "Vector3.h"

namespace Majestic
{
	namespace Framework
	{
		const Vector3 Vector3::One (1, 1, 1);
		const Vector3 Vector3::UnitX (1, 0, 0);
		const Vector3 Vector3::UnitY (0, 1, 0);
		const Vector3 Vector3::UnitZ (0, 0, 1);
		const Vector3 Vector3::Zero (0, 0, 0);

		Vector3::Vector3()
			: X(0), Y(0), Z(0)
		{ }

		Vector3::Vector3(float value)
			: X(value), Y(value), Z(value)
		{ }

		Vector3::Vector3(float x, float y)
			: X(x), Y(y), Z(0)
		{ }

		Vector3::Vector3(float x, float y, float z)
			: X(x), Y(y), Z(z)
		{ }

		Vector3::Vector3(const Vector3 &vector)
			: X(vector.X), Y(vector.Y), Z(vector.Z)
		{ }

		void Vector3::operator=(const Vector3 &vector)
		{
			this->X = vector.X;
			this->Y = vector.Y;
			this->Z = vector.Z;
		}
	}
}