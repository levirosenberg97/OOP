#include "TapBar.h"
#include"sfwdraw.h"


void Tap::draw()
{
	sfw::drawLine(0, 150, 1280, 150,WHITE);
	sfw::drawLine(0, 250, 1280, 250,WHITE);
}

void Tap::update()
{
}

void Box::draw(unsigned int color, const char * letter)
{
	float halfx = dimX / 2.0f;
	float halfy = dimY / 2.0f;
	//change the square and letter to white
	if (sfw::getKey('R') && posY <= 225 && posY >= 175 && posX == 800)
	{
		color = WHITE;
	}

	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), letter, posX - 40, posY+40, 80, 80, 0.0f, '\000', color);
	//left
	sfw::drawLine(posX - halfx, posY - halfy, posX - halfx, posY + halfy, color);
	//right
	sfw::drawLine(posX + halfx, posY - halfy, posX + halfx, posY + halfy, color);
	//top
	sfw::drawLine(posX - halfx, posY + halfy, posX + halfx, posY + halfy, color);
	//bottom
	sfw::drawLine(posX - halfx, posY - halfy, posX + halfx, posY - halfy, color);

	
}

void Circle::draw()
{
	int counter = 0;


	if (posX == 350)
	{
		color = GREEN;
	}
	else if (posX == 500)
	{
		color = RED;
	}
	else if (posX == 650)
	{
		color = YELLOW;
	}
	else if (posX == 800)
	{
		color = BLUE;
	}
	else if (posX == 950)
	{
		color = CYAN;
	}

	if (sfw::getKey('R') && posY <= 225 && posY >= 175 && posX == 800)
	{
		color = WHITE;
	}

	sfw::drawCircle(posX, posY, 40, 12U, color);
}

void Circle::update()
{
	


}