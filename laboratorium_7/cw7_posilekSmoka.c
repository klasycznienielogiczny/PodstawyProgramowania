//cw7 posiłek smoka - przyjmuje płeć, losuje człowieka, jeśli płeć się zgadza to zjada i osobę wyrzucamy z listy

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

struct lista{
    int id;
    char imie[20];
    char plec;
    struct lista* next;
};

void dodaj(int id, char imie[], char plec, struct lista *lis){
    //struct lista* tmp=lis;
    struct lista* nowa;
    nowa=malloc(sizeof(struct lista));
    nowa->id=id;
    strcpy(nowa->imie, imie);
    nowa->plec=plec;
    nowa->next=NULL;
    if(nowa!=NULL) {
        while (lis->next)
            lis = lis->next;
        lis->next = nowa;
    }
    printf("dodano: id:%d imie:%s plec:%c\n", nowa->id, nowa->imie, nowa->plec);
}

void usun(struct lista* list, int id){
    struct lista* wsk=list;
    while(wsk->next != NULL){
        if(wsk->next->id==id){
            struct lista* del=wsk->next;
            wsk->next=del->next;
            printf("\nUsunieto: id:%d\n",del->id);
            free(del);
        }
        else
            wsk=wsk->next;
    }
}

void zjedz(struct lista* list, int id, char plec){
    bool zjedzona=false;
    struct lista* wsk=list;
    while(wsk->next != NULL){
        if(wsk->next->id==id && wsk->next->plec==plec){
            struct lista* del=wsk->next;
            wsk->next=del->next;
            printf("\nZjedzono: Imie:%s, id=%d\n",del->imie,del->id);
            free(del);
            zjedzona=true;
        }
        else
            wsk=wsk->next;
    }
    if(!zjedzona)
        printf("\nNie zjedzono nikogo!\nSmok jest glodny!\n");
}

void wypisz(struct lista* list){
    struct lista* tmp=list;
    printf("Zyja:\t");
    while(tmp){
        printf("%s\t",tmp->imie);
        tmp=tmp->next;
    }
    printf("\n");
}

void posilekSmoka(char plec, struct lista* list){
    int zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    int osoba=rand()%5;
    printf("\nSmok bedzie jadl!\n");
    zjedz(list,osoba,plec);
}

int main(){

    struct lista *osoby;
    osoby->id=10;
    strcpy(osoby->imie,"imie");
    osoby->plec='m';
    osoby->next=NULL;
    dodaj(0, "imie0",'k',osoby);
    dodaj(1, "imie1",'m',osoby);
    dodaj(2, "imie2",'k',osoby);
    dodaj(3, "imie3",'m',osoby);
    dodaj(4, "imie4",'k',osoby);
    wypisz(osoby);
    posilekSmoka('k',osoby);
    //usun(osoby,3);
    wypisz(osoby);
    posilekSmoka('m',osoby);
    wypisz(osoby);
    return 0;
}