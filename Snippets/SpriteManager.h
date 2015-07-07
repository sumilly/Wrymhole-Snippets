#ifndef SPRITE_MANAGER_H
#define SPRITE_MANAGER_H

#include "../../baseTypes.h"
#include <string>

/*Loads, manages the sprites in the scene*/
class SpriteManager
{

public:
	static SpriteManager *CreateInstance();
	static SpriteManager *GetInstance() { return sInstance; };
	~SpriteManager() = default;
	int LoadSprite(const std::string& fileName);

private:
	static SpriteManager *sInstance;
	SpriteManager(){};
};

#endif