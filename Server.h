#pragma once
#ifndef SERVER_H
#define SERVER_H

#include <WinSock2.h>

class Server
{
public:
	Server(char** data);
	void init(WSADATA &wsaData);
	void initServer();
	void connectToSocket();
	void bindSocket();
	void listenSocket();
	void acceptClient(SOCKET& ClientSocket);
	char* reciveData(SOCKET& ClientSocket);
	void closeClient(SOCKET & ClientSocket);
	~Server();
private:
	int iResult;

	SOCKET ListenSocket;

	struct addrinfo *result;
	struct addrinfo hints;
};
#endif

