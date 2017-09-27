#pragma once
#include"GameObject.h"
#include"sfwdraw.h"

class Tap : public GameObject
{
public:


	virtual void draw();
	virtual void update();
};

class Box : public Tap
{
public:
	
	float posX;
	float posY;

	float dimX;
	float dimY;

	virtual void draw(unsigned int color, const char * letter);
};

class Circle : public Box
{
public:

	unsigned int color = WHITE;

	float speedY;
	virtual void draw();
	virtual void update();
};

