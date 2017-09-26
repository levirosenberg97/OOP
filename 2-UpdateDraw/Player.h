#pragma once

class Player
{
public:
	float x;	//x-pos
	float y;	//y-pos


	void player1(Player player);
	void player2(Player player);
	void update(Player player1, Player player2);
	void screenWarping();
	void draw();
};