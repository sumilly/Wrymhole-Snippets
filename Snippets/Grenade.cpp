#include "Grenade.h"
#include "ManagerManager.h"

Grenade::Grenade()
{
	mNumberOfBounces = GRENADE_BOUNCES;
}

void Grenade::draw()
{
	OutputManager::GetInstance()->DrawBullet(mPosition.getX(), mPosition.getY(), getMissileRadius());
}
