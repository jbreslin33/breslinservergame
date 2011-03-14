#ifndef CLIENT_H
#define CLIENT_H

#define COMMAND_HISTORY_SIZE		64

#include "../math/Vector3D.h"
#include "../command/serverSideCommand.h"

class Client
{

public:

Client();
~Client();

	ServerSideCommand frame[COMMAND_HISTORY_SIZE];
	ServerSideCommand serverFrame;
	ServerSideCommand command;

	long processedFrame;

	Vector3D startPos;
	bool team;

};
#endif
