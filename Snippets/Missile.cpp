#include "Missile.h"
#include <math.h>
#include "ManagerManager.h"

void Missile::fire(float_t angle, float_t power)
{
	mAngle = angle;
	mPower = power;
	setXVelocity(power*cos(angle));
	setYVelocity(power*sin(angle));
}

int32_t Missile::getNumberOfBounces()
{
	return mNumberOfBounces;
}

void Missile::setNumberOfBounces(int32_t bounces)
{
	mNumberOfBounces = bounces;
}

void Missile::draw()
{
	OutputManager::GetInstance()->DrawBullet(mPosition.getX(), mPosition.getY(), getMissileRadius());
}

void Missile::update()
{
	setX(getX() + mXVelocity);
	setY(getY() + mYVelocity);
	mYVelocity -= mGravity;
}

float_t Missile::getExplosionRadius()
{
	return mExplosionRadius;
}
void Missile::setExplosionRadius(float_t radius)
{
	mExplosionRadius = radius;
}

void Missile::setDamage(float_t damage)
{
	mDamage = damage;
}

float_t Missile::getDamage()
{
	return mDamage;
}

float_t Missile::getMissileRadius()
{
	return ((mWidth / 2 + mHeight / 2) / 2);
}

void Missile::reduceNumberOfBounces()
{
	mNumberOfBounces--;
}

void Missile::reducePower(float_t amount)
{
	mPower -= amount;
}