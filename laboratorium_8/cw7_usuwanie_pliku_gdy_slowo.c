//cw7- Program, który przeszuka plik w poszukiwaniu jakiegoś
//słowa i w razie jego znalezienia plik powinien być usunięty:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    FILE *f;
    if((f=fopen("Szymborskaax.txt","r"))==NULL){
        fprintf(stderr, "Nie moge otworzyc pliku!\n");
        exit(1);
    }
    char tekst[64],c;
    int index=0;
    while((c=fgetc(f))!=EOF){
        if(!isspace(c)) {
            tekst[index++] = c;
            if(index >=64){
                printf("Przekroczono dlugosc slowa!\n");
                fclose(f);
                exit (-1);
            }
        }
        else{
            if(index==0)
                continue;
            tekst[index]='\0';
            if(strcmp(tekst,"sie")==0){
                fclose(f);
                remove("Szymborskaax.txt");
                printf("Usunieto plik\n");
                return 0;
            }
            //printf("%s\n",tekst);
            index=0;
        }
    }
    fclose(f);
    return 0;
}