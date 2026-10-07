#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int first_num, second_num;
    bool module_ready, fault_state;
    scanf("%d %d",&first_num,&second_num); //любое ненулевое значение превращается в 1, потому что bool работает по принципу: n != 0, значит сигнал есть, значит 1, и наоборот n = 0, тогда сигнала нет, значит 0
    module_ready = first_num;
    fault_state = second_num;
    printf("MODULE_READY: %d \n", module_ready);
    printf("FAULT_STATE: %d \n", fault_state);
    printf("BOOL_SIZE: %d \n", (int)sizeof(bool));     
    printf("FLAGS_SUM: %d \n", module_ready + fault_state);
    return 0;
}