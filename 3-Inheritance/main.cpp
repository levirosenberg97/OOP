#include "people.h"
#include "Officer.h"
#include "Closed.h"
#include <string>
#include"sfwdraw.h"
#include"Player.h"
#include "Particles.h"
#include "Emitter.h"


int main()
{

	//Person me("Terry Ngyuen", 90);
	//me.greet();
	//me.isHappy();

	//Officer cole("Cole Phelps", 20, 7142);

	//cole.greet();
	//cole.isHappy();

	//while (true){}

	//return 0;

	//==CLOSED==

	sfw::initContext(800, 800, "SFW");

	sfw::setBackgroundColor(BLACK);

	Player pimp;
	pimp.x = 400;
	pimp.y = 400;


	BaseParticle p;
	p.posX = 200;
	p.posY = 300;

	p.speedX = 4;
	p.speedY = 4;

	BoxParticle b;

	b.speedX = -.1f;
	b.speedY = .2f;

	b.posX = 200;
	b.posY = 200;

	b.dimX = 40;
	b.dimY = 40;


	Emitter emitter;

	emitter.spawnInt = 3;
	

	while (sfw::stepContext())
	{
		// 1. GameObject
		
		// 2. Player

		pimp.draw();
		pimp.update();
		
		//==OPEN==

		// 1. Base Particles

		p.draw();
		p.update();

		// 2. Box Particles

		b.update();
		b.draw();

		emitter.update();
		emitter.draw();
	}
	sfw::termContext();
	while (true) {}
	return 0;
}