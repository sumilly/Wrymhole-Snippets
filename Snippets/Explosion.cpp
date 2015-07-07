#include "Explosion.h"
#include "ManagerManager.h"

void Explosion::setExplosionLength(int32_t length)
{
	mExplosionLength = length;
}

int32_t Explosion::getExplosionLength()
{
	return mExplosionLength;
}

void Explosion::incrementCounter()
{
	mCounter++;
}

int32_t Explosion::getCounter()
{
	return mCounter;
}

bool8_t Explosion::burnOut()
{
	if (mCounter >= mExplosionLength)
	{
		return true;
	}
	return false;
}

void Explosion::draw()
{
	OutputManager::GetInstance()->DrawExplosion(getX(), getY(), mExplosionRadius);
}

Explosion::Explosion(float_t radius)
{
	mExplosionRadius = radius;
	mExplosionLength = 10;
	mCounter = 0;
}

Explosion::Explosion()
{
	mExplosionLength = 10;
	mCounter = 0;
}