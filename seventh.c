#include <stdio.h>
void load_mem()
    {
        printf("MEM_OK");
    }
void load_cpu()
    {
        printf("CPU_OK");
    }
int main()
{
    printf("BOOT:");
    load_mem();
    printf("|");
    load_cpu();
    printf(":END");
    return 0;
}