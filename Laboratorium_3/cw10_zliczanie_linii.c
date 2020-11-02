#include <stdio.h> // - Program, który będzie zliczał linie dla tesktu z klawiatury,
// do czasu napotkania znaku końca tekstu (na Linuxie Ctr+D, a Windows CTRL+X)

int main() {
    int ilosc=0,znak;
    printf("Podaj tekst:");
    while((znak=getchar())!=EOF)
        if(znak=='\n'){
            ilosc++;
            printf("Ilosc lini: %d",ilosc);
        }
    printf("Ilosc lini: %d \"%d\"",ilosc-1);
    return 0;
}