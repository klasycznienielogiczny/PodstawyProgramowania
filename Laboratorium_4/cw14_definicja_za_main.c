//14. Proszę o zadeklarowanie funkcji, która przyjmuje wszystkie wbudowane typu całkowitoliczbowe i napisanie funkcji
// (poniżej maila), która wyświetli te liczby: definicja za main, deklaracja przed main

#include <stdio.h>
#include <stdlib.h>

void fun(int calkowita, unsigned int bezznaku, long dluga);

int main(){
    int c=-32;
    unsigned int ui=53;
    long dl=658445;
    fun(c,ui,dl);
    return 0;
}

void fun(int calkowita, unsigned int bezznaku, long dluga){
    printf("%d\t%u\t%ld",calkowita,bezznaku,dluga);
}