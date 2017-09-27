#include <iostream>

#include "sfwdraw.h"
#include "GameState.h"

int main()
{
	sfw::initContext(800, 600);
	sfw::setBackgroundColor(BLACK);

	GameState gs;
	gs.init();

	while (sfw::stepContext())
	{
		gs.update();
		gs.draw();
	}

	sfw::termContext();
}