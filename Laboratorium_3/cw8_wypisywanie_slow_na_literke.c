#include <stdio.h> //wyswietla slowa na wprowadzona literke

int main() {
    char literka;
    char tekst[]="noniewiem";
    printf("Podaj literke:");
    scanf("%c",&literka);
    switch(literka){
        case 'a':
        case 'A':
            printf("%c%s",literka,tekst);
            break;
        case 'b':
        case 'B':
            printf("%c%s",literka,tekst);
            break;
        case 'c':
        case 'C':
            printf("%c%s",literka,tekst);
            break;
        default:
            break;
    }

    return 0;
}