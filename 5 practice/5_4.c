#include <stdio.h>

int main(void) {
    double arr[8];

    arr[0] = 0.0;
    arr[1] = 1.0;
    
    for (int i = 2; i < 8; i++) {
        arr[i] = 2.0 * arr[i-1] + arr[i-2];
    }
    
    for (int i = 0; i < 8; i++) {
        printf("Исходный: %.2f\n", arr[i]);
    }
    
    double max_a = arr[0];
    for (int i = 1; i < 8; i++) {
        if (arr[i] > max_a) {
            max_a = arr[i];
        }
    }
    
    printf("Максимум: %.2f\n", max_a);
    
    return 0;
}