#include "server.h"
#include <iostream>
#include <string>


using namespace std;

ServerBrowserService::ServerBrowserService()
{
	serverCount = 0;
}

bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	//Find the index to put the server

	if (serverCount < SERVERINFO_CAPACITY)
	{
		servers[serverCount] = newServer;
		serverCount++;
		return true;
	}
	else
	{
		return false;
	}
	//add that server to our array of servers

	//return true or false if we successfully added a server
	/*
	string in;
	string in2;
	cout << "What is the Servers Name?";
	cin >> in;
	newServer.name = in;

	cout << "What Country is it Based out of?";
	cin >> in2;
	newServer.country = in2;

	newServer.maxp = rand() % 30 + 1;
	newServer.curp = rand() % newServer.maxp + 1;
	newServer.ping = rand() % 300 + 1;
	return false;
	*/
}

void ServerBrowserService::PlayerCountSort(ServerInfo * dstArray, size_t dstSize)const
{
	bool loop = false;
	while (loop == false)
	{
		int checker = 0;
		for (int i = 0; i < dstSize - 1; i++)
		{
			if (dstArray[i].curp <= dstArray[i + 1].curp)
			{
				checker++;
			}
			else
			{
				int dummy = dstArray[i + 1].curp;
				dstArray[i + 1].curp = dstArray[i].curp;
				dstArray[i].curp = dummy;
			}
		}
		if (checker == dstSize - 1)
		{
			loop = true;
		}
	}
}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize)const
{
	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		dstArray[i] = servers[i];
		size++;
	}

	PlayerCountSort(dstArray, dstSize);

	//the size of the new array we copied
	return size;
}

int ServerBrowserService::getPingLimit(ServerInfo * dstArray, size_t dstSize, int desiredPing)
{
	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].ping < desiredPing)
		{
			dstArray[i] = servers[i];
			size++;
		}

		dstArray[i] = servers[i];
		size++;
	}


	//the size of the new array we copied
	return size;
}

int ServerBrowserService::getCountry(ServerInfo * dstArray, size_t dstSize, std::string country)
{
	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].country == country)
		{
			dstArray[size] = servers[i];
			size++;
		}

		dstArray[i] = servers[i];
		size++;
	}


	//the size of the new array we copied
	return size;
}

int ServerBrowserService::getEmptyServers(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].curp > 0)
		{
			dstArray[i] = servers[i];
			size++;
		}

		dstArray[i] = servers[i];
		size++;
	}


	//the size of the new array we copied
	return size;
}

int ServerBrowserService::getFullServers(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].curp = servers[i].maxp)
		{
			dstArray[i] = servers[i];
			size++;
		}

		dstArray[i] = servers[i];
		size++;
	}


	//the size of the new array we copied
	return size;
}
