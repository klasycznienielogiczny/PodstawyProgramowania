//2- Funkcja accumulate, która przyjmie wskaźniki na początek i koniec tablicy, oraz zwróci sumę elementów (nie wyświetli, tylko zwróci)
#include <stdio.h> //za plus

int accumulate(int *tab, int *tabk){
    int suma=0;
    for(int i=0;i<(tabk-tab);++i){
        suma+=tab[i];
    }
    return suma;
}

int main(){
    int tab[]={1,5,6,8,9};
    int *od=&tab[0];
    int *doo=&tab[5];
    printf("%d",accumulate(od,doo));
    return 0;
}