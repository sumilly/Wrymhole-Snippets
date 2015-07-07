#include "WeaponList.h"
#include "../baseTypes.h"

WeaponList::WeaponList()
{
	mHead = nullptr;
	mCurrent = nullptr;
}

Weapon *WeaponList::getPreviousWeapon()
{
	mCurrent = mCurrent->prevWeapon;
	return mCurrent->weapon;
}

Weapon *WeaponList::getNextWeapon()
{
	mCurrent = mCurrent->nextWeapon;
	return mCurrent->weapon;
}

void WeaponList::addWeapon(Weapon *weapon)
{
	WeaponNode_t *node = new WeaponNode_t;
	node->weapon = weapon;
	if (mHead == NULL)
	{
		mHead = node;
		mHead->nextWeapon = node;
		mHead->prevWeapon = node;
		mCurrent = mHead;
	}
	else
	{
		node->nextWeapon = mHead;
		node->prevWeapon = mHead->prevWeapon;

		mHead->prevWeapon->nextWeapon = node;
		mHead->prevWeapon = node;
	}
}

void WeaponList::removeWeapon(Weapon *weapon)
{
	WeaponNode_t *node = mHead;
	bool8_t found = false;

	do
	{
		if (node->weapon == weapon)
		{
			found = true;
			break;
		}
		node = node->nextWeapon;
	} while (node != mHead);

	if (found)
	{
		node->nextWeapon->prevWeapon = node->prevWeapon;
		node->prevWeapon->nextWeapon = node->nextWeapon;

		if (node == mHead)
		{
			mHead = node->nextWeapon;
		}

		delete(node);
	}
}

WeaponList::~WeaponList()
{
	while (mHead != nullptr)
	{
		WeaponNode* temp = mHead;
		mHead = mHead->nextWeapon;
		temp->weapon->~Weapon();
		delete(temp);
	}

	delete(this);
}
