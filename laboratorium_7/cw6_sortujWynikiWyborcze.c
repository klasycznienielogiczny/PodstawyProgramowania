//cw6 Funkcja sortujWynikiWyborcze, która przyjmie tablice wyników wyborczych w formie tablicy struktur
// typu Wynik {nazwisko, glosy} i posortuje po ilości głosów (+0,5 za użycie funkcji qsort):

#define ST 3
#include <stdio.h>
#include <stdlib.h>

int porownywarka(const void *a,const void *b){
    if (*(int*)a < *(int*)b) return -1;
    else if (*(int*)a > *(int*)b) return 1;
    else return 0;
}

struct kandydat{
    char nazwisko[20];
    int glosy;
};

void sortujWynikiWyborcze(struct kandydat wybory[ST]){
    int *ptr = &wybory->glosy;
    qsort((void*)ptr,ST,sizeof(struct kandydat),porownywarka);
}

int main(){
    struct kandydat k1={"Kowalski", 578};
    struct kandydat k2={"Nowak",5};
    struct kandydat k3={"Franek", 5785};
    struct kandydat wybory[]={k1, k2, k3};
    sortujWynikiWyborcze(wybory);
    printf("Posortowane wyniki:\n");
    for(int i=0;i<ST;++i){
        printf("%d miejsce: %s; glosow: %d\n",i+1,wybory[i].nazwisko,wybory[i].glosy);
    }
    return 0;
}