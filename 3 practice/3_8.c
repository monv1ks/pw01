#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main(void)
{
const char first[24] = "Сбой матрицы";
const wchar_t second[26] = L"Сбой матрицы";
setlocale(LC_ALL,"");
printf("char  -> sizeof: %zu bytes, strlen: %zu chars\n",sizeof(first),strlen(first));
printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",sizeof(second),wcslen(second));
return 0;
}