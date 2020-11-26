//Proszę wpisać do pliku ulubiony cytat, nazywając plik nazwiskiem osoby, która go powiedziała:
//A: jak sprawdzić, czy plik się udało otworzyć
#include <stdio.h> //za plusa
#include <stdlib.h>

int main(){
    FILE *f;
    char tekst[]={"Zaden dzien sie nie powtorzy,\n"
                  "nie ma dwoch podobnych nocy,\n"
                  "dwoch tych samych pocalunkow,\n"
                  "dwoch jednakich spojrzen w oczy."};
    if((f=fopen("Szymborska.txt","w"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    fprintf(f,"%s",tekst);
    fclose(f);
    return 0;
}