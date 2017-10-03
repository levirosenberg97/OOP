#pragma once
#include "sfwdraw.h"
#pragma once
#include<string>


class GameObject
{
public:
	float posX;
	float posY;
	
	float cooldownQ = .5f;
	float cooldownW = .5f;
	float cooldownE = .5f;
	float cooldownR = .5f;

	std::string name;

	bool enabled;

	//virtual void update();
	//virtual void draw();
};
