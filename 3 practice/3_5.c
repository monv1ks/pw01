#include <stdio.h>
#include <string.h>
int main(void)
{
    char letter;
    scanf("%c",&letter);
    printf("CODE_DEC: %d\n", letter);
    printf("CODE_HEX: %x\n", letter);
    printf("CODE_OCT: %o\n", letter);
    char upper = letter - 32;
    printf("UPPER: %c\n", upper);
    char next = letter + 1;
    printf("NEXT: %c\n", next);
    char previous = letter - 1;
    printf("PREV: %c\n", previous);
    return 0;
}