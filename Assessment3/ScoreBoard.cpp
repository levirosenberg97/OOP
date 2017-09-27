#include "ScoreBoard.h"
#include "sfwdraw.h"
#include <string>


void ScoreBoard::update(Circle cir)
{
	if (cir.color == WHITE)
	{
		score += 11;
	}
}

void ScoreBoard::draw()
{

	std::string ScoreText = std::to_string(score);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16),ScoreText.c_str(), 1000, 640, 30,30);
}
