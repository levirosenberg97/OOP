#include "TV.h"
#include <iostream>

using namespace std;

Television::Television(int chn, int vol)
{
	currentChannel = chn;
	currentVolume = vol;
}

void Television::increaseVolume()
{
	currentVolume++;
}

void Television::decreaseVolume()
{
	currentVolume--;
}

void Television::increaseChannel()
{
	currentChannel++;
}

void Television::decreaseChannel()
{
	currentChannel--;
}

void Television::print()
{
	cout << "Current Channel: " << currentChannel << endl;
	cout << "Volume: " << currentVolume << endl;
}
