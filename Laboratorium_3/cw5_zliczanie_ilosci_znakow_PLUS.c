#include <stdio.h>
#include <math.h>

// zadanie za plusa
int main() {
    char tekst[256];
    printf("Podaj tekst:");
    scanf("%s",tekst);
    int i=0;
    while(tekst[i]!='\0')
        i++;
    printf("Ilosc znakow: %d",i);
    return 0;
}