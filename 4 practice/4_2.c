#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint8_t a,b,c;
    scanf("%hhu %hhu %hhu", &a, &b, &c);
    float result = (float)(a + b + c) / 3;
    printf("result: %f", result);
    printf("size uint8_t: %llu bites",(unsigned long long)sizeof(uint8_t));
    printf("size float: %llu bites",(unsigned long long)sizeof(float));
    return 0;
}