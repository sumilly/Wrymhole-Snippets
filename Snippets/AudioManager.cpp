#ifndef PC_AUDIO_MANAGER_CPP
#define PC_AUDIO_MANAGER_CPP

#include "AudioManager.h"
#include <Windows.h>
#include <stdio.h>
#include <gl\gl.h>												// Header File For The OpenGL32 Library
#include <gl\glu.h>												// Header File For The GLu32 Library
#include "..\..\gl\glut.h"

AudioManager* AudioManager::sInstance = NULL;

AudioManager* AudioManager::CreateInstance()
{
	sInstance = new AudioManager();
	return sInstance;
}

AudioManager::AudioManager()
{
	mResult = FMOD::System_Create(&mFmodSystem);
	errorCheck(mResult, "system create");

	mResult = mFmodSystem->init(NO_OF_CHANNELS, FMOD_INIT_NORMAL, NULL);
	errorCheck(mResult, "system init");
}

void AudioManager::update()
{
	mResult = mFmodSystem->update();
	errorCheck(mResult, "update");
}

void AudioManager::errorCheck(FMOD_RESULT result, string message)
{
	if (result != FMOD_OK)
	{
		printf("\nBroke during %s", message);
	}
}

//Plays a sound effect in either the player or sfx channel
void AudioManager::playOneShot(string audioName,bool sfxSound)
{
	FMOD::Sound *sound;
	FMOD::Channel *channel;

	if (sfxSound)
	{
		sound = mSfxSound;
		channel = mSfxChannel;
	}
	else
	{
		sound = mPlayerSound;
		channel = mPlayerChannel;
	}

	mResult = mFmodSystem->createSound(audioName.c_str(), FMOD_LOOP_OFF, NULL, &sound);
	errorCheck(mResult, "sound create");

	mResult = mFmodSystem->playSound(sound, NULL, false, &channel);
	errorCheck(mResult, "sound play");
}

//Loads and plays the background music
void AudioManager::playOnLoop(string audioName)
{
	mResult = mFmodSystem->createSound(audioName.c_str() , FMOD_LOOP_NORMAL | FMOD_2D, NULL, &mBgndMusic);
	errorCheck(mResult, "background music create");

	mResult = mFmodSystem->playSound(mBgndMusic, NULL, false, &mBgndChannel);
	errorCheck(mResult, "background music play");
}

//Free all the sound resources
AudioManager::~AudioManager()
{
	mResult = mPlayerSound->release();
	errorCheck(mResult, "player sound release");

	mResult = mSfxSound->release();
	errorCheck(mResult, "sfx sound release");

	mResult = mBgndMusic->release();
	errorCheck(mResult, "background music release");

	mResult = mFmodSystem->close();
	errorCheck(mResult, "system close");

	mResult = mFmodSystem->release();
	errorCheck(mResult, "system release");
}

bool AudioManager::isSoundPaused()
{
	return mSoundPaused;
}

//Toggles sound pause and play
void AudioManager::pause()
{
	mSoundPaused = !mSoundPaused;
	mPlayerChannel->setPaused(mSoundPaused);
	mSfxChannel->setPaused(mSoundPaused);
	mPlayerChannel->setPaused(mSoundPaused);
}

#endif