#pragma once

#include "Player.h"
#include "Target.h"

class GameState
{
public:
	Player player;
	Target target;

	void init();
	void update();
	void draw();
};