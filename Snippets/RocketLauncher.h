#ifndef ROCKET_LAUNCHER_H
#define ROCKET_LAUNCHER_H

#include "Weapon.h"

//the Rocket Launcher weapon
class RocketLauncher : public Weapon
{
public:
	RocketLauncher();
	virtual void fireMissile(float_t angle, float_t power, Vector2 playerLocation);
};

#endif