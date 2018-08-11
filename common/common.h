#ifndef _COMMON_H__
#define _COMMON_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<unistd.h>
#include<ctype.h>
#include<fcntl.h>
#include<errno.h>

#define MAXSIZE 1024
#define CLIENT_PORT 3306

int socket_create(const char* ip,const int port);//创建监听套接字 
int socket_accept(int sock);//接受连接 
int socket_connect(const char* ip,const int port);//连接远端主机 
int recv_data(int sock,char* buf,int bufsize);//从文件描述符sock中读数据 
int send_response(int sock,int code);//发送响应码到文件描述符 
void read_input(char *buf,int buffsize);//从标准输入读取一行
void trimstr(char* str,int n);//去除字符串中的空白和换行 

#endif //_COMMON_H__
