#ifndef EXPLOSIVEMISSILE_H
#define EXPLOSIVEMISSILE_H

#include "Missile.h"

class ExplosiveMissile : public Missile
{
public:
	void explode();
	virtual void draw(){};
};

#endif