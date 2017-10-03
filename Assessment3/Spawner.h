#pragma once
#include "GameObject.h"
#include"TapBar.h"

class Spawner : public GameObject
{
	//Time since last Spawned Particle
	float spawnAcc;

public:

	Spawner();

	//collection of Particles
	Circle circles[100];

	//current particle id
	int particleId;

	//Time Between Spawn
	float spawnInt;

	unsigned int color = WHITE;
	void DetermineSpawn();
	void DoSpawn(int cheat);
	virtual void update();
	virtual void draw();
};