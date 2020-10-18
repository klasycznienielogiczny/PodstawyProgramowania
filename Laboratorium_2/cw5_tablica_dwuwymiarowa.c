//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
#include <math.h>
// Działanie na tablicach 2D
int main() {
    int tab[4][20];
    for (int i=0;i<4;++i)
    {
        scanf("%s",tab[i]);
    }

    for (int i=0;i<4;++i)
    {
        printf("%s, ",tab[i]);
    }
    return 0;
}