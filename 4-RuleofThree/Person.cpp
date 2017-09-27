#include "Person.h"

#include <cstring>

Person::Person()
{
	name = NULL;
	age = -1;
}

Person::Person(char * initName, int initAge)
{
	int len = strlen(initName);

	// record the name
	name = new char[len + 1];
	for (int i = 0; i < len; ++i)
	{
		// copy each letter in
		name[i] = initName[i];
	}
	name[len] = '\0';

	nameCapacity = len;
	age = initAge;
}

Person& Person::operator=(const Person& other)
{
	int len = strlen(other.name);
	char * tmp = new char[len + 1];
	for (int i = 0; i < len; ++i)
	{
		tmp[i] = other.name[i];
	}
	tmp[len] = '\0';

	if (name != NULL)
	{
		delete[] name;
	}

	name = tmp;
	return *this;
}

Person::~Person()
{
	delete[] name;
}

Person::Person(const Person& other)
{
	int len = strlen(other.name);

	// record the name
	name = new char[len + 1];
	for (int i = 0; i < len; ++i)
	{
		// copy each letter in
		name[i] = other.name[i];
	}
	name[len] = '\0';


}