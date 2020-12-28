// - Napisz funkcje przeszukującą drzewo
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void wypisz(struct drzewo *dr){
    if(dr==0) return;
    wypisz(dr->lewy);
    printf(" %d", dr->liczba);
    wypisz(dr->prawy);
}

int szukaj(struct drzewo *dr, int wartosc){
    if (dr==NULL)
        return 0;
    if(dr->liczba==wartosc)
        return 1;
    else if(dr->liczba>wartosc)
        return szukaj(dr->lewy, wartosc);
    else
        return szukaj(dr->prawy,wartosc);
    return 0;
}

void przeszukaj(struct drzewo *dr, int wartosc){
    szukaj(dr,wartosc) ? printf("Znaleziono %d!\n",wartosc) : printf("Nie znaleziono %d\n",wartosc);
}

int main(){
    struct drzewo *pdr1;
    pdr1->lewy=NULL;
    pdr1->prawy=NULL;
    pdr1->liczba=1;
    wstaw(pdr1,5);
    wstaw(pdr1,7);
    wstaw(pdr1,0);
    printf("Wypisanie drzewa:\n");
    wypisz(pdr1);
    printf("\n");
    przeszukaj(pdr1,2);
    przeszukaj(pdr1,5);
    return 0;
}