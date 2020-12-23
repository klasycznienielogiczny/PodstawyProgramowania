//cw5- Program, który spróbuje odczytać pewien plik i wyświetlić na ekran,
// jednakże w razie gdy plik nie istnieje proszę wyświetlić informacje o błędzie na standardowe wyjście błędów.

#include <stdio.h> //za plusa
#include <stdlib.h>

int main(){
    FILE *f;
    if((f=fopen("Szymborskaax.txt","r"))==NULL){
        fprintf(stderr, "Nie moge otworzyc pliku!\n");
        exit(1);
    }
    char tekst[128], *res;

    while(1){
        res=fgets(tekst, 128,f);
        if(res!=NULL){
            printf("%s", tekst);
            if (feof(f))
                break;
        }
    }
    fclose(f);
    return 0;
}