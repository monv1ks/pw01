#include <stdio.h>
int main(void)
{
    int num1 = 10;
    int num2 = 010;
    int num3 = 0x10;
    char lit1 = 'A';
    printf("DEC_10: %d \n", num1);  // десятичное по умолчанию
    printf("OCT_10: %d \n", num2);  //0 префикс, тогда это восьмеричное
    printf("HEX_10: %d \n", num3);  // 0x, тогда это шестнадцатеричное
    printf("INT_SUFFIX: %d %d %d %d \n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL)); //int 4 байта, unsigned int 4 байта, long long 8 байт, unsigned long long 8 байт
    printf("INT_SUFFIX: %d %d %d \n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L)); //float 4 bites, double 8 bites, long double 8 bites
    printf("FLOAT_EQ: %d \n", 0.1f == 0.1);  //double хранит 8 bites, float хранит 4, отсюда округление разное
    printf("CHAR_FORMS: %d %d %d \n", 'A', '\x41', '\101'); 
    printf("CHAR_LIT_VAR_STR: %d %d %d \n", sizeof('A'), sizeof(lit1), sizeof("A")); // int символьный литерал => 4 байта, char = 1 байт, строковый литерал 2 символа => 2 байта
    return 0;
}