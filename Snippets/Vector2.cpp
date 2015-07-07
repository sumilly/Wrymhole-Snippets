#include "Vector2.h"
#include "../baseTypes.h"

Vector2::Vector2(float_t x, float_t y)
{
	mX = x;
	mY = y;
	mMagnitude = findMagnitude();
	mDirection = findDirection();
}

Vector2::Vector2()
{
	mX = 0;
	mY = 0;
	mDirection = 0;
	mMagnitude = 0;
}

float_t Vector2::getMagnitude()
{
	return mMagnitude;
}

Vector2 Vector2::scale(Vector2 lhs, Vector2 rhs)
{
	lhs.mX *= rhs.mX;
	lhs.mY *= rhs.mY;
	return lhs;
}

Vector2 Vector2::operator-(Vector2 other)
{
	other.mX-=mX;
	other.mY-=mY;
	return other;
}

Vector2 Vector2::operator+(Vector2 other)
{
	other.mX += mX;
	other.mY += mY;
	return other;
}

float_t Vector2::getDirection()
{
	return mDirection;
}

bool8_t Vector2::operator==(Vector2 other)
{
	if ((mMagnitude - other.mMagnitude) < 0.1f && (mDirection - other.mDirection) < 0.1f)
	{
		return true;
	}
	return false;
}

bool8_t Vector2::operator!=(Vector2 other)
{
	return !(*this == other);
}

float_t Vector2::findDirection()
{
	return atan(mY / mX);
}

float_t Vector2::findMagnitude()
{
	return sqrtf((mX*mX) + (mY*mY));
}

float_t Vector2::distance(Vector2 from, Vector2 to)
{
	float_t xDiff = to.mX - from.mX;
	float_t yDiff = to.mY - from.mY;
	return sqrt((xDiff*xDiff) + (yDiff*yDiff));
}

void Vector2::normalize()
{
	mX /= mMagnitude;
	mY /= mMagnitude;
}

float_t Vector2::getX()
{
	return mX;
}

float_t Vector2::getY()
{
	return mY;
}

void Vector2::setX(float_t x)
{
	mX = x;
}

void Vector2::setY(float_t y)
{
	mY = y;
}

void Vector2::setXY(float_t x, float_t y)
{
	mX = x;
	mY = y;
}
