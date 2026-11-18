#include "myarrfunc.h"

int last_positive_value(int *p, int n)
{
    while (n > 0) {
        n--;
        if (*(p + n) > 0) return *(p + n);
    }
    return 0;
}

int count_below(int *p, int n, int k)
{
    int i, c = 0;
    for (i = 0; i < n; i++) {
        if (*(p + i) < k) c++;
    }
    return c;
}

int indices_above(int *p, int n, int k, int *out)
{
    int i, c = 0;
    for (i = 0; i < n; i++) {
        if (*(p + i) > k) {
            *(out + c) = i;
            c++;
        }
    }
    return c;
}