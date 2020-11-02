#include <stdio.h>

int main() {
    int suma=0,i=30;
    while(i<=100)
        suma += i++;
    printf("Suma liczb od 30 do 100 wynosi: %d", suma);
    return 0;
}