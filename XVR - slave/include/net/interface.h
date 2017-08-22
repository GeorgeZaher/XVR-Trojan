#ifndef NET_INERFACE_H
#define NET_INERFACE_H

#include "types.h"

#define NET_IP "192.168.0.100"
#define NET_PORT 2666

#define NET_BUFFSIZE 516

#define NET_PROTECT_CPU_TRIES 50
#define NET_PROTECT_CPU() Sleep(1)
#define NET_WAIT_BETWEEN_FUNC() Sleep(1000)

extern int net_SendData(SOCKET sock, char* msg, int len);
extern int net_ReciveData(SOCKET sock, char** msg);
extern void net_Prepare(void);
extern void net_CreateSocket(void);
extern void net_Connect(void);

#endif