#include <stdio.h>
int main()
{
    int reactor_core = 12;
    int double_reactor = reactor_core * 2;
    int sqr_reactor = reactor_core * reactor_core;
    printf("[");
    printf("%d",reactor_core);
    printf(",");
    printf(" ");
    printf("%d",double_reactor);
    printf(",");
    printf(" ");
    printf("%d",sqr_reactor);
    printf("]");
    return 0;
}