#include "objects.h"
#include"sfwdraw.h"

void Circle::draw()
{
	sfw::drawCircle(posX, posY, radius,12U,MAGENTA);
}

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY, MAGENTA);
}

void Box::update()
{
	if (sfw::getKey('W'))
	{
		height+=2;
	}
	if (sfw::getKey('S'))
	{
		height-=2;
	}
	if (sfw::getKey('A'))
	{
		width-=2;
	}
	if (sfw::getKey('D'))
	{
		width+=2;
	}

}

void Box::draw()
{
	sfw::drawLine(width, height, width, height * 2, WHITE);
	sfw::drawLine(width * 2, height, width * 2, height * 2, WHITE);
	sfw::drawLine(width, height, width * 2, height, WHITE);
	sfw::drawLine(width, height * 2, width * 2, height * 2, WHITE);

}



