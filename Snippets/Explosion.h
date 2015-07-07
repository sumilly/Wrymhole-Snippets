#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "Missile.h"
#include "../baseTypes.h"

class Explosion : public Missile
{
public:
	int32_t getExplosionLength();
	void setExplosionLength(int32_t length);
	
	void incrementCounter();
	int32_t getCounter();
	bool8_t burnOut();

	Explosion(float_t radius);
	Explosion();
	virtual void draw();
private:
	int32_t mCounter; //how long the bullet is alive
	int32_t mExplosionLength; //how long it should last
};

#endif

