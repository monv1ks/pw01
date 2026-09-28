#include <stdio.h>
#define NODE_ID 42

void ping()
{
    printf("PING");
}

void pong()
{
    printf("PONG");
}

int handshake()
{
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}

int main()
{
    handshake();
    printf(":");
    int packet_size = NODE_ID * 4;
    printf("%d", packet_size);
    printf("\n");
    handshake();
    printf(":");
    int total_transfer = packet_size * 3;
    printf("%d",total_transfer);
    printf("\n");
    printf("SESSION");
    printf(":");
    printf("CLOSED");
    return 0;

}
