#pragma once
#include "TapBar.h"

class ScoreBoard : public Circle
{
public:
	int score = 0;
	void update(Circle cir);
	void draw();
};