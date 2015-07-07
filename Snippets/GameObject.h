#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Vector2.h"
#include "../baseTypes.h"
#include <string>

using namespace std;

class GameObject
{
public:
	virtual void update(){};
	virtual void draw(){};

	GameObject();
	float_t getX();
	void setX(float_t xValue);

	float_t getY();
	void setY(float_t yValue);

	void setPosition(float_t x, float_t y);
	Vector2 getPosition();

	void setWidth(float_t width);
	float_t getWidth();
	
	void setHeight(float_t height);
	float_t getHeight();

	Vector2 getTopLeft();
	Vector2 getBottomLeft();
	Vector2 getTopRight();
	Vector2 getBottomRight();
	Vector2 getTop();
	Vector2 getBottom();
	Vector2 getLeft();
	Vector2 getRight();

	void setTextureID(int32_t id);
	int32_t getTextureID();

	void setTexturePath(string path);
	string getTexturePath();

protected:
	Vector2 mPosition;
	float_t mWidth;
	float_t mHeight;
	int32_t mTextureId;
	string mTexturePath;
};
#endif