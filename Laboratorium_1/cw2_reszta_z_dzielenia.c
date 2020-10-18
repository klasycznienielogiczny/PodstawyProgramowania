//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
//Reszta z dzielenia jednej liczby przez drugą
int main() {
    int a,b,reszta;
    printf("Podaj liczby\n");
    scanf("%d %d", &a, &b);
    reszta=a%b;
    printf("Reszta z %d \\ %d = %d",a,b,reszta);
    return 0;
}