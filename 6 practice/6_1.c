#include <stdio.h>
#include <ctype.h>
int main(void) {
    printf("Введите символы, для получения минимального ASCII-кода среди них ('#' для выхода): \n");
    int sym = 0;
    int min_code = -1;
    int count = 0;
    while ((sym = getchar()) != '#') {
        if (count == 0) {
            min_code = sym;
        } else {
            if (sym < min_code) {
                min_code = sym;
            }
        }
        count++;
    }
    if (count > 0) {
        printf("Минимальный ASCII-код среди введённых символов: %d, символ - %c", min_code, (char)min_code);
    } else {
        printf("'#' - первый символ в потоке");
    }
    return 0;
}