#include "GameObject.h"

GameObject::GameObject()
{
	mPosition = *(new Vector2());
}

float_t GameObject::getX()
{
	return mPosition.getX();
}

void GameObject::setX(float_t xValue)
{
	mPosition.setX(xValue);
}

float_t GameObject::getY()
{
	return mPosition.getY();
}

void GameObject::setY(float_t yValue)
{
	mPosition.setY(yValue);
}

void GameObject::setPosition(float_t x, float_t y)
{
	mPosition.setXY(x, y);
}

Vector2 GameObject::getPosition()
{
	return mPosition;
}

Vector2 GameObject::getTopLeft()
{
	return *(new Vector2((mPosition.getX() - (mWidth / 2)), (mPosition.getY() + (mHeight / 2))));
}

Vector2 GameObject::getBottomLeft()
{
	return *(new Vector2((mPosition.getX() - (mWidth / 2)), (mPosition.getY() - (mHeight / 2))));
}

Vector2 GameObject::getTopRight()
{
	return *(new Vector2((mPosition.getX() + (mWidth / 2)), (mPosition.getY() + (mHeight / 2))));
}

Vector2 GameObject::getBottomRight()
{
	return *(new Vector2((mPosition.getX() + (mWidth / 2)), (mPosition.getY() - (mHeight / 2))));
}

void GameObject::setTextureID(int32_t id)
{
	mTextureId = id;
}

int32_t GameObject::getTextureID()
{
	return mTextureId;
}

void GameObject::setTexturePath(string path)
{
	mTexturePath = path;
}

string GameObject::getTexturePath()
{
	return mTexturePath;
}

Vector2 GameObject::getTop()
{
	return *(new Vector2(mPosition.getX(), (mPosition.getY() + (mHeight / 2))));
}

Vector2 GameObject::getBottom()
{
	return *(new Vector2(mPosition.getX(), (mPosition.getY() - (mHeight / 2))));
}

Vector2 GameObject::getLeft()
{
	return *(new Vector2((mPosition.getX() - (mWidth / 2)), mPosition.getY()));
}

Vector2 GameObject::getRight()
{
	return *(new Vector2((mPosition.getX() + (mWidth / 2)), mPosition.getY()));
}

void GameObject::setWidth(float_t width)
{
	mWidth = width;
}

void GameObject::setHeight(float_t height)
{
	mHeight = height;
}

float_t GameObject::getHeight()
{
	return mHeight;
}

float_t GameObject::getWidth()
{
	return mWidth;
}