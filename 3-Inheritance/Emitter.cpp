#include "Emitter.h"
#include <time.h>
#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; i++)
	{
		particles[i].enabled = false;
	}

	spawnAcc = 0.0f;
}

void Emitter::update()
{
	// check if time to spawn new particle
	//if so create one
	spawnAcc += sfw::getDeltaTime();

	if (spawnAcc > spawnInt)
	{
		srand(time(NULL));
		// look for an unused particle
		for (int i = 0; i < 100; i++)
		{
			if (particles[i].enabled == false)
			{
				//reactivate it
				BaseParticle& baby = particles[i];

				int rx = rand() % 2 + 1;
				int ry = rand() % 2 + 1;

				baby.posX = rand()%400+ -100;
				baby.posY = rand()%400+ -100;

				if (rx == 1)
				{
					baby.speedX = rand() % 15 + 1;
				}
				else
				{
					baby.speedX = rand() % 2 + -17;
				}

				if (ry == 1)
				{
					baby.speedY = rand() % 20 + 1;
				}
				else
				{
					baby.speedY = rand() % 2 + -22;
				}

				baby.enabled = true;
				spawnAcc = 0.0f;
				break;
			}
		}
	}

	//update all of the particles that are active
	for (int i = 0; i < 100; i++)
	{
		particles[i].update();
	}
}

void Emitter::draw()
{
	for (int i = 0; i < 100; i++)
	{
		// only draw active particles
		if (particles[i].enabled)
		{
			particles[i].draw();
		}
	}
}
