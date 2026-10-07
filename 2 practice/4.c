#include <stdio.h>
#include <limits.h>
int main(void)
{
    printf("INT_MIN: %d \n", INT_MIN);
    printf("INT_MAX: %d \n", INT_MAX);
    printf("UINT_MAX: %u \n", UINT_MAX);
    int range_ok = ((unsigned int)INT_MAX * 2u + 1u == UINT_MAX); //если не приводить к безнаковому типу, тогда память отведенная для инта переполняется из-за запредельных значений и выводится ересь, можно поменять %u на %d и на увидеть, что -1 получится
    printf("RANGE_OK: %d \n", range_ok);
    return 0;
}