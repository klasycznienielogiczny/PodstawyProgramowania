#include <stdio.h>

int sum(int tab[], int n){
    int suma =0;
    for (int i=0; i<n; ++i)
        suma+=tab[i];
    return suma;
}

int main() {
    int tabs[]={5,4,8,7,9,10,58,47};
    printf("Suma: %d", sum(tabs,8));
    return 0;
}