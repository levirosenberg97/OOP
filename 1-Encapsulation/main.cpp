#include "person.h"
#include<iostream>
#include"TV.h"
#include"Piggy.h"
#include"server.h"


using namespace std;

int main()
{
	/*
	Person human("Terry", 22, "555-555-5555");
	human.print();
	if (human.checkSoc("555-555-5555"))
	{
		cout << "MATCH" << endl;
	}
	else
	{
		cout << "NO MATCH" << endl;
	}


	Person underling("Kobs", 19, "111-111-1111");
	underling.print();

	Person student("Xavier", 19, "222-222-2222");
	student.print();

	Person baby;
	baby.name = "EzzyBaby";
	baby.age = 0;
	baby.print();
	*/

	//==CLOSED==


	// 1. Television

	/*
	int chn = 10;
	int vol = 20;
	char in;
	Television  sony(10, 20);
	do
	{
		sony.print();

		cout << "Change Channel? Increase Volume? \n'C' to go up a channel | 'c' to go down a channel |\n'V' to increase Volume | 'v' to decrease Volume   |" << endl;
		cin >> in;

		if (in == 'C')
		{
			sony.increaseChannel();
		}
		else if (in == 'c')
		{
			sony.decreaseChannel();
		}
		else if (in == 'V')
		{
			sony.increaseVolume();
		}
		else if (in == 'v')
		{
			sony.decreaseVolume();
		}
		else
		{
			in = 0;
		}

		in = 0;
	} while (in == 0);

*/

// 2. Digital Piggy Bank

/*
DigitalPiggyBank pinky;

char in;
do
{
	pinky.print();
	cout << "Press 'w' to Withdraw your Funds| Press 'd' if you Wish to make a Deposit" << endl;
	cin >> in;
	if (in == 'w')
	{
		if (pinky.balance() == 0)
		{
			cout << "Nothing to Withdraw" << endl;
		}
		else
		{
			pinky.withdraw();
		}
	}
	else if (in == 'd')
	{
		cout << "Enter the Amount You Wish to Deposit" << endl;
		pinky.deposit(in);
	}
	else
	{
		in = 0;
	}
	in = 0;
} while (in == 0);
*/

//==OPEN==

// 1. ServerInfo

	ServerInfo server1[5];

	for (int i = 0; i < 5; i++)
	{
		server1[i].name = "LoveShack";
		server1[i].country = "RUS";
		server1[i].maxp = rand() % 30 + 1;
		server1[i].curp = rand() % server1[i].maxp;
		server1[i].ping = i * 3;
	}
	server1[3].country = "CANADA";
	

	ServerBrowserService serverBrowserService;
//	serverBrowserService.registerServer(server1[5]);

	ServerInfo arr[20];
	serverBrowserService.getServers(arr, 5);

	serverBrowserService.getPingLimit(arr, 5, 10);
	serverBrowserService.getCountry(arr, 5, "CANADA");
	serverBrowserService.getEmptyServers(arr, 5);
	serverBrowserService.getFullServers(arr, 5);

	while(true){}
}