#include <stdio.h>
#include <string.h>
int main(void)
{
    char user_name[100];
    scanf("%99s",user_name);
    int len_name = (int)strlen(user_name);
    printf("\"%s\"\n", user_name);
    printf("\"%20s\"\n", user_name);
    printf("\"%-20s\"\n", user_name);
    printf("\"%-*s\"\n", len_name + 5, user_name);
    return 0;
}