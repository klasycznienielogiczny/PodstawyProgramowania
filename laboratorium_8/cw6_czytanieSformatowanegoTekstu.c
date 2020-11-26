//cw6 Program, który odczyta z pliku imię i wiek, format danych w pliku: "Jestem Imie, mam 20 lat", po odczytaniu powinno się wyświetlić "Imie", oraz 20
#include <stdio.h> //za plusa
#include <stdlib.h>
// poniżej tworzymy plik
/*
int main(){
    FILE *f;
    if((f=fopen("imiewiek.txt","w"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    char tekst[]={"Jestem Imie, wiek 20"};
    fprintf(f,"%s",tekst);
    fclose(f);
    return 0;
}*/
//właściwa część zadania
int main(){
    FILE *f;
    if((f=fopen("imiewiek.txt","r"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    char imie[20];
    int wiek;
    fscanf(f,"Jestem %s wiek %d",imie,&wiek);
    printf("Imie: %s wiek: %d\n",imie,wiek);
    fclose(f);
    return 0;
}