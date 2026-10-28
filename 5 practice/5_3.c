#include <stdio.h>
#include <math.h>
int main(void){
    int n;
    while(1){
        scanf("%d", &n);
        if (n <= 0) {
            break;
        }
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double i_3 = i * i * i;
        sum += i_3;
    }
    printf("SUM: %.6f\n\n", sum);
    }
    return 0;
}