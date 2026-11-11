#include <stdio.h>

void set_remainder(int *a, int *b) {
    int big, small, ost;
    if (*a == *b) { 
        *a = 0;
        *b = 0;
        return;
    }
    if (*a > *b) {
        big = *a;
        small = *b;
    } else {
        big = *b;
        small = *a;
    }
    if (small == 0) {
        printf("Меньшее число не должно быть равно нулю, программа не модифицировала числа, введите другие значения\n");
        return;
    }
    ost = big % small;
    *a = ost;
    *b = ost;
}

int main(void) {
    printf("Введите два числа, затем программа присвоит им значения, равные остатку от деления большего числа на меньшее (любой символ, кроме цифр для выхода)\n");
    int x = 0;
    int y = 0;
    printf("Введите два числа:\n");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Ошибка, введите ДВА ЧИСЛА\n");
        return 0;
    }
    printf("Исходные переменные: x = %d, y = %d\n", x, y);
    set_remainder(&x, &y);
    printf("Изменённые переменные: x = %d, y = %d\n", x, y);
    return 0;
}