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
    for(int i=0;i<sizeof(tab)/sizeof(int);++i)
        free(tab[i]);
    free(tab);
    tab=NULL;
}

int main(){
    int a, b;
    int **tab;
    scanf("%d %d",&a,&b);
    tab = fun(a,b);
    czysc(tab);
    return 0;
}