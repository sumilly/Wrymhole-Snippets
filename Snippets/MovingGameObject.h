#include "GameObject.h"

#ifndef MOVINGGAMEOBJECT_H
#define MOVINGGAMEOBJECT_H

//A game object with additional properties for movement
class MovingGameObject : public GameObject
{
public:
	float_t getXVelocity();
	void setXVelocity(float_t xVelocity);
	float_t getYVelocity();
	void setYVelocity(float_t yVelocity);
	void setVelocity(float_t xVelocity, float_t yVelocity);
	void setGravity(float_t gravity);
	float_t getGravity();

	virtual void update(){};
	virtual void draw(){};
protected:
	float_t mXVelocity;
	float_t mYVelocity;
	float_t mGravity;
};

#endif
