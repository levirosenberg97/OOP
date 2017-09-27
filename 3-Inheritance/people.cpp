#include "people.h"

#include<iostream>

Person::Person()
{
	fullName = "";
	happiness = 50;
}

Person::Person(std::string initialName, int initialHappiness)
{
	fullName = initialName;
	happiness = initialHappiness;
}

void Person::greet()
{
	std::cout << "Hi! My Name is " << fullName << "." << std::endl;
}

bool Person::isHappy()
{
	return happiness > 70;
}