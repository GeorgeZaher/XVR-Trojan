#ifndef __SERVER_H
#define __SERVER_H

#include <windows.h>

#define SERVER_SLAVENAME_TIMER 2
#define SERVER_MAX_CLIENTS 50
#define SERVER_DEF_PORT 2666
#define SERVER_KEEPALIVE_INTERVAL 500
#define SERVER_KEEPALIVE_MAX 120

#define SERVER_NO_ERROR 0
#define SERVER_ERROR_WSASTARTUP 1
#define SERVER_ERROR_BIND 2
#define SERVER_ERROR_LISTEN 3
#define SERVER_ERROR_NO_SLAVE 4

extern int server_UsingPort;
extern SOCKET server_Client;
extern SOCKADDR_IN server_ClientAddr;

extern int server_WsaInit(void);
extern void server_Cleanup(void);
extern int server_Create(void);
extern int server_WaitForSlaves(void);
extern void server_ConnectionHandle(void);
extern void server_CloseConnection(void);

#endif