#ifndef AUDIO_MANAGER_H
#define AUDIO_MANAGER_H

#include <string>
#include "../../baseTypes.h"
#include "../../fmod.h"
#include "../../fmod.hpp"

#define NO_OF_CHANNELS 3

using namespace std;

/*Manages the sound system, loads and plays the sounds*/
class AudioManager
{

public:
	static AudioManager *CreateInstance();
	static AudioManager *GetInstance() { return sInstance; };
	~AudioManager();
	void playOneShot(string audioName, bool sfxSound);
	void playOnLoop(string audioName);
	bool isSoundPaused();
	void pause();
	void update();

private:
	static AudioManager *sInstance;
	AudioManager();
	void errorCheck(FMOD_RESULT result,string message);
	void createSounds();

	FMOD::System *mFmodSystem;
	FMOD::Sound *mPlayerSound, *mSfxSound, *mBgndMusic;
	FMOD::Channel *mPlayerChannel, *mSfxChannel, *mBgndChannel;
	FMOD_RESULT mResult;
	bool mSoundPaused;
};

#endif