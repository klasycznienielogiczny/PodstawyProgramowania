//cw8- Program, który przeszuka plik w poszukiwaniu jakiegoś słowa i w razie jego znalezienia
// proszę zagwiazdkować środek słowa w pliku

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    FILE *f;
    if((f=fopen("Szymborska.txt","r+"))==NULL){
        fprintf(stderr, "Nie moge otworzyc pliku!\n");
        exit(1);
    }
    char tekst[64],c;
    int index=0,offset=0;
    while((c=fgetc(f))!=EOF){
        offset++;
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
            if(strcmp(tekst,"podobnych")==0){
                fseek(f,offset-sizeof("podobnych")/sizeof(char)+1,0);
                //char zmienione[]="p*******h";
                fprintf(f,"p*******h");
                fseek(f,offset,0);
            }
            //printf("%s\n",tekst);
            index=0;
        }
    }
    fclose(f);
    return 0;
}