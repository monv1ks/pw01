#include <stdio.h>
#include <ctype.h>
int main(void) {
    printf("Введите символы и программа покажет, сколько получилось предложений из вашего потока (для завершения ввода подать EOF): \n");
    int a = 0;
    long sentences = 0;
    long total = 0;
    while ((a = getchar()) != EOF) {
        total++;
        if (a == '.' || a == '?' || a == '!') {
            sentences++;
        }
    }
    printf("Количество предложений: %ld\n",sentences);
    printf("Количество символов (без учёта EOF): %ld\n",(int)total-1);
    return 0;
}