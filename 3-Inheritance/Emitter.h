#pragma once
#include "Closed.h"
#include "Particles.h"

class Emitter : public GameObject
{
	//Time since last Spawned Particle
	float spawnAcc;

public:

	Emitter();

	//collection of Particles
	BaseParticle particles[100];

	//current particle id
	int particleId;

	//Time Between Spawn
	float spawnInt;

	virtual void update();
	virtual void draw();
};