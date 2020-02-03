#pragma once

#include <math.h>
#include "Vector3.h"

class Matrix3
{
public:

	float A11;
	float A12;
	float A13;
    float A21;
	float A22;
	float A23;
	float A31;
	float A32;
	float A33;

	//constructors
	Matrix3();

	Matrix3(gpp::Vector3 row1, gpp::Vector3 row2, gpp::Vector3 row3);

	Matrix3(float _A11, float _A12, float _A13,
		float _A21, float _A22, float _A23,
		float _A31, float _A32, float _A33);

	gpp::Vector3 operator *(gpp::Vector3 V1);

	static Matrix3 Transpose(Matrix3 M1);
	
	 Matrix3 operator +(Matrix3 M2);
	
	 Matrix3 operator -(Matrix3 M2);
	
	 Matrix3 operator *(float x);

	 Matrix3 operator *(Matrix3 M2);

	static float Determinant(Matrix3 M1);

	gpp::Vector3 Row(int i);

	gpp::Vector3 Column(int i);

	static Matrix3 Inverse(Matrix3 M1);

	static Matrix3 Rotation(int _angle);

	static Matrix3 Translate(float dx, float dy);

	static Matrix3 Scale(float dx, float dy);

	 Matrix3 operator -();

	static Matrix3 RotationX(float _angle);

	static Matrix3 RotationY(float _angle);

	static Matrix3 RotationZ(float _angle);
	
	 static Matrix3 Scale3D(int dx);

	 std::string toString()const; //done

};