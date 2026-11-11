#include <stdio.h>
#include <ctype.h>
int main(void) {
    printf("Введите символы и программа заменит все латинские гласные на '*' (для завершения ввода подать EOF): \n");
    int a = 0;
    while ((a = getchar()) != EOF) {
        int lower_a = tolower((unsigned char)(a));
        if (lower_a == 'e' || lower_a == 'y' || lower_a == 'i' || lower_a == 'o' || lower_a == 'a') {
            putchar('*');
        } else {
            putchar(a);
        }
    }
    return 0;
}