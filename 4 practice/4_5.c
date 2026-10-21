#include <stdio.h>
double m_to_ft(double meters) {
    const double coefficent =  3.28084;
    return meters * coefficent;
}

int main(void){
    double value;
    printf("Введите длину в метрах: ");
    while (scanf("%lf", &value) == 1) {
        double result = m_to_ft(value);
        printf("%.2f метров = %.2f футов", value, result);
    }
    return 0;
}