#ifndef PC_SPRITE_MANAGER_CPP
#define PC_SPRITE_MANAGER_CPP

#include "SpriteManager.h"
#include <Windows.h>
#include <stdio.h>
#include <gl\gl.h>												// Header File For The OpenGL32 Library
#include <gl\glu.h>												// Header File For The GLu32 Library
#include "..\..\gl\glut.h"
#include "..\SOIL.h"


SpriteManager* SpriteManager::sInstance = NULL;

SpriteManager* SpriteManager::CreateInstance()
{
	sInstance = new SpriteManager();
	return sInstance;
}

int SpriteManager::LoadSprite(const std::string& fileName)
{
	GLuint texture = SOIL_load_OGL_texture(fileName.c_str(), SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT);

	return texture;
}

#endif