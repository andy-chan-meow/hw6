#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
wchar_t prev = WEOF;
wchar_t q;
int c;
while ((q = getwchar()) != L'#'){
    if (prev == q) {
        c++;
        prev = WEOF;
        continue;
    }
    prev = q;
}
printf("num of pairs: %d\n", c);
    return 0;
    //getchar() считывает по 1 байту за раз, поэтому широкие символы будут считываться некорректно,осколками по 1 байту
    //getwchar() считывает по 2 или 4 байта в зависимости от ОС, чтобы собрать полноценный широкий символ с его широким кодом
}