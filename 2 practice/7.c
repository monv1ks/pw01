#include <stdio.h>

int main(void)
{
    double x;
    scanf("%lf", &x);
    double double_x = x;
    float float_x = (float)x;
    printf("FLOAT: %.6f\n", float_x);
    printf("DOUBLE: %.6f\n", double_x);
    printf("LDOUBLE: %.6f\n", double_x);
    printf("FLOAT+1: %.6f\n", float_x + 1);
    printf("DOUBLE+1: %.6f\n", double_x + 1);
    printf("LDOUBLE+1: %.6f\n", double_x + 1);
    return 0;
}