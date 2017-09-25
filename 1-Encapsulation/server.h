#pragma once
#include <iostream>
#include<string>

struct ServerInfo
{
	std::string name;
	std::string country;
	int curp;
	int maxp;
	int ping;
};

class ServerBrowserService
{
private:
	// A const variable indicating the array capacity.
	// NOTE: We'll discuss how to make this dynamic in the future.
	const static int SERVERINFO_CAPACITY = 20;

	// An array of all servers registered with the system.
	ServerInfo servers[SERVERINFO_CAPACITY];
	// A count of all servers currently registered.
	int serverCount;
public:
	ServerBrowserService();

	// Registers a server with the service
	bool registerServer(ServerInfo newServer);

	// Copies server entries into the given array.
	// Returns the total number of servers meeting the filter settings.
	int getServers(ServerInfo * dstArray, size_t dstSize)const;

	int getPingLimit(ServerInfo * dstArray, size_t dstSize, int desiredPing);

	int getCountry(ServerInfo * dstArray, size_t dstSize, std::string country);

	int getEmptyServers(ServerInfo * dstArray, size_t dstSize);

	int getFullServers(ServerInfo * dstArray, size_t dstSize);

	void PlayerCountSort(ServerInfo * dstArray, size_t dstSize)const;

};