#pragma once

class Person
{
	int nameCapacity;

public:
	Person();
	Person(char * initName, int initAge);
	~Person();

	Person(const Person& other);	// copy ctor
	Person& operator= (const Person& other); // copy assign

	char * name;
	int age;
};