#include <stdio.h>
#include <stdint.h>
int main(void)
{
    unsigned int a;
    scanf("%u", &a);
    uint8_t x = (uint8_t)a;
    uint8_t add = x + x;
    printf("ADD: %u \n",(unsigned int)add);
    uint8_t mul2 = x * 2;
    printf("MUL2: %u \n",(unsigned int)mul2);
    uint8_t sqr = x * x;
    printf("SQR: %u \n",(unsigned int)sqr);
    return 0; //сворачиваются по модулю 256 потому что уинт8 это 8 бит, 2**8 = 256 значений, больше 256 не вмещается
}