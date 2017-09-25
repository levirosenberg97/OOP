#include "person.h"
#include<iostream>

using namespace std;

Person::Person()
{
	name = "";
	age = 0;
}

Person::Person(string n, int a, string s)
{
	name = n;
	age = a;
	soc = s;
}

void Person::print()
{
	cout << name << endl;
	cout << age << endl;
}

bool Person::checkSoc(string test)
{
	return soc == test;
}