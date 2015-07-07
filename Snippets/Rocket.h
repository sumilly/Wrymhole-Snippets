#ifndef ROCKET_H
#define ROCKET_H

#include "ExplosiveMissile.h"

class Rocket : public ExplosiveMissile
{
public:
	Rocket();
	virtual void draw();
};

#endif