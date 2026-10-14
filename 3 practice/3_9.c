#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main(void)
{
setlocale(LC_ALL,"");
wchar_t wc[100];
wscanf(L"%ls",wc);
wprintf(L"Агент %ls авторизован в системе\n",wc);
return 0;
}