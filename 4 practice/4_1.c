#include <stdio.h>
#define COEFFICIENT 60
int main(void) {
    int total_seconds;
    while (scanf("%d", &total_seconds) == 1) {
        if (total_seconds < 0) {
            break;
        }
        int minutes = total_seconds / COEFFICIENT;
        int seconds = total_seconds % COEFFICIENT;
        printf("Результат: %d мин %d сек\n", minutes, seconds);
    }
    return 0;
}