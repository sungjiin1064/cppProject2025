#include "Image.h"

char SlimeIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
    {"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"    _ _       "},
	{"  _     _     "},
	{" _ ..     _   "},
	{"_ _ _ _ _ _ _ "}
};

char SlimeBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
    {"   _ _        "},
	{" _     _      "},
	{"_ ..     _    "},
	{" _ _       _  "},
	{"    -- --_ _ _"}
};

char SlimeMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"    _ _       "},
	{"  _     _     "},
	{" _ ..     _   "},
	{" _ _ _ _ _ _ _"}
};

extern char PlayerIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"         :    "},
	{"         +    "},
	{"       0/     "},
	{"      /|      "},
	{"      / \\    "}
};

extern char PlayerBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"       0__ +--"},
	{"      /|_     "},
	{"      /  |    "}
	
};

extern char PlayerMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"              "},
	{"         :    "},
	{"         +    "},
	{"     __0/     "},
	{"       |      "},
	{"      / \\    "}
};

