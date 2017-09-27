#include "Player.h"

#include "sfwdraw.h"
#include "GameState.h"

void Player::update(GameState& gs)
{
	if (sfw::getKey('W')) { y++; }
	if (sfw::getKey('A')) { x--; }
	if (sfw::getKey('S')) { y--; }
	if (sfw::getKey('D')) { x++; }
}

void Player::draw()
{
	sfw::drawCircle(x, y, 20.0f);
}