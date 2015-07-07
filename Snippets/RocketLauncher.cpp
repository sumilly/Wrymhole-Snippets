#define _USE_MATH_DEFINES

#include "RocketLauncher.h"
#include "ManagerManager.h"
#include "Rocket.h"
#include <math.h>

RocketLauncher::RocketLauncher() : Weapon()
{
	mMaxShotPower = 15;
	mAmmo = 99;
}

void RocketLauncher::fireMissile(float_t angle, float_t power, Vector2 playerLocation)
{
	Rocket *rocket = new Rocket();
	rocket->setDamage(40);
	rocket->setExplosionRadius(40);
	rocket->setGravity(.15);
	rocket->setNumberOfBounces(0);
	rocket->setWidth(5);
	rocket->setHeight(5);
	rocket->setPosition(playerLocation.getX() + (rocket->getMissileRadius() + 50) * cos(angle / 180 * M_PI), playerLocation.getY() + (rocket->getMissileRadius() + 50) * sin(angle / 180 * M_PI));
	rocket->setVelocity(mMaxShotPower * power * cos(angle / 180 * M_PI), mMaxShotPower * power * sin(angle / 180 * M_PI));
	MissileManager::GetInstance()->AddMissile(rocket);
}