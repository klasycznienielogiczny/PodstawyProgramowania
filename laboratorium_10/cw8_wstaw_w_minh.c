//- Napisz funkcje dodającą element w miejscu gdzie wysokość drzewa jest najmniejsza
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

int min(int a, int b){
    return (a > b) ? b : a;
}

int minh(struct drzewo *dr){
    if(dr==NULL)
        return 0;
    return 1+min(minh(dr->prawy), minh(dr->lewy));
}

void wstaw_minh(struct drzewo *dr, int el){
    struct drzewo *tmp;
    struct drzewo *new=malloc(sizeof (struct drzewo));
    new->lewy=NULL;
    new->prawy=NULL;
    new->liczba=el;
    tmp=dr;
    if(dr==NULL)
        dr=new;
    else{
        while(1){
            if(minh(tmp->prawy) > minh(tmp->lewy)) {
                if (tmp->lewy == NULL) {
                    tmp->lewy = new;
                    break;
                } else
                    tmp = tmp->lewy;
            }
            if(minh(tmp->prawy)<=minh(tmp->lewy)){
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
/* //może kiedyś xD
void minh_sciezka(struct drzewo *dr, char sciezka[]){
    if(dr==NULL)
        return;
    minh_sciezka(dr->lewy,strcat(sciezka,"l"));
    minh_sciezka(dr->prawy,strcat(sciezka,"p"));
}*/

int main(){
    struct drzewo *pdr1;
    pdr1->lewy=NULL;
    pdr1->prawy=NULL;
    pdr1->liczba=1;
    wstaw(pdr1,5);
    wstaw(pdr1,7);
    wstaw(pdr1,0);
    printf("Min. wysokosc drzewa rowna: %d\n",minh(pdr1));
    /*char sciezka[64]="";
    minh_sciezka(pdr1,sciezka);
    printf("Sciezka do najkrotszego: %s\n",sciezka);*/
    printf("\nWypisanie drzewa:\n");
    wypisz(pdr1);
    wstaw_minh(pdr1,4);
    printf("\nWypisanie drzewa:\n");
    wypisz(pdr1);
    printf("\nMin. wysokosc drzewa rowna: %d\n",minh(pdr1));
    wstaw_minh(pdr1,4);
    printf("\nWypisanie drzewa:\n");
    wypisz(pdr1);
    printf("\nMin. wysokosc drzewa rowna: %d\n",minh(pdr1));
    wstaw_minh(pdr1,1);
    printf("\nWypisanie drzewa:\n");
    wypisz(pdr1);
    printf("\nMin. wysokosc drzewa rowna: %d\n",minh(pdr1));
    return 0;
}