#include "sfwdraw.h"
#include "TapBar.h"
#include "ScoreBoard.h"
#include "Spawner.h"
#include<time.h>

int main()
{
	sfw::initContext(1280, 720);
	sfw::setBackgroundColor(BLACK);
	srand(time(NULL));
	ScoreBoard score;
	Tap bar;
	Box box1;
	Box box2;
	Box box3;
	Box box4;

	Spawner sp;
	sp.spawnInt = .7f;

	//create the boxes
	box1.dimX = 100;
	box1.dimY = 100;
	box1.posX = 350;
	box1.posY = 200;
	
	box2.dimX = 100;
	box2.dimY = 100;
	box2.posX = 500;
	box2.posY = 200;

	box3.dimX = 100;
	box3.dimY = 100;
	box3.posX = 650;
	box3.posY = 200;

	box4.dimX = 100;
	box4.dimY = 100;
	box4.posX = 800;
	box4.posY = 200;

	//Creates the Circle
	
	while (sfw::stepContext())
	{
		
		sp.update();
		sp.draw();
		score.update(sp);
		score.draw();
		box1.draw(GREEN, "Q");
		box2.draw(RED, "W");
		box3.draw(YELLOW, "E");
		box4.draw(BLUE,"R");

		bar.draw();
	}

	sfw::termContext();
}