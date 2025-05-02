#pragma once

#include <Windows.h> 
#include <tchar.h>
#include <random>

class SoundUtil
{
public: 
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};

class RandomUtil
{
public:
	static int GetRandomInt(int range);
};

class ConsoleUtil
{
public:
	static void GoToXY(int x, int y);
};


