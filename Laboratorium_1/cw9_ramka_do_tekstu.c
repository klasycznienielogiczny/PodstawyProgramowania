//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
#include <math.h>
// Program rysuje ramkę wokół podanego tekstu, w konsoli
int main() {
    char tekst[]=" Ziobro przestan mi rodzine przesladowac ";
    for(int i=0;i<sizeof(tekst)+1;i++)
        printf("~");
    printf("\n|%s|\n",tekst);
    for(int i=0;i<sizeof(tekst)+1;i++)
        printf("~");
    return 0;
}