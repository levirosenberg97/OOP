#pragma once
#include"GameObject.h"
#include"sfwdraw.h"
#include "Multiplier.h"
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
	float lifetime = 5;
	unsigned int color = WHITE;

	unsigned int violin = sfw::loadSound("Viola.wav");
	unsigned int oca = sfw::loadSound("Ocarina.Wav");
	unsigned int trom = sfw::loadSound("Trom.wav");
	unsigned int gui = sfw::loadSound("String.wav");
	unsigned int tec = sfw::loadSound("tech.wav");


	float speedY;
	virtual void draw(Multiplier& m);
	virtual void update(Multiplier& m);
};



