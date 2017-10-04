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
	if (sfw::getKey(*letter) && cooldownR > 0)
	{
		color = WHITE;
		cooldownR-= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownR <= 0 && sfw::getKey(*letter))
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

void Circle::draw(Multiplier &m)
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
	else if (posX == 950)
	{
		color = CYAN;
	}

	//changes the circle white

	if (sfw::getKey('R') && posY <= 290 && posY >= 110 && posX == 800 && cooldownR > 0)
	{
			color = WHITE;
			ScoreBoard::score += 156 * m.multiplier;
			
			enabled = false;
			sfw::playSound(violin,false);
			if (m.multiplier < 8 && posY <= 290 && posY >= 110 && sfw::getKey('R'))
			{
				m.multiplier++;
			}
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
				if (cooldownR >= .0000000001f)
				{
					cooldownR = .0000000001f;
				}
			} while (cooldownR <= 0 && cooldownR < .0000000001f);
		}
	}

	if (sfw::getKey('Q') && posY <= 290 && posY >= 110 && posX == 350 && cooldownR > 0)
	{
			color = WHITE;
			ScoreBoard::score += 156 * m.multiplier;
			enabled = false;
			sfw::playSound(oca, false);
			if (m.multiplier < 8 && posY <= 290 && posY >= 110 && sfw::getKey('Q'))
			{
				m.multiplier++;
			}
			cooldownR-= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownR <= 0 && sfw::getKey('Q'))
		{
			cooldownR = 0;

		}
		else
		{
			do
			{
				cooldownR += sfw::getDeltaTime();
				if (cooldownR >= .0000000001f)
				{
					cooldownR= .0000000001f;
				}
			} while (cooldownR <= 0 && cooldownR < .0000000001f);
		}
	}

	if (sfw::getKey('W') && posY <= 290 && posY >= 110 && posX == 500 && cooldownR > 0)
	{
			color = WHITE;
			ScoreBoard::score += 156 * m.multiplier;
			enabled = false;
			sfw::playSound(trom, false);
			if (m.multiplier < 8 && posY <= 290 && posY >= 110 && sfw::getKey('W'))
			{
				m.multiplier++;
			}
			cooldownR -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownR <= 0 && sfw::getKey('W'))
		{
			cooldownR = 0;

		}
		else
		{
			do
			{
				cooldownR += sfw::getDeltaTime();
				if (cooldownR >= .0000000001f)
				{
					cooldownR = .0000000001f;
				}
			} while (cooldownR <= 0 && cooldownR < .0000000001f);
		}
	}

	if (sfw::getKey('E') && posY <= 290 && posY >= 110 && posX == 650 && cooldownR > 0)
	{
			color = WHITE;
			ScoreBoard::score+=156;	
			enabled = false;
			sfw::playSound(gui, false);
			if (m.multiplier < 8 && posY <= 290 && posY >= 110 && sfw::getKey('E'))
			{
				m.multiplier++;
			}
			cooldownR -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownR <= 0 && sfw::getKey('E'))
		{
			cooldownR = 0;

		}
		else
		{
			do
			{
				cooldownR += sfw::getDeltaTime();
				if (cooldownR >= .0000000001f)
				{
					cooldownR = .0000000001f;
				}
			} while (cooldownR <= 0 && cooldownR < .0000000001f);
		}
	}

	if (sfw::getKey('T') && posY <= 290 && posY >= 110 && posX == 950 && cooldownR > 0)
	{
		color = WHITE;
		ScoreBoard::score += 156 * m.multiplier;
		enabled = false;
		sfw::playSound(tec, false);
		
		if (m.multiplier < 8 && posY <= 290 && posY >= 110 && sfw::getKey('T'))
		{
			m.multiplier++;
		}
		cooldownR -= sfw::getDeltaTime();
	}
	else
	{
		if (cooldownR <= 0 && sfw::getKey('T'))
		{
			cooldownR = 0;

		}
		else
		{
			do
			{
				cooldownR += sfw::getDeltaTime();
				if (cooldownR >= .0000000001f)
				{
					cooldownR = .0000000001f;
				}
			} while (cooldownR <= 0 && cooldownR < .0000000001f);
		}
	}

	
	

	sfw::drawCircle(posX, posY, 20, 12U, color);
}

void Circle::update(Multiplier &m)
{
	//lifetime -= sfw::getDeltaTime();
	if (posY < 50)
	{
		enabled = false;
		m.multiplier = 1;
		
	}


	
	posY -= speedY;
}

