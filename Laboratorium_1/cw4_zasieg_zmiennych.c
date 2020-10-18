//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
// Program pokazuje zasiegi zmiennych
int zmienna=5;

int main() {
    {
        int zmienna = 8;
        printf("%d\n", zmienna);
    }
    printf("%d", zmienna);
    return 0;
}