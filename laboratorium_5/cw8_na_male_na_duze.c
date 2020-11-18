//- Funkcja, która zmienia tekst na duże/małe litery //toupper tolower

#include <stdio.h>
#include <ctype.h>

void na_male(char tekst[], int n){
    for(int i=0; i<n; ++i)
        tekst[i]=tolower(tekst[i]);
}

void na_duze(char tekst[], int n){
    for(int i=0; i<n; ++i)
        tekst[i]=toupper(tekst[i]);
}

int main(){
    char tekst[]="PrzyKLADowy TEKScik";
    printf("Oryginalny: %s\n",tekst);
    na_male(tekst,sizeof(tekst)/sizeof(char));
    printf("Male litery: %s\n",tekst);
    na_duze(tekst,sizeof(tekst)/sizeof(char));
    printf("Duze litery: %s\n",tekst);
    return 0;
}