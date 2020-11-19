//- Proszę o napisanie funkcji odejmującej jedną macierz od drugiej, macierze mają wymiar 2*2
#include <stdio.h>
#include <stdlib.h>

int **fun(int a,int b){
    int **wsk=(int **)malloc(sizeof(int*)*a);
    for(int i=0;i<a;++i)
        wsk[i]=(int *)malloc(sizeof(int)*a);

    for(int i=0;i<a;++i)
        for(int j=0;j<b;++j)
            wsk[i][j]=0;

    if(wsk!=NULL) {
        printf("Udalo sie\n");
    }
    return wsk;
}

void czysc(int **tab){
    for(int i=0;i<sizeof(tab)/sizeof(int*);++i)
        free(tab[i]);
    free(tab);
    tab=NULL;
}

void odejmij(int a, int b,int **tab1,int **tab2, int **tab3){
    for(int i=0;i<a;++i)
        for(int j=0;j<b;++j)
            tab3[i][j]=tab1[i][j]-tab2[i][j];
}

int main(){
    int a, b, tmp;
    int **tab1, **tab2,**tab3;
    printf("Podaj wymiary: w x k:");
    scanf("%d %d",&a,&b);
    tab1 = fun(a,b);
    tab2 = fun(a,b);
    tab3 = fun(a,b);
    printf("Podaj elementy 1 macierzy:");
    for(int i=0;i<a;++i)
        for(int j=0;j<b;++j)
            scanf(" %d", &tab1[i][j]);


    printf("Podaj elementy 2 macierzy:");
    for(int i=0;i<a;++i)
        for(int j=0;j<b;++j)
            scanf(" %d", &tab2[i][j]);


    odejmij(a,b,tab1,tab2,tab3);
    printf("\nPo odejmowaniu:\n");
    for(int i=0;i<a;++i) {
        for (int j = 0; j < b; ++j)
            printf("%d \t", tab3[i][j]);
        printf("\n");
    }
    czysc(tab1);
    czysc(tab2);
    czysc(tab3);
    return 0;
}