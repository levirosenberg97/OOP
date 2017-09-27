#pragma once
#include"Closed.h"


class BaseParticle : public GameObject
{
public:
	float posX;
	float posY;

	float speedX;
	float speedY;

	virtual void update() override;
	virtual void draw() override;
};

class BoxParticle : public BaseParticle
{

public:
	float dimX;
	float dimY;

	virtual void draw() override;
	
};