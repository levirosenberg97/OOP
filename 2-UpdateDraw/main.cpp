#include<iostream>

#include "sfwdraw.h"
#include"objects.h"
#include"Player.h"

int main()
{
	//create a window and a drawing context
	sfw::initContext(800, 500, "NotaSwear");

	unsigned int trm = sfw::loadTextureMap("res/img.jpg");

	////set a background color
	sfw::setBackgroundColor(BLACK);

	//Player me;
	//me.x = 400;
	//me.y = 300;

	////set up a game loop
	//while (sfw::stepContext())
	//{
	//	//game code goes here
	//	me.draw();
	//	me.update();
	//}


	//==CLOSED==

	// 1. Multi-Player

	Player play1{300, 200};
	Player play2{500,100};

	


	while (sfw::stepContext())
	{
		//play1.player1(play1);
		//play2.player2(play2);

		//==OPEN==

		/*
		Line line;
		line.startX = 25;
		line.startY = 25;
		line.endX = 25;
		line.endY = 80;

		line.draw();
		*/

		sfw::drawTexture(trm, 100, 100, 150, 100);


		Box cube;
		cube.bleftX = 100;
		cube.bleftY = 100;

		cube.toprigX = 200;
		cube.toprigY = 200;
		cube.draw();
		

	}


	


	// Clean Up
	sfw::termContext();

}