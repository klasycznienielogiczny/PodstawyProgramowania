//- Proszę o napisanie funkcji, która połączy tablicę słów w jeden tekst i zwróci
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* polacz(int a, int b, char tab[a][b]){
    char *tabb=malloc(sizeof(char)*a*b);
    int tmp=0;
    for(int i=0;i<a;++i)
        for(int j=0;j<b;++j) {
            if (tab[i][j]=='\0') continue;
            tabb[tmp++] = tab[i][j];
        }
    tabb[tmp]='\0';
    return tabb;
}

int main(){
    char tekst[7][5]={"sma","cz","ne","g","o"," ","jajka"};
    printf("%s",polacz(7,5,tekst));
    return 0;
}