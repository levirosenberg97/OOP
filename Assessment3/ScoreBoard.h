#pragma once
#include "TapBar.h"
#include "Spawner.h"
#include"GameObject.h"
#include "Multiplier.h"

class ScoreBoard : public GameObject
{
public:
	
	static int score;

	

	float dimX;
	float dimY;
	
	void update(Spawner cir);
	void draw(Multiplier sp);

	void highScore();
	void timedPause(int millisec);
};

