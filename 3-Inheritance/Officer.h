#pragma once
#include"people.h"

class Officer : public Person
{


protected:
	int badgeNumber;

public:
	Officer();
	Officer(std::string initialName, int initialHappiness, int initialBadgeNumber);



	virtual void greet() override;
};