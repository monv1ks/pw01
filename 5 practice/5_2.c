#include <stdio.h>
int main(void) {
    const int height = 5;
    const char sym = '&';
    for (int i = 0; i < height; i++) {
        int spaces, symbols;
        if (i <= height / 2) {
            spaces = i;
            symbols = height - 2 * i;
        } else {
            int rev_i = height - 1 - i;
            spaces = rev_i;
            symbols = height - 2 * rev_i;
        }
        for (int a = 0; a < spaces; a++) {
            printf(" ");
        }
        for (int a = 0; a < symbols; a++) {
            printf("%c", sym);
        }
        printf("\n");
    }
    return 0;
}