#include <sstream>
#include <string>
#include <math.h>
#include <algorithm>
#include "Vector2.h"

namespace Drawing
{
	const Vector2 Vector2::One		(1.0f, 1.0f);
	const Vector2 Vector2::UnitX	(1.0f, 0.0f);
	const Vector2 Vector2::UnitY	(0.0f, 1.0f);
	const Vector2 Vector2::Zero		(0.0f, 0.0f);

	#pragma region Constructors

	Vector2::Vector2()
		: X(0), Y(0)
	{ }

	Vector2::Vector2(float value)
		: X(value), Y(value)
	{ }

	Vector2::Vector2(float x, float y)
		: X(x), Y(y)
	{ }

	Vector2::Vector2(const Vector2 &vector)
		: X(vector.X), Y(vector.Y)
	{ }

	#pragma endregion
	#pragma region Methods

	float Vector2::Length() const
	{
		return sqrt(this->LengthSquared());
	}

	float Vector2::LengthSquared() const
	{
		return (
			pow(this->X, 2) +
			pow(this->Y, 2));
	}

	void Vector2::Negate()
	{
		this->X *= -1;
		this->Y *= -1;
	}

	void Vector2::Normalize()
	{
		float length = this->Length();
		this->X /= length;
		this->Y /= length;
	}

	char* Vector2::ToString() const
	{
		std::ostringstream ss;

		ss << "<" 
			<< this->X 
			<< ", " 
			<< this->Y
			<< ">";

		std::string str = ss.str();
		char* out = new char[str.length()];
		std::strcpy(out, str.c_str());

		return out;
	}

	#pragma endregion
	#pragma region Functions

	Vector2 Vector2::Clamp(const Vector2 &v, const Vector2 &min, const Vector2 &max)
	{
		return Vector2::Max(Vector2::Min(v, max), min);
	}

	float Vector2::Dot(const Vector2 &a, const Vector2 &b)
	{
		return (
			a.X * b.X +
			a.Y * b.Y );
	}

	float Vector2::Distance(const Vector2 &vectorA, const Vector2 &vectorB)
	{
		return sqrt(Vector2::DistanceSquared(vectorA, vectorB));
	}

	float Vector2::DistanceSquared(const Vector2 &vectorA, const Vector2 &vectorB)
	{
		return (
			pow(vectorA.X, 2) +
			pow(vectorB.X, 2));
	}

	Vector2 Vector2::Normalize(const Vector2 &vector)
	{
		float length = vector.Length();
		
		return Vector2(
			vector.X / length,
			vector.Y / length);
	}

	Vector2 Vector2::Max(const Vector2 &vector, const Vector2 &max)
	{
		return Vector2(
			std::max(vector.X, max.X),
			std::max(vector.Y, max.Y));
	}

	Vector2 Vector2::Min(const Vector2 &vector, const Vector2 &min)
	{
		return Vector2(
			std::min(vector.X, min.X),
			std::min(vector.Y, min.Y));
	}

	#pragma endregion
	#pragma region Operator Overloads

	Vector2 Vector2::operator*(const Vector2 &vector)
	{
		return Vector2(
			this->X * vector.X, 
			this->Y * vector.Y);
	}

	Vector2 &Vector2::operator*=(const Vector2 &vector)
	{
		*this = *this * vector;

		return *this;
	}

	Vector2 Vector2::operator+(const Vector2 &vector)
	{
		return Vector2(
			this->X + vector.X, 
			this->Y + vector.Y);
	}

	Vector2 &Vector2::operator+=(const Vector2 &vector)
	{
		*this = *this + vector;

		return *this;
	}

	Vector2 Vector2::operator-()
	{
		return Vector2(
			-this->X, 
			-this->Y);
	}

	Vector2 Vector2::operator-(const Vector2 &vector)
	{
		return Vector2(
			this->X - vector.X,
			this->Y - vector.Y);
	}

	Vector2 &Vector2::operator-=(const Vector2 &vector)
	{
		*this = *this - vector;

		return *this;
	}

	Vector2 Vector2::operator/(const Vector2 &vector)
	{
		float x = (vector.X == 0) ? 
			0 : this->X / vector.X;
		float y = (vector.Y == 0) ?
			0 : this->Y / vector.Y;

		return Vector2(x, y);
	}

	Vector2 &Vector2::operator/=(const Vector2 &vector)
	{
		*this = *this / vector;

		return *this;
	}

	Vector2 &Vector2::operator=(const Vector2 &vector)
	{
		this->X = vector.X;
		this->Y = vector.Y;

		return *this;
	}

	bool Vector2::operator==(const Vector2 &vector)
	{
		return (
			this->X == vector.X &&
			this->Y == vector.Y );
	}

	bool Vector2::operator!=(const Vector2 &vector)
	{
		return !(*this == vector);
	}

	#pragma endregion
}