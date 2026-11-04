#include <stdio.h>
int main(void) {
    double isxod_summa = 0.0;
    double skidka_koef = 0.0;
    double summa_skidki = 0.0;
    double itog_oplata = 0.0;
    printf("Введите сумму покупки: \n");
    if (scanf("%lf", &isxod_summa) != 1 || isxod_summa < 0) {
        printf("Некорректный ввод.\n");
        return 1;
    }
    if (isxod_summa > 1000.0) {
        skidka_koef = 0.15;
    } else if (isxod_summa > 500.0) {
        skidka_koef = 0.10;
    } else if (isxod_summa > 100.0) {
        skidka_koef = 0.05;
    } else {
        skidka_koef = 0.0;
    }
    summa_skidki = isxod_summa * skidka_koef;
    itog_oplata = isxod_summa - summa_skidki;
    printf("Исходная сумма: %.2f\n", isxod_summa);
    printf("Применённая скидка: %.0f%%\n", skidka_koef * 100);
    printf("Сумма скидки: %.2f\n", summa_skidki);
    printf("Итоговая стоимость к оплате: %.2f\n", itog_oplata);
    return 0;
}