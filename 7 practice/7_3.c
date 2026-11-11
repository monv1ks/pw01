#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(void) {
    printf("Введите два дробных числа, чтобы получить модуль их разности, делённый на их сумму (любой символ, кроме цифры, чтобы выйти): \n");
    double num1 = 0.0;
    double num2 = 0.0;
    double result;
    while (scanf("%lf %lf", &num1, &num2) == 2){
        if ((num1 + num2) == 0) {
            printf("Сумма чисел равна нулю, но на ноль делить нельзя, введите другие числа, сумма которых не равна нулю\n");
        } else {
        result = (fabs(num1 - num2) / (num1 + num2));
        }
    printf("Модуль разности чисел, деленный на их сумму равен: %.4f\n", result);
    }
    return 0;
}    