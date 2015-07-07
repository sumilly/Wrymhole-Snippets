#define _USE_MATH_DEFINES

#include "Pistol.h"
#include "Missile.h"
#include "ManagerManager.h"

Pistol::Pistol()
{
	mMaxShotPower = 15;
	mAmmo = 99;
}

void Pistol::fireMissile(float_t angle, float_t power, Vector2 playerLocation)
{
	Missile *missile = new Missile();
	missile->setDamage(20);
	missile->setExplosionRadius(1);
	missile->setGravity(.15);
	missile->setNumberOfBounces(0);
	missile->setWidth(2);
	missile->setHeight(2);
	missile->setPosition(playerLocation.getX() + (missile->getMissileRadius() + 50) * cos(angle / 180 * M_PI), playerLocation.getY() + (missile->getMissileRadius() + 50) * sin(angle / 180 * M_PI));
	missile->setVelocity(mMaxShotPower * power * cos(angle / 180 * M_PI), mMaxShotPower * power * sin(angle / 180 * M_PI));
	MissileManager::GetInstance()->AddMissile(missile);
}