#include "Rocket.h"
#include "ManagerManager.h"

Rocket::Rocket()
{
	mNumberOfBounces = 0;
}

void Rocket::draw()
{
	OutputManager::GetInstance()->DrawBullet(mPosition.getX(), mPosition.getY(), getMissileRadius());
}

