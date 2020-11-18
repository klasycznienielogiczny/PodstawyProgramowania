//1- Proszę o zaimplementowanie funkcji flegmatyk, która tekst zwróci ze zwielokrotnionymi samogłoskami: 2p i 1,5p i 1p (jeśli losową ilość zwielokratniamy to +1 punkty)

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void flegmatyk(char tekst[], int n){
    int zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    for(int i=0;i<n;++i){
        if(tolower(tekst[i])== 'a' || tolower(tekst[i])== 'e' || tolower(tekst[i])== 'i' || tolower(tekst[i])== 'o' || tolower(tekst[i])== 'u' || tolower(tekst[i])== 'y'){
            for(int j=0;j<(rand()%10)+1;++j){
                printf("%c",tekst[i]);
            }
        }
        else
            printf("%c",tekst[i]);
    }
}

int main(){
    char tekst[]="przykladowy tekst. Wiecej samoglosek";
    int n=sizeof(tekst)/sizeof(char);
    flegmatyk(tekst,n);
    return 0;
}