//Do powyższego pliku dopisać na koniec kolejny cytat tej samej osoby:
#include <stdio.h> //za plusa
#include <stdlib.h>

int main(){
    FILE *f;
    char tekst[]={"\nCzytanie ksiazek to najpiekniejsza zabawa, jaka ludzkosc sobie wymyslila\n"};
    if((f=fopen("Szymborska.txt","a+"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    fprintf(f,"%s",tekst);
    fclose(f);
    return 0;
}