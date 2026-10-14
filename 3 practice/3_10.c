#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t module1[100], module2[100], module3[100];
    wscanf(L"%ls", module1);
    wscanf(L"%ls", module2);
    wscanf(L"%ls", module3);
    wprintf(L"%-15ls|%20ls|%.5ls\n", module1, module2, module3);
    return 0;
}