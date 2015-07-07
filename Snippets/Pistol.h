#ifndef PISTOL_H
#define PISTOL_H

#include "Weapon.h"

class Pistol : public Weapon
{
public:
	Pistol();
	virtual void fireMissile(float_t angle, float_t power, Vector2 playerLocation);
};

#endif