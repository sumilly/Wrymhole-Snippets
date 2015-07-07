#include "Weapon.h"
#include "Grenade.h"

#ifndef GRENADE_WEAPON_H
#define GRENADE_WEAPON_H

class GrenadeWeapon : public Weapon
{
public:
	virtual void fireMissile(float_t angle, float_t power, Vector2 playerLocation);
	GrenadeWeapon();
};

#endif