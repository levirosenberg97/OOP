#pragma once
#include <string>


class Person
{
	std::string soc;

public:
	Person();
	Person(std::string n, int a, std::string s);

	std::string name;
	int age;

	void print();
	bool checkSoc(std::string test);

};