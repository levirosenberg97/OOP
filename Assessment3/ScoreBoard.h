#pragma once
#include "TapBar.h"
#include "Spawner.h"
#include"GameObject.h"
#include "Multiplier.h"

class ScoreBoard : public GameObject
{
public:
	
	 int score = 0;

	

	float dimX;
	float dimY;
	
	void update(Spawner cir);
	void draw(Multiplier sp);
	void SetSCore(Multiplier m);
	void highScore();
	void timedPause(int millisec);
};

