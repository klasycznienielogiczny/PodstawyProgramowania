//Funkcja sort(), która sortuje tablice (można tam w środku użyć qsort)
#include <stdio.h>
#include <stdlib.h>

int porownywarka(const void *a,const void *b){
    if (*(int*)a < *(int*)b) return -1;
    else if (*(int*)a > *(int*)b) return 1;
    else return 0;
}

void sort(int *p, int*k, int ile){
    qsort(p,ile,sizeof(int), porownywarka);
    qsort(k,ile,sizeof(int), porownywarka);
    printf("\n");
}

int main(){
    int ile;
    printf("Ile liczb?");
    scanf(" %d",&ile);
    int *tab1=malloc(ile*sizeof(int));
    int *tab2=malloc(ile*sizeof(int));
    printf("Wypelnij tablice 1:\n");
    for(int i=0;i<ile;++i){
        printf("Podaj liczbe:");
        scanf(" %d",&tab1[i]);
    }
    printf("Koniec!\nWypelnij tablice 2:\n");
    for(int i=0;i<ile;++i){
        printf("Podaj liczbe:");
        scanf(" %d",&tab2[i]);
    }
    printf("Przed sortowaniem (tablica 1):\n");
    for(int i=0;i<ile;++i){
        printf("%d\t",tab1[i]);
    }
    printf("\nPrzed sortowaniem (tablica 2):\n");
    for(int i=0;i<ile;++i){
        printf("%d\t",tab2[i]);
    }
    sort(tab1, tab2, ile);

    printf("Po sortowaniu (tablica 1):\n");
    for(int i=0;i<ile;++i){
        printf("%d\t",tab1[i]);
    }
    printf("\nPo sortowaniu (tablica 2):\n");
    for(int i=0;i<ile;++i){
        printf("%d\t",tab2[i]);
    }
    free(tab1);
    free(tab2);
    return 0;
}
