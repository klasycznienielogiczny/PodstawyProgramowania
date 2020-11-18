#include <stdio.h> // za plusa
#include <stdlib.h>


int *fun(int a){
    int *wsk=malloc(sizeof(int)*a);
    if(wsk!=NULL) {
        printf("Udalo sie\n");
        for (int i = 0; i < a; ++i)
            wsk[i] = 0;
    }
    return wsk;
}

int main(){
    int a, *tab;
    scanf("%d",&a);
    tab = fun(a);
    free(tab);
    return 0;
}