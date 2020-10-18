//
// Created by piotr on 18.10.2020.
//

#include <stdio.h> //PLUS za zadanie
#include <math.h>
// Konwerter km -> m i m->km
int main() {
    printf("1 - m->km\n2 - km-> m\n");
    int a;
    scanf("%d",&a);
    switch(a){
        float b;
        case 1:
            printf("Podaj ilosc: ");
            scanf("%f",&b);
            printf("%f mili to: %f km\n ", b, 1.609344*b);
            break;
        case 2:
            printf("Podaj ilosc: ");
            scanf("%f",&b);
            printf("%f km to: %f m\n ", b, b/1.609344);
            break;
        default:
            printf("Operacja nieznana!\n");
            break;
    }
    return 0;
}