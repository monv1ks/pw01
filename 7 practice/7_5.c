#include <stdio.h>

int reversed_iter(int num) {
    int reversed = 0;
    int neg = 0;
    if (num < 0) {
        neg = 1;
        num = -num;
    }
    while (num > 0) {
        int upd_num = num % 10;
        reversed = reversed * 10 + upd_num;
        num = num / 10;
    }
    if (neg) {
        return -reversed;
    }
    return reversed;
}

int reversed_rec(int num) {
    static int reversed = 0;
    if (num == 0) {
        int temp = reversed;
        reversed = 0;
        return temp;
    }
    reversed = reversed * 10 + num % 10;
    return reversed_rec(num / 10);
}

int main(void) {
    int input_num;
    printf("Введите число (для выхода любой символ кроме чисел):\n");
    while (scanf("%d", &input_num) == 1) {
        printf("Итеративно: %d\n", reversed_iter(input_num));
        printf("Рекурсивно: %d\n\n", reversed_rec(input_num));
        printf("Следующее число: ");
    }
    return 0;
}