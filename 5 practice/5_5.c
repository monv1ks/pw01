#include <stdio.h>
double calc(double a, double b) {
    return (a * a + b * b) / (a * b);
}

int main(void) {
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2) {
        if (a == 0.0 || b == 0.0) {
            printf("Ошибка, деление на ноль\n");
            continue;
        }
        double result = calc(a, b);
        printf("Результат:%.4f\n", result);
    }
    return 0;
}