#include <stdio.h>
int main(void)
{
    int n;
    printf("Введите n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Введите положительное ненулевое число");
        return 1;
    }
    int current_value = 0;
    int counter = 0;
    while (counter < n)
    {
        printf("%d ", current_value);
        current_value = current_value + 3;
        counter++; // инкремент от английского префикс in = добавлять, дикременет от англ. префикс de = убавлять
    }
    printf("\n");
    return 0;
}