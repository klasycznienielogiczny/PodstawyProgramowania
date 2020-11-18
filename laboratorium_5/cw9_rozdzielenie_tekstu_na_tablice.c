// - Skopiowanie z tekstu zawierającego imię i nazwisko do dwóch oddzienych tablic (w jednej samo imię, w drugiej samo nazwisko)

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void rozdziel(char tekst[], char imie[], char nazwisko[],int n){
    bool first=true;
    int j=0;
    for(int i=0; i<n; ++i){
        if(tekst[i]==' '){
            first=false;
            imie[i++]='\0';
        }
        if(first==true){
            imie[i]=tekst[i];
        }
        else{
            nazwisko[j++]=tekst[i];
        }
    }
    nazwisko[j]='\0';
}

int main(){
    char imie[128], nazwisko[128], tekst[]="imie nazwisko";
    printf("Tekst: %s\n",tekst);
    int n=sizeof(tekst)/sizeof(char);
    rozdziel(tekst, imie, nazwisko, n);
    printf("Imie: %s\n",imie);
    printf("Nazwisko: %s\n",nazwisko);
    return 0;
}