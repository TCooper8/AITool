#pragma once

namespace Majestic
{
	namespace Framework
	{
		class Vector3
		{
		public:
			float X;
			float Y;
			float Z;

			static const Vector3 One;
			static const Vector3 UnitX;
			static const Vector3 UnitY;
			static const Vector3 UnitZ;
			static const Vector3 Zero;

			// Creates a new Vector3 with all components set to 0.
			Vector3();
			// Creates a new Vector3 with all components set to value.
			Vector3(float value);
			// Creates a new Vector3 with x and y components set to their respective parameter, z is set to 0.
			Vector3(float x, float y);
			// Creates a new Vector3 with x, y and z components set to their respective parameter.
			Vector3(float x, float y, float z);
			// Creates a new Vector3 with it's components copied from the reference Vector3.
			Vector3(const Vector3 &vector);

			void operator=(const Vector3 &vector);
		};
	}
}