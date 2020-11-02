#include <stdio.h>
#include <math.h>

// zadanie za plusa
int main() {
    int k,w;
    printf("Podaj ilosc wierszy: ");
    scanf("%d",&w);
    printf("Podaj ilosc kolumn: ");
    scanf("%d",&k);
    int tab[w][k];
    for(int i=0;i<k;i++) {
        for (int j = 0; j < w; j++) {
            printf("\nPodaj liczbe tab[%d][%d]:", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
    printf("Transponowane: \n");
    for(int j=0;j<k;j++){
        for(int i=0;i<w;i++){
            printf("%d\t",tab[j][i]);
        }
        printf("\n");
    }
    return 0;
}