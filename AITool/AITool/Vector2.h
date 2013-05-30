#pragma once

namespace Drawing
{
	class Vector2
	{
	public:
		float X;
		float Y;

		static const Vector2 One;
		static const Vector2 UnitX;
		static const Vector2 UnitY;
		static const Vector2 Zero;

		Vector2();
		Vector2(float value);
		Vector2(float x, float y);
		Vector2(const Vector2 &vector);
		
		float Length() const;
		float LengthSquared() const;
		void Negate();
		void Normalize() const;

		static Vector2 Dot(const Vector2 &vectorA, const Vector2 &vectorB);
		static Vector2 Normalize(const Vector2 &vector);

		Vector2 operator+(const Vector2 &vector);
		Vector2 operator-();
		Vector2 operator-(const Vector2 &vector);
		Vector2 operator*(const Vector2 &vector);
		Vector2 operator/(const Vector2 &vector);

		bool operator==(const Vector2 &vector);
		bool operator!=(const Vector2 &vector);

		Vector2 &operator=(const Vector2 &vector);
		Vector2 &operator+=(const Vector2 &vector);
		Vector2 &operator-=(const Vector2 &vector);
		Vector2 &operator*=(const Vector2 &vector);
		Vector2 &operator/=(const Vector2 &vector);

	private:
		~Vector2();
	};
}