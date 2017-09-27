#pragma once

class GameState;

class Target
{
public:
	float x;
	float y;

	void update(GameState& gs);
	void draw();
};