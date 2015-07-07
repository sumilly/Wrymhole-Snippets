#include "Weapon.h"

void Weapon::setAmmo(int32_t ammo)
{
	mAmmo = ammo;
}

void Weapon::addAmmo(int32_t ammo)
{
	mAmmo += ammo;
}

int32_t Weapon::getAmmo()
{
	return mAmmo;
}

void Weapon::setMaxShotPower(float_t shotPower)
{
	mMaxShotPower = shotPower;
}
