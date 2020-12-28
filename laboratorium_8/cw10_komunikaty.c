//cw10- Proszę o program, który będzie do programu wpisywał tekst: "Komunikat od wodza: ",
// oraz za nim będzie wpisywał różne komunikaty, ale tak aby kolejny komunikat zamazał poprzedni
// (za dwukropkiem zmieniamy)
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    char tekst[]={"Komunikat od wodza: "};
    char komunikat1[]={"Przykladowy komunikat 1, ale dluzszy niz drugi"};
    char komunikat2[]={"Przykladowy komunikat 2, ale krotszy"};
    if((f=fopen("wodz.txt","r+"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    fprintf(f,"%s %s",tekst, komunikat1);
    fseek(f,0,SEEK_END);
    int i = ftell(f);
    fseek(f,-(i-sizeof(tekst)/sizeof(char)),2);
    fprintf(f,"%s",komunikat2);
    if(i>(sizeof(tekst)+sizeof(komunikat2))/sizeof(char)){
        for(int k=i-(sizeof(tekst)+sizeof(komunikat2))/sizeof(char);k>=0;k--)
            fprintf(f,"%s"," ");
    }

    fclose(f);
    return 0;
}