#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdbool.h>
#include <netdb.h>
#include <time.h>
/*
struct sockaddr_in{
        short sin_family;
        unsigned short sin_port;
        struct in_addr sin_addr;
        char sin_zero[8];
};

struct sin_addr{
        unsigned long s_addr;
};

int inet_pton(int af, const char *src, void *dst);

uint16_t htons(uint16_t hostshort);

int socket (int domain, int type, int protocol);

int shutdown (int sockfd, int flag);

int connect(int sockfd, const struct sockaddr * addr, socklen_t
addrlen);

ssize_t send(int sockfd, const void *buf, size_t len, int flags);

ssize_t recv(int sockfd, void *buf, size_t len, int flags);
*/

#define PORT 50000

void czekaj()
{
    int czas;
    czas=clock();
    int op=200000;
    while(clock()<=czas+op)
    {}
}

int main(){
    struct sockaddr_in serwer={
            .sin_family = AF_INET,
            .sin_port = htons(PORT)
    };
    inet_pton(AF_INET, "127.0.0.1", &serwer.sin_addr);
    const int gniazdo = socket(AF_INET, SOCK_STREAM, 0);
    if (gniazdo ==-1){
        printf ("Blad!\n");
        return -1;
    }
    if(connect(gniazdo, ( struct sockaddr * ) & serwer, sizeof(serwer)) ==
       -1){
        printf ("Blad!\n");
        return -1;
    }
    char buffer[128] = "No hej\n";
    send(gniazdo, buffer, strlen(buffer),0);
    shutdown(gniazdo, SHUT_RDWR);
    czekaj();
    return 0;
}