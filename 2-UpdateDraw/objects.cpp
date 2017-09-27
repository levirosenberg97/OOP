#include "..\Assessment3\TapBar.h"
#include "objects.h"
#include"sfwdraw.h"

void Circle::draw()
{
	sfw::drawCircle(posX, posY, radius);
}

void Circle::update()
{
}

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void Box::draw()
{
	//bottom
	sfw::drawLine(bleftX, bleftY, toprigX, bleftY);
	//left
	sfw::drawLine(bleftX, bleftY, bleftX, toprigY);
	//top
	sfw::drawLine(bleftX, toprigY, toprigX, toprigY);
	//right
	sfw::drawLine(toprigX, toprigY, toprigX, bleftY);
}



