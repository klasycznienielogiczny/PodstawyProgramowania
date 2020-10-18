//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
#include <math.h>
// "wizualizacja" piosenki radiotelegrafisty
int main() {
    printf("Ktory syn?");
    int syny;
    scanf("%d",&syny);
    switch(syny)
    {
        case 1:
        case 2:
            printf("Slynal z madrosci ;)");
            break ;
        case 3:
            printf("Gupi byl. Poszedl do lacznosci");
            break ;
        default:
            printf("Jeszcze nie bylo 500+\n");
            break;
    }
    return 0;
}