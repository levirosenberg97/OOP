#pragma once
#include "Closed.h"


class Player : public GameObject
{
public:
	float x;
	float y;

	virtual void update() override;
	virtual void draw() override;
};