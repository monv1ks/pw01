#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    int sum = 0;
    int counter = 1;
    while (counter <= n) {
        sum += counter;
        counter++;
    }
    printf("Сумма первых %d чисел равна: %d",n,sum);
    return 0;
}