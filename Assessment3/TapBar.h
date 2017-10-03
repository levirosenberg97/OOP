#pragma once
#include"GameObject.h"
#include"sfwdraw.h"

class Tap : public GameObject
{
public:


	virtual void draw();
	virtual void update();
};

class Box : public GameObject
{
public:




	float dimX;
	float dimY;

	virtual void draw(unsigned int color, const char * letter);
};

class Circle : public GameObject
{
public:

	unsigned int color = WHITE;

	float speedY;
	virtual void draw();
	virtual void update();
};



