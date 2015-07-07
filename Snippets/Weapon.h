#ifndef WEAPON_H
#define WEAPON_H

#include "GameObject.h"
#include "Missile.h"
#include "Vector2.h"

class Weapon : public GameObject
{
public:
	Weapon(){};
	~Weapon(){};

	int32_t getAmmo();
	void setAmmo(int32_t ammo);
	void addAmmo(int32_t ammo);

	void setMaxShotPower(float_t shotPower);

	virtual void update(){};
	virtual void draw(){};
	virtual void fireMissile(float_t angle, float_t power, Vector2 playerPosition){};
protected:
	int32_t mAmmo;
	float_t mMaxShotPower;
};

#endif
