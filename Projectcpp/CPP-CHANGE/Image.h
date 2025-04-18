#pragma once

#define UNIT_WIDTH 14
#define UNIT_HEIGHT 5

#include "GameHeader.h"

char CharacterIdle[UNIT_HEIGHT][UNIT_WIDTH + 1];
char CharacterMove[UNIT_HEIGHT][UNIT_WIDTH + 1];
char CharacterBattle[UNIT_HEIGHT][UNIT_WIDTH + 1];

char PlayerIdle[UNIT_HEIGHT][UNIT_WIDTH + 1];
char playerMove[UNIT_HEIGHT][UNIT_WIDTH + 1];
char PlayerBattle[UNIT_HEIGHT][UNIT_WIDTH + 1];

char SlimeIdle[UNIT_HEIGHT][UNIT_WIDTH + 1];
char SlimeMove[UNIT_HEIGHT][UNIT_WIDTH + 1];
char SlimeBattle[UNIT_HEIGHT][UNIT_WIDTH + 1];

char KingSlimeIdle[UNIT_HEIGHT][UNIT_WIDTH + 1];
char KingSlimeMove[UNIT_HEIGHT][UNIT_WIDTH + 1];
char KingSlimeBattle[UNIT_HEIGHT][UNIT_WIDTH + 1];