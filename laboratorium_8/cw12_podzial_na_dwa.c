//cw12- Napisać program, który podzieli jeden plik na dwa pliki
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *f1, *f2, *f3;
    if((f1=fopen("wodz.txt","r"))==NULL){
        fprintf(stderr, "Nie moge otworzyc pliku oryginalnego!\n");
        exit(1);
    }
    if((f2=fopen("wodz3.txt","w"))==NULL){
        fprintf(stderr, "Nie moge otworzyc pliku drugiego!\n");
        exit(1);
    }
    if((f3=fopen("wodz4.txt","w"))==NULL){
        fprintf(stderr, "Nie moge otworzyc pliku 3!\n");
        exit(1);
    }
    int slowa=0;
    char tekst[64],c;
    int index=0;
    while((c=fgetc(f1))!=EOF) {
        if (!isspace(c)) {
            tekst[index++] = c;
            if (index >= 64) {
                printf("Przekroczono dlugosc slowa!\n");
                fclose(f1);
                exit(-1);
            }
        } else {
            if (index == 0)
                continue;
            tekst[index] = '\0';
            slowa++;
            if (slowa < 5)
                fprintf(f2, "%s ", tekst);
            else
                fprintf(f3, "%s ", tekst);

            index = 0;
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}