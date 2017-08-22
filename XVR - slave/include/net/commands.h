#ifndef NETCOMMANDS_H
#define NETCOMMANDS_H

#define NET_CMD_ECHO 0x1
#define NET_CMD_INDENTIFY 0x2
#define NET_CMD_SYSTEM 0x3
#define NET_CMD_SEND_FILE_MASTER_SLAVE 0x4
#define NET_CMD_SEND_FILE_SLAVE_MASTER 0x5
#define NET_CMD_PLAYSOUND 0x6
#define NET_CMD_KEYLOGGER_CLEAR 0x7
#define NET_CMD_MESSAGEBOX 0x8
#define NET_CMD_TERMINATE 0x9

#define NET_TRYING_SLEEP() Sleep(2)
#define NET_FILE_TRANSFER_PAGE 255
#define NET_FILE_TRANSFER_DATA 0x88
#define NET_FILE_TRANSFER_END 0x44

extern int net_ExecuteCmd(char* msg, int msgLen);
extern int net_cmd_Echo(char* msg, int msgLen);
extern int net_cmd_Indentify(char* msg, int msgLen);
extern int net_cmd_System(char* msg, int msgLen);
extern int net_cmd_MS(char* msg, int msgLen);
extern int net_cmd_SM(char* msg, int msgLen);
extern int net_cmd_PlaySound(char* msg, int msgLen);
extern int net_cmd_kl_Clear(char* msg, int msgLen);
extern int net_cmd_mbox(char* msg, int msgLen);
extern int net_cmd_ScreenShot(char* msg, int msgLen);

#endif