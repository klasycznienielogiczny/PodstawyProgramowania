// cw 7- Proszę o zdefiniowanie struktury Array, która będzie trzymała wymiar, oraz ilość elementów, oraz o funkcje
// construct, która dla zadanego rozmiaru utworzy Array, oraz dealloc, która zwolni pamięć po strukturze

#include <stdio.h>
#include <stdlib.h>

struct Array{
    unsigned int w;
    unsigned int k;
    unsigned int il_el;
    int **dane;
};

struct Array construct(unsigned a,unsigned int b){
    int **macierz=(int**)malloc(sizeof(int*)*a);
    for(int i=0; i<a; ++i)
        macierz[i]=(int*)malloc(sizeof(int)*b);
    if(macierz!=NULL)
        printf("\t\t\tUdalo sie!\n");
    struct Array matrix={a,b,a*b,macierz};
    return matrix;
}

void dealloc(struct Array m){
    for(int i=0;i<m.k;++i)
        free(m.dane[i]);
    free(m.dane);
    m.dane=NULL;
    printf("\t\t\tZneutralizowano!\n");
}

struct Array insert(struct Array a){
    printf("Wprowadz wartosci\n");
    for(int i=0;i<a.w;++i)
        for(int j=0;j<a.k;++j){
            printf("[%d][%d]:",i+1,j+1);
            scanf(" %d",&a.dane[i][j]);
        }
    return a;
}

struct Array add(struct Array a1, struct Array a2){
    if(a1.w==a2.w && a1.k==a2.k){
        struct Array result=construct(a1.w,a1.k);
        for(int i=0;i<a1.w;++i)
            for(int j=0;j<a1.k;++j)
                result.dane[i][j]=a1.dane[i][j]+a2.dane[i][j];
        return result;
    }
    else
        printf("Blad! Rozne wymiary macierzy!\n");
}

struct Array sub(struct Array a1, struct Array a2){
    if(a1.w==a2.w && a1.k==a2.k){
        struct Array result=construct(a1.w,a1.k);
        for(int i=0;i<a1.w;++i)
            for(int j=0;j<a1.k;++j)
                result.dane[i][j]=a1.dane[i][j]-a2.dane[i][j];
        return result;
    }
    else
        printf("Blad! Rozne wymiary macierzy!\n");
}

void show(struct Array a){
    for(int i=0;i<a.w;++i) {
        for (int j = 0; j < a.k; ++j)
            printf("%d\t", a.dane[i][j]);
        printf("\n");
    }
}

int main(){
    unsigned int a,b;
    printf("Podaj wymiary macierzy: ");
    scanf(" %d x %d",&a,&b);
    struct Array tmp1=insert(construct(a,b));
    struct Array tmp2=insert(construct(a,b));
    show(add(tmp1,tmp2));
    show(sub(tmp1,tmp2));
    dealloc(tmp1);
    dealloc(tmp2);
    return 0;
}