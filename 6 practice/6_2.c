#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "");
    wint_t wch;
    int count_a = 0;
    int count_e = 0;
    wint_t a1_eng = L'a';
    wint_t a2_rus = L'а';
    wint_t e1_eng = L'e';
    wint_t e2_rus = L'e';
    wprintf(L"Введите широкие символы, для выхода из цикла введите '#': \n");
    while ((wch = getwchar()) != L'#') {
        if (wch == a1_eng || wch == a2_rus) count_a++;
        if (wch == e1_eng || wch == e2_rus) count_e++;
    }
    wprintf(L"Количество символов 'a'/'а' в потоке: %d\n",count_a);
    wprintf(L"Количество символов 'e'/'е' в потоке: %d\n",count_e);
}