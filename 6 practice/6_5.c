#include <stdio.h>
#include <math.h>

int main(void) {
    int choice = 0;
    double num = 0.0;
    printf("1. Модуль числа\n");
    printf("2. Знак числа\n");
    printf("3. Округление вверх\n");
    printf("4. Округление вниз\n");
    printf("5. Выход\n");
    while (scanf("%d", &choice) == 1) {
        if (choice == 5) {
            printf("Выход из программы.\n");
            break;
        }
        if (choice < 1 || choice > 4) {
            printf("Ошибка: неверный номер пункта меню. Повторите ввод.\n");
            while (getchar() != '\n');
            continue;
        }
        printf("Введите число: ");
        if (scanf("%lf", &num) != 1) {
            printf("Ошибка ввода числа.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');
        switch (choice) {
            case 1:
                printf("Результат |%.2f| = %.2f\n", num, fabs(num));
                break;
            case 2:
                if (num > 0) {
                    printf("Знак числа: +\n");
                } else if (num < 0) {
                    printf("Знак числа: -\n");
                } else {
                    printf("Знак числа: 0\n");
                }
                break;
            case 3:
                printf("Округление вверх (%.2f) = %.2f\n", num, ceil(num));
                break;
            case 4:
                printf("Округление вниз (%.2f) = %.2f\n", num, floor(num));
                break;
            default:
                break;
        }
    }
    return 0;
}