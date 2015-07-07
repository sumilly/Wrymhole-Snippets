#include "MovingGameObject.h"

#ifndef MISSILE_H
#define MISSILE_H

class Missile : public MovingGameObject
{
public:
	void fire(float_t angle, float_t power);
	float_t getExplosionRadius();
	void setExplosionRadius(float_t radius);
	void setDamage(float_t damage);
	float_t getDamage();
	float_t getMissileRadius();
	int32_t getNumberOfBounces();
	void setNumberOfBounces(int32_t bounces);
	void reduceNumberOfBounces();
	void reducePower(float_t amount);
	virtual void update();
	virtual void draw();

protected:
	float_t mExplosionRadius;
	float_t mDamage;
	float_t mAngle;
	float_t mPower;
	int32_t mNumberOfBounces;
};

#endif
