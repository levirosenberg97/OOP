#include "Target.h"

#include "GameState.h"

#include "sfwdraw.h"

void Target::update(GameState& gs)
{
	if (x < gs.player.x) { x++; }
	if (x > gs.player.x) { x--; }

	if (y < gs.player.y) { y++; }
	if (y > gs.player.y) { y--; }
}

void Target::draw()
{
	sfw::drawCircle(x, y, 7);
}