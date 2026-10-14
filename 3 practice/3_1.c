#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(void)
{
setlocale(LC_ALL, "");
char first_word[20] = "SibSUTIS";
printf("SIZEOF: %zu \n", sizeof(first_word));
printf("STRLEN: %zu \n", strlen(first_word));
printf("FREE_BYTES: %zu \n", sizeof(first_word)-strlen(first_word)-1);

char second_word[20] = "СибГУТИ";
printf("SIZEOF: %zu \n", sizeof(second_word));
printf("STRLEN: %zu \n", strlen(second_word));
printf("FREE_BYTES: %zu \n", sizeof(second_word)-strlen(second_word)-1);
return 0;
}