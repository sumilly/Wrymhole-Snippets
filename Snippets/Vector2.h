#ifndef VECTOR2_H
#define VECTOR2_H

#include <math.h>
#include "../baseTypes.h"

class Vector2
{
public:
	static float_t distance(Vector2 from, Vector2 to);
	static Vector2 scale(Vector2 lhs, Vector2 rhs);
	
	Vector2();
	Vector2(float_t x, float_t y);

	Vector2 operator-(Vector2 other);
	Vector2 operator+(Vector2 other);
	bool8_t operator==(Vector2 other);
	bool8_t operator!=(Vector2 other);

	void normalize();
	float_t getDirection();
	float_t getMagnitude();

	float_t getX();
	void setX(float_t x);
	
	float_t getY();
	void setY(float_t y);
	void setXY(float_t x, float_t y);

private:
	float_t mX;
	float_t mY;
	float_t mDirection;
	float_t mMagnitude;
	float_t findDirection();
	float_t findMagnitude();
};

#endif
