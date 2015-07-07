#ifndef WEAPON_LIST_H
#define WEAPON_LIST_H

#include "Weapon.h"

//Node structure for Circular Linked List
struct WeaponNode 
{
	Weapon *weapon;
	struct WeaponNode *nextWeapon;
	struct WeaponNode *prevWeapon;
};

typedef struct WeaponNode WeaponNode_t;

class WeaponList : public GameObject
{
public:
	void addWeapon(Weapon *weapon);
	void removeWeapon(Weapon *weapon);
	Weapon *getNextWeapon();
	Weapon *getPreviousWeapon();
	WeaponList();
	~WeaponList();
	
private:
	WeaponNode_t *mHead;
	WeaponNode_t *mCurrent;
};

#endif