#ifndef SERVERSIDENETWORKEDCLIENT_H
#define SERVERSIDENETWORKEDCLIENT_H

#include "../client/client.h"

#include "../tdreamsock/dreamSock.h"

class ServerSideNetworkedClient : public Client
{

public:

ServerSideNetworkedClient();
~ServerSideNetworkedClient();

	struct sockaddr address;
	dreamClient *netClient;

	ServerSideNetworkedClient *next;
};
#endif
