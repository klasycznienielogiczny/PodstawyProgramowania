//Proszę zdefiniować wskaźnik do funkcji i użyć go do wyświetlenia tego samego tekstu przy pomocy 3 funkcji:
//Proszę o napisanie kilku funkcji, które będą przyjmowały tekst i wyświetlały w różnych nawiasach.
#include <stdio.h>

void okragle(char tekst[]){
    printf("(%s)\n",tekst);
}

void kwadratowe(char tekst[]){
    printf("[%s]\n",tekst);
}

void trojkatne(char tekst[]){
    printf("<%s>\n",tekst);
}

int main(){
    char tekst[]="Przykladowy tekst";
    void (*nawiasy)(char tab[]);
    nawiasy=okragle; nawiasy(tekst);
    nawiasy=kwadratowe; nawiasy(tekst);
    nawiasy=trojkatne; nawiasy("kwadratowe");
}