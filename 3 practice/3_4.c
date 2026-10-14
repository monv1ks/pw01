#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "\x48\x65\x6c\x6c\x6f\t\x57\x6f\x72\x6c\x64\n"; // шестнадцатеричная с.с. \x48=H, \x65=e, \x6c=l, \x6c=l, \x6f=o, \x57=W, \x6f=o, \x72=r, \x6c=l, \x64=d
    printf("%s", str);
    printf("STRLEN: %zu\n", strlen(str));
    printf("SIZEOF: %zu\n", sizeof(str));
    return 0;
}