//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
// Program wczytuje z konsoli liczbę i znak, a następnie wyświetla je na konsoli
int main() {
    int a;
    char b;
    printf("Podaj liczbe\n");
    scanf("%d", &a);
    printf("Podaj litere\n");
    scanf("%c", &b);
    printf(" Liczba %d , litera %c",a,b);
    return 0;
}