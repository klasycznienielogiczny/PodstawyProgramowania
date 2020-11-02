#include <stdio.h>
#include <time.h>// <--- ma mieć deklaracje time.h na początku
#include <stdlib.h>

int czy_wolne(int tab[]){
    for(int i=0;i<5;i++)
        if(tab[i]==0)
            return 1;
    return 0;
}

int main(){
    char obietnice[5][256]={"Kielbasy, browary i inne towary","Opieke lekarska i rente wysoka","Kokosy, banany","Zamiast pracy taniec i spiew","Kazdy bedzie mial co bedzie chcial"};
    int a,seed,zuzyte[5]={0,0,0,0,0};
    time_t time_v;
    seed = time(&time_v);
    char decyzja='y';
    do{
        if(zuzyte[a=rand()%5]==0){
            zuzyte[a]++;
            printf("%s",obietnice[a]);
        }
        else continue;
        if(czy_wolne(zuzyte)){
            printf("\nLosujemy dalej? y/n");
            scanf(" %c",&decyzja);
        }
        else{
            printf("\nKoniec obietnic!\n");
            return 0;
        }
    }while(decyzja=='y' || decyzja=='Y');
}