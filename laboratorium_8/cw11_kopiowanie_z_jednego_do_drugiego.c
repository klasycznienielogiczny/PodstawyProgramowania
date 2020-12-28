//cw11- Napisać program, który skopiuje jeden plik do drugiego
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f1, *f2;
    if((f1=fopen("wodz.txt","r"))==NULL){
        fprintf(stderr, "Nie moge otworzyc pliku oryginalnego!\n");
        exit(1);
    }
    if((f2=fopen("wodz2.txt","w"))==NULL){
        fprintf(stderr, "Nie moge otworzyc pliku drugiego!\n");
        exit(1);
    }
    char tekst[128], *res;

    while(1){
        res=fgets(tekst, 128,f1);
        if(res!=NULL){
            fprintf(f2,"%s", tekst);
            if (feof(f1))
                break;
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}