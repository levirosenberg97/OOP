#include "TapBar.h"
#include"sfwdraw.h"
#include <iostream>
#include "ScoreBoard.h"
#include <Windows.h>



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
	if (sfw::getKey('R') && posX == 800 && cooldownR > 0)
	{
		color = WHITE;
		cooldownR-= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownR <= 0 && sfw::getKey('R'))
		{
			cooldownR = 0;
			
		}
		else
		{
			do
			{
				cooldownR += sfw::getDeltaTime();
				if (cooldownR >= .5f)
				{
					cooldownR = .5f;
				}
			} while (cooldownR <= 0 && cooldownR < .5f);
		}
	}

	if (sfw::getKey('Q') && posX == 350 && cooldownQ > 0)
	{
		color = WHITE;
		cooldownQ -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownQ <= 0 && sfw::getKey('Q'))
		{
			cooldownQ = 0;
		}
		else
		{
			do
			{
				cooldownQ += sfw::getDeltaTime();
				if (cooldownQ >= .5f)
				{
					cooldownQ = .5f;
				}
			} while (cooldownQ <= 0 && cooldownQ < .5f);
		}
	}

	if (sfw::getKey('W') && posX == 500 && cooldownW > 0)
	{
		color = WHITE;
		cooldownW -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownW <= 0 && sfw::getKey('W'))
		{
			cooldownW = 0;
		}
		else
		{
			do
			{
				cooldownW += sfw::getDeltaTime();
				if (cooldownW >= .5f)
				{
					cooldownW = .5f;
				}
			} while (cooldownW <= 0 && cooldownW < .5f);
		}
	}

	if (sfw::getKey('E') && posX == 650 && cooldownE > 0)
	{
		color = WHITE;
		cooldownE -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownE <= 0 && sfw::getKey('E'))
		{
			cooldownE = 0;
		}
		else
		{
			do
			{
				cooldownE += sfw::getDeltaTime();
				if (cooldownE >= .5f)
				{
					cooldownE = .5f;
				}
			} while (cooldownE <= 0 && cooldownE < .5f);
		}

	}
	
	//Draws the Square with the letter in it

	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), letter, posX - 40, posY + 40, 80, 80, 0.0f, '\000', color);
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

	//colors the circle based on position

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

	//changes the circle white

	if (sfw::getKey('R') && posY <= 290 && posY >= 110 && posX == 800 && cooldownR > 0)
	{
			color = WHITE;
			ScoreBoard::score+=156;
			enabled = false;
			cooldownR -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownR <= 0 && sfw::getKey('R'))
		{
			cooldownR = 0;

		}
		else
		{
			do
			{
				cooldownR += sfw::getDeltaTime();
				if (cooldownR >= .5f)
				{
					cooldownR = .5f;
				}
			} while (cooldownR <= 0 && cooldownR < .5f);
		}
	}

	if (sfw::getKey('Q') && posY <= 290 && posY >= 110 && posX == 350 && cooldownQ > 0)
	{
			color = WHITE;
			ScoreBoard::score+=156;
			enabled = false;
			cooldownQ -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownQ <= 0 && sfw::getKey('Q'))
		{
			cooldownQ = 0;

		}
		else
		{
			do
			{
				cooldownQ += sfw::getDeltaTime();
				if (cooldownQ >= .5f)
				{
					cooldownQ= .5f;
				}
			} while (cooldownQ <= 0 && cooldownQ < .5f);
		}
	}

	if (sfw::getKey('W') && posY <= 290 && posY >= 110 && posX == 500 && cooldownW > 0)
	{
			color = WHITE;
			ScoreBoard::score+=156;
			enabled = false;
			cooldownW -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownW <= 0 && sfw::getKey('W'))
		{
			cooldownW = 0;

		}
		else
		{
			do
			{
				cooldownW += sfw::getDeltaTime();
				if (cooldownW >= .5f)
				{
					cooldownW = .5f;
				}
			} while (cooldownW <= 0 && cooldownW < .5f);
		}
	}

	if (sfw::getKey('E') && posY <= 290 && posY >= 110 && posX == 650 && cooldownE > 0)
	{
			color = WHITE;
			ScoreBoard::score+=156;	
			enabled = false;
			cooldownE -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownE <= 0 && sfw::getKey('E'))
		{
			cooldownE = 0;

		}
		else
		{
			do
			{
				cooldownE += sfw::getDeltaTime();
				if (cooldownE >= .5f)
				{
					cooldownE = .5f;
				}
			} while (cooldownE <= 0 && cooldownE < .5f);
		}
	}


	sfw::drawCircle(posX, posY, 40, 12U, color);
}

void Circle::update()
{
	posY -= speedY;
}

