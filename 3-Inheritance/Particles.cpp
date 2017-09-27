#include "Particles.h"

#include"sfwdraw.h"

void BaseParticle::update()
{
	posX += speedX;
	posY += speedY;
	if (posX < 0) { posX = 800; }
	if (posY < 0) { posY = 800; }
	if (posX > 800) { posX = 0; }
	if (posY > 800) { posY = 0; }
}

void BaseParticle::draw()
{
	sfw::drawCircle(posX, posY, 7);
}


void BoxParticle::draw()
{
	float halfx = dimX / 2.0f;
	float halfy = dimY / 2.0f;

	//left
	sfw::drawLine(posX - halfx, posY - halfy, posX - halfx, posY + halfy);
	//right
	sfw::drawLine(posX + halfx, posY - halfy, posX + halfx, posY + halfy);
	//top
	sfw::drawLine(posX - halfx, posY + halfy, posX + halfx, posY + halfy);
	//bottom
	sfw::drawLine(posX - halfx, posY - halfy, posX + halfx, posY - halfy);
}