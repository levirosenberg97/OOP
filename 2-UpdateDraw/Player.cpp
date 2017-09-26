#include "Player.h"

#include "sfwdraw.h"

void Player::player1(Player player)
{
	sfw::drawCircle(x, y, 25,12U,CYAN);

	screenWarping();

	if (sfw::getKey('W'))
	{
		y += 3;
	}

	if (sfw::getKey('S'))
	{
		y -= 3;
	}

	if (sfw::getKey('A'))
	{
		x -= 3;
	}

	if (sfw::getKey('D'))
	{
		x += 3;
	}


	
}

void Player::screenWarping()
{
	if (x <= 0)
	{
		x = 799;
	}
	if (x >= 800)
	{
		x = 1;
	}

	if (y <= 0)
	{
		y = 499;
	}
	
	if (y >= 500)
	{
		y = 1;
	}
}

void Player::player2(Player player)
{
	sfw::drawCircle(x, y, 25, 12U, RED);

	screenWarping();

	if (sfw::getKey('I'))
	{
		y += 3;
	}

	if (sfw::getKey('K'))
	{
		y -= 3;
	}

	if (sfw::getKey('J'))
	{
		x -= 3;
	}

	if (sfw::getKey('L'))
	{
		x += 3;
	}


}

void Player::update(Player terry, Player kobey)
{
	player1(terry);
	player2(kobey);
}

void Player::draw()
{
	
	
}
