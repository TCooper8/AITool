#pragma once

namespace Drawing
{
	// Defines a vector with two components as <x, y>.
	class Vector2
	{
	public:
		float X;
		float Y;

		// Represents the vector <1, 1>.
		static const Vector2 One;
		// Represents the vector <1, 0>.
		static const Vector2 UnitX;
		// Represents the vector <0, 1>.
		static const Vector2 UnitY;
		// Represents the vector <0, 0>.
		static const Vector2 Zero;

		// Creates a new instance of Vector2 as <0, 0>.
		Vector2();
		// Creates a new instance of Vector2 as <value, value>.
		Vector2(float value);
		// Creates a new instance of Vector2 as <x, y>.
		Vector2(float x, float y);
		// Copies the respective components of a reference vector.
		Vector2(const Vector2 &vector);
		~Vector2() { }
		
		// Returns the length of this vector.
		float Length() const;
		// Returns the length squared of this vector.
		float LengthSquared() const;
		// Multiplies this vectors components by -1.
		void Negate();
		// Constrains the length of this vector to 1, and leaves the vector pointing in the same direction.
		void Normalize();
		// Returns a char* representation of this vector.
		char* ToString() const;

		// Constricts a vector between two values.
		static Vector2 Clamp(const Vector2 &vector, const Vector2 &min, const Vector2 &max);
		// Returns the dot product of two vectors.
		static float Dot(const Vector2 &vectorA, const Vector2 &vectorB);
		// Returns the distance between two vectors.
		static float Distance(const Vector2 &vectorA, const Vector2 &vectorB);
		// Returns the distance squared between two vectors.
		static float DistanceSquared(const Vector2 &vectorA, const Vector2 &vectorB);
		// Returns the similar vector with a length of one.
		static Vector2 Normalize(const Vector2 &vector);
		// Returns the larger of two vectors.
		static Vector2 Max(const Vector2 &vector, const Vector2 &max);
		// Returns the smaller of two vectors.
		static Vector2 Min(const Vector2 &vector, const Vector2 &min);
		
		Vector2 operator*(const Vector2 &vector);
		Vector2 &operator*=(const Vector2 &vector);
		Vector2 operator+(const Vector2 &vector);
		Vector2 &operator+=(const Vector2 &vector);
		Vector2 operator-();
		Vector2 operator-(const Vector2 &vector);
		Vector2 &operator-=(const Vector2 &vector);
		Vector2 operator/(const Vector2 &vector);
		Vector2 &operator/=(const Vector2 &vector);
		Vector2 &operator=(const Vector2 &vector);
		bool operator==(const Vector2 &vector);
		bool operator!=(const Vector2 &vector);
	};
}