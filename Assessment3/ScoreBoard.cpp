#include "ScoreBoard.h"
#include "sfwdraw.h"
#include <string>
#include"TapBar.h"

int ScoreBoard::score = 0;

void ScoreBoard::update(Spawner cir)
{

}

void ScoreBoard::draw()
{

	std::string ScoreText = std::to_string(score);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16),ScoreText.c_str(), 1000, 640, 30,30);
}
