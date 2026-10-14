#include <stdio.h>
#include <string.h>
int main(void)
{
char string[100];
int width;
scanf("%99s %d",string,&width);
printf("%*s\n",width,string);
printf("%-*s",width + 5, string);
return 0;
}