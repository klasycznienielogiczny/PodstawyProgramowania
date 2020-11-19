// cw 6 - Proszę o zdefiniowanie funkcji push_back, która zwiększy rozmiar tablicy i doda nowy element na koniec (w strukturze)

#include <stdio.h>
#include <stdlib.h>

int* push_back(int *tab, int size, int var){
    tab=realloc(tab,(size+1)*sizeof(int));
    tab[size-1]=var;
    return tab;
}

int main(){
    int *tab = malloc(sizeof(int));
    tab[0]=0;
    int rozmiar=sizeof(tab)/sizeof(int);
    tab=push_back(tab,++rozmiar,9);
    tab=push_back(tab,++rozmiar,8);
    tab=push_back(tab,++rozmiar,7);
    tab=push_back(tab,++rozmiar,6);
    tab=push_back(tab,++rozmiar,5);
    for(int i=0;i<rozmiar;++i)
        printf("%d\t",tab[i]);

    return 0;
}