#include "MovingGameObject.h"

float_t MovingGameObject::getXVelocity()
{
	return mXVelocity;
}

void MovingGameObject::setXVelocity(float_t xVelocity)
{
	mXVelocity = xVelocity;
}

float_t MovingGameObject::getYVelocity()
{
	return mYVelocity;
}

void MovingGameObject::setYVelocity(float_t yVelocity)
{
	mYVelocity = yVelocity;
}

void MovingGameObject::setVelocity(float_t xVelocity, float_t yVelocity)
{
	mXVelocity = xVelocity;
	mYVelocity = yVelocity;
}

void MovingGameObject::setGravity(float_t gravity)
{
	mGravity = gravity;
}

float_t MovingGameObject::getGravity()
{
	return mGravity; 
}

