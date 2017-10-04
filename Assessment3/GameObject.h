#pragma once
#include "sfwdraw.h"
#pragma once
#include<string>


class GameObject
{
public:
	float posX;
	float posY;
	
	
	double cooldownR = .00000000001f;

	std::string name;

	bool enabled;

	//virtual void update();
	//virtual void draw();
};
