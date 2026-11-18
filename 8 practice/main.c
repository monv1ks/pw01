#include <stdio.h>
#include "myarrfunc.h"

void clear()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
    int a[MAXN], b[MAXN];
    int n = 0, i, k, r;
    char op;

    printf("a - размер\n");
    printf("b - заполнить\n");
    printf("c - показать\n");
    printf("d - последний положительный\n");
    printf("e - сколько ниже k\n");
    printf("f - индексы выше k\n");
    printf("g - выход\n");

    for (;;) {
        printf("> ");
        if (scanf(" %c", &op) != 1) break;
        switch (op) {
        case 'a':
            printf("n = ");
            if (scanf("%d", &n) != 1 || n < 1 || n > MAXN) {
                clear();
                n = 0;
            }
            break;
        case 'b':
            for (i = 0; i < n; i++) {
                if (scanf("%d", &a[i]) != 1) {
                    clear();
                    n = 0;
                    break;
                }
            }
            break;
        case 'c':
            for (i = 0; i < n; i++)
                printf("%d: %d [%p]\n", i, a[i], (void *)&a[i]);
            break;
        case 'd':
            r = last_positive_value(a, n);
            if (r == 0) printf("нет\n");
            else printf("%d\n", r);
            break;
        case 'e':
            printf("k = ");
            if (scanf("%d", &k) != 1) { clear(); break; }
            printf("%d\n", count_below(a, n, k));
            break;
        case 'f':
            printf("k = ");
            if (scanf("%d", &k) != 1) { clear(); break; }
            r = indices_above(a, n, k, b);
            if (r == 0) printf("нет\n");
            else {
                for (i = 0; i < r; i++) printf("%d ", b[i]);
                printf("\n");
            }
            break;
        case 'g':
            return 0;
        }
    }
    return 0;
}