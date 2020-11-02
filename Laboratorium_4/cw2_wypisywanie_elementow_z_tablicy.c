#include <stdio.h>

int pisz(int tab[], int n){
    int suma =0;
    for (int i=0; i<n; ++i)
        printf("%d\t",tab[i]);
    return suma;
}

int main() {
    int tabs[]={5,4,8,7,9,10,58,47,85};
    pisz(tabs,sizeof(tabs)/sizeof(int));
    return 0;
}