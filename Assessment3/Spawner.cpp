#include"Spawner.h"
#include <time.h>
#include <iostream>
Spawner::Spawner()
{
	for (int i = 0; i < 100; i++)
	{
		circles[i].enabled = false;
		circles[i].speedY = 80;
	}

	spawnAcc = 0.0f;
}



void Spawner::DetermineSpawn()
{
	int rando = rand() % 3 + 1;
	switch (rando)
	{
	case 1:
		spawnInt = 0.7f;
		break;
	case 2: spawnInt = .9f;
		break;
	case 3: spawnInt = 0.5f;
		DoSpawn(1);
		break;
	}
}

void Spawner::DoSpawn(int cheat)
{
	
	printf("Spawned a thing!\n");
	srand(time(NULL));
	// look for an unused particle
	for (int i = 0; i < 100; i++)
	{
		
		if (circles[i].enabled == false)
		{
			//spawnInt = rand() % 3 + 1;
			//spawnInt = 1 / randInterval;
			//reactivate it
			
			

			Circle& baby = circles[i];

			//multiplier = baby.multiplier;

			baby.speedY = 300 * sfw::getDeltaTime();
			baby.lifetime = 5;
			int rx = (rand() % 5 + 1) + cheat;

			baby.posY = 800;

			if (rx == 1)
			{
				baby.posX = 350;
			}
			else if (rx == 2)
			{
				baby.posX = 500;
			}
			else if (rx == 3)
			{
				baby.posX = 650;
			}
			else if (rx == 4)
			{
				baby.posX = 800;
				
			}
			else
			{
				baby.posX = 950;
			}

			baby.enabled = true;
			
			

			spawnAcc = 0.0f;
			break;
		}
	}
}

void Spawner::update(Multiplier &m)
{
	counter -= sfw::getDeltaTime();
	if (counter < 0)
	{
		std::cout << "Time up";
	}
	spawnAcc += sfw::getDeltaTime();

	if (spawnAcc > spawnInt)
	{
		DetermineSpawn();
		DoSpawn(0);
	}

	//update all of the particles that are active
	for (int i = 0; i < 100; i++)
	{
		if (circles[i].enabled == true)
		{
			circles[i].update(m);
		}
		
	}
}

void Spawner::draw(Multiplier& m)
{
	for (int i = 0; i < 100; i++)
	{
		if (counter <= 0.0f)
		{
			break;
		}
		else
		{
			// only draw active particles
			if (circles[i].enabled && i < 10)
			{
				circles[i].draw(m);
			}
			
		}
		
	}
}
