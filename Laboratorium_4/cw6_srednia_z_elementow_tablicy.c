#include <stdio.h>  //<--- za plus
#include <string.h>

float average(float *tab, int n) {
    float suma=0;
    for (int i=0; i<n;++i)
        suma+=tab[i];

    return suma/n;
}

int main() {
    float tabs[]={8.5, 7.4, 7, 9,10};
    printf("Srednia: %.3f\n", average(tabs, sizeof(tabs)/sizeof(float)));
    return 0;
}