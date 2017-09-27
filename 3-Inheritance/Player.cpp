#include "Player.h"
#include"sfwdraw.h"

void Player::draw()
{
	sfw::drawCircle(x, y, 15);
}

void Player::update()
{
	//movement
	if (sfw::getKey('W')) { y++; }
	if (sfw::getKey('S')) { y--; }
	if (sfw::getKey('A')) { x--; }
	if (sfw::getKey('D')) { x++; }
	//wrap
	if (x < 0) { x = 800; }
	if (y < 0) { y = 800; }
	if (x > 800) { x = 0; }
	if (y > 800) { y = 0; }
}