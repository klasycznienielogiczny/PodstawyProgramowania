//- Napisz funckcje dodającą dwa drzewa
#include <stdio.h>
#include <stdlib.h>

struct drzewo{
    struct drzewo *lewy;
    struct drzewo *prawy;
    int liczba;
};

void wstaw(struct drzewo *dr, int el){
    struct drzewo *tmp;
    struct drzewo *new=malloc(sizeof (struct drzewo));
    new->lewy=NULL;
    new->prawy=NULL;
    new->liczba=el;
    tmp=dr;
    if(tmp==NULL)
        dr=new;
    else{
        while(1){
            if(tmp->liczba > el) {
                if (tmp->lewy == NULL) {
                    tmp->lewy = new;
                    break;
                } else
                    tmp = tmp->lewy;
            }
            if(tmp->liczba < el) {
                if (tmp->prawy == NULL) {
                    tmp->prawy = new;
                    break;
                } else
                    tmp = tmp->prawy;
            }
        }
    }
}

struct drzewo* dodaj(struct drzewo *d1, struct drzewo *d2){
    if (d1==NULL && d2==NULL)
        return NULL;
    struct drzewo *new=(struct drzewo *)malloc(sizeof (struct drzewo));

    if(d1 != NULL && d2 != NULL){
        new->liczba=d1->liczba + d2->liczba;
        new->lewy=dodaj(d1->lewy,d2->lewy);
        new->prawy=dodaj(d1->prawy, d2->prawy);
    }
    else if(d1!=NULL){
        new->liczba=d1->liczba;
        new->lewy=dodaj(d1->lewy,NULL);
        new->prawy=dodaj(d1->prawy,NULL);
    }
    else if(d2!=NULL){
        new->liczba=d2->liczba;
        new->lewy=dodaj(NULL,d2->lewy);
        new->prawy=dodaj(NULL,d2->prawy);
    }
    return new;
}
/*
struct drzewo* dodaj(struct drzewo* t1, struct drzewo* t2) {
    if (t1 == NULL && t2 == NULL) return NULL;
    else if (t1 == NULL) return t2;
    else if (t2 == NULL) return t1;

    struct drzewo* result = (struct drzewo*) malloc(sizeof(struct drzewo));
    result->liczba = t1->liczba + t2->liczba;
    result->lewy = dodaj(t1->lewy, t2->lewy);
    result->prawy = dodaj(t1->prawy, t2->prawy);

    return result;
}*/

void wypisz(struct drzewo *dr){
    if(dr==0) return;
    wypisz(dr->lewy);
    printf(" %d", dr->liczba);
    wypisz(dr->prawy);
}

int main(){
    struct drzewo *pdr1=(struct drzewo *)malloc(sizeof (struct drzewo));
    struct drzewo *pdr2=(struct drzewo *)malloc(sizeof (struct drzewo));
    pdr1->lewy=NULL;
    pdr2->lewy=NULL;
    pdr1->prawy=NULL;
    pdr2->prawy=NULL;
    pdr1->liczba=1;
    pdr2->liczba=2;
    wstaw(pdr1,5);
    wstaw(pdr1,7);
    wstaw(pdr1,0);
    wstaw(pdr2,1);
    wstaw(pdr2,9);
    wstaw(pdr2,4);
    wstaw(pdr2,3);
    wstaw(pdr2,18);
    /* char sciezka[64]="";
    minh_sciezka(pdr1,sciezka);
    printf("Sciezka do najkrotszego: %s\n",sciezka);*/
    printf("\nWypisanie drzewa1:\n");
    wypisz(pdr1);
    printf("\nWypisanie drzewa2:\n");
    wypisz(pdr2);
    struct drzewo *suma=dodaj(pdr1,pdr2);
    printf("\nWypisanie sumy drzewo2+drzewo1:\n");
    wypisz(suma);
    return 0;
}