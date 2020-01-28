#pragma once

#include <math.h>
#include <string>
#include <iostream>

namespace gpp
{
	class Vector3
	{
	public:
		float x;
		float y;
		float z;

		Vector3();
		Vector3(float x1, float y1, float z1);

		float Length();

		float LengthSquared();

		void Normalise();

		Vector3 operator +(Vector3 V2);

		Vector3 operator -(Vector3 V2);

		Vector3 operator -();

		float operator *(Vector3 V2);

		Vector3 operator *(float k);

		Vector3 operator *(int k);

		Vector3 operator ^(Vector3 V2);

		Vector3 Rotate(int _angle);

		std::string ToString();
	};
}
