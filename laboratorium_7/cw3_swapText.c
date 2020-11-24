//cw3- Funkcja swapText(), która zamieni wartości dwóch tablic tekstowych (załóżmy, że mają taki sam rozmiar)

#include <stdio.h>
#include <stdlib.h>
void swapText(char *t1, char *t2){
    int i=0,j=0;
    char tmp;
    while(t1[i]!='\0') {
        tmp = t1[i];
        t1[i] = t2[i];
        t2[i++] = tmp;
    }
}

int main(){
    char tekst1[]="Tekst1 spacja Tekst2";
    char tekst2[]="Tekst2 spacja tekst1";
    printf("Przed zamianą:");
    printf("\nTekst 1: %s",tekst1);
    printf("\nTekst 2: %s",tekst2);
    swapText(tekst1, tekst2);
    printf("\nPo zmianie:");
    printf("\nTekst 1: %s",tekst1);
    printf("\nTekst 2: %s",tekst2);
    return 0;
}
