#include <stdio.h>

int main(void) {
    const double A = 0.0;
    const double B = 4.0;
    const double H = 0.5;

    int steps = (int)((B-A) / H);
    printf("%-15s | %-14s | %-14s\n","Номер итерации","Значение X","Значение Y");
    for (int i = 0; i <= steps; i++) {
        double X = A + i * H;
        double Y = X / (X + 1.0);
        printf("%-15d | %-12.4f | %-12.4f\n", i + 1, X, Y);
    }
    return 0;
}