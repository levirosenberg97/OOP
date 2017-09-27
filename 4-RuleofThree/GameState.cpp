
#include "GameState.h"

void GameState::init()
{
	player.x = 400;
	player.y = 300;

	target.x = 10;
	target.y = 10;
}

void GameState::update()
{
	player.update(*this);
	target.update(*this);
}

void GameState::draw()
{
	player.draw();
	target.draw();
}