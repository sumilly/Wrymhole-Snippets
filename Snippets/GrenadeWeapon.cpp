#define _USE_MATH_DEFINES

#include "GrenadeWeapon.h"
#include "ManagerManager.h"
#include <math.h>

void GrenadeWeapon::fireMissile(float_t angle, float_t power, Vector2 playerLocation)
{
	Grenade *grenade = new Grenade();
	grenade->setDamage(20);
	grenade->setExplosionRadius(50);
	grenade->setGravity(.15);
	grenade->setNumberOfBounces(GRENADE_BOUNCES);
	grenade->setWidth(2);
	grenade->setHeight(2);
	grenade->setPosition(playerLocation.getX() + (grenade->getMissileRadius() + 50) * cos(angle / 180 * M_PI), playerLocation.getY() + (grenade->getMissileRadius() + 50) * sin(angle / 180 * M_PI));
	grenade->setVelocity(mMaxShotPower * power * cos(angle / 180 * M_PI), mMaxShotPower * power * sin(angle / 180 * M_PI));
	MissileManager::GetInstance()->AddMissile(grenade);
}

GrenadeWeapon::GrenadeWeapon()
{
	mMaxShotPower = 15;
	mAmmo = 99;
}
