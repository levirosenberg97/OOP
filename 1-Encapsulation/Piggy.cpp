#include "Piggy.h"
#include<iostream>

using namespace std;

void DigitalPiggyBank::deposit(float net)
{
	cin >> net;
	currentBalance += net;
}

float DigitalPiggyBank::withdraw()
{
	currentBalance = 0.0f;
	return currentBalance;
}

float DigitalPiggyBank::balance() const
{
	return currentBalance;
}

void DigitalPiggyBank::print()
{
	cout << "Current Balance: $" << currentBalance << endl;
}
