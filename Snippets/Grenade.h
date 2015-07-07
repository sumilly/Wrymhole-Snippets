#include "ExplosiveMissile.h"
#define GRENADE_BOUNCES 3

class Grenade : public ExplosiveMissile
{
public:
	Grenade();
	virtual void draw();

};