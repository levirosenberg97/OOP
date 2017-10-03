#pragma once
#include "TapBar.h"
#include "Spawner.h"

class ScoreBoard : public Spawner
{
public:
	
	static int score;

	void update(Spawner cir);
	void draw();
};