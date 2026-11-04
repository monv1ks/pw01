#include <stdio.h>
int main(void) {
    int num = 0;
    int palindrom_count = 0;
    int default_count = 0;
    int sum_palindrom = 0;
    int sum_default = 0;
    printf("Введите целые числа (0 для завершения):\n");
    while ((scanf("%d", &num) == 1) && (num != 0)) {
        if (num >= 10 && num <= 99) {
            int tens = num / 10;
            int edinici = num % 10;
            if (tens == edinici) {
                palindrom_count++;
                sum_palindrom += num;
            } else {
                default_count++;
                sum_default += num;
            }
        }
    }
    printf("Двузначные числа-палиндромы: %d\n", palindrom_count);
    printf("Остальные двузначные числа: %d\n", default_count);
    double avg_pal = 0.0;
    double avg_def = 0.0;
    if (palindrom_count > 0) {
        avg_pal = (double)sum_palindrom / palindrom_count;
    } else {
        avg_pal = 0.0;
    }
    if (default_count > 0) {
        avg_def = (double)sum_default / default_count;
    } else {
        avg_def = 0.0;
    }
    printf("Среднее арифметическое чисел-палиндромов: %.2f\n", avg_pal);
    printf("Среднее арифметическое остальных чисел: %.2f\n", avg_def);
    return 0;
}