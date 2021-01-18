// - Napisz funkcje sprawdzającą minimalną wysokość drzewa
#include <stdio.h> // za plusa
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

int min(int a, int b){
    return (a > b) ? b : a;
}

int minh(struct drzewo *dr){
    if(dr==NULL)
        return 0;
    return 1+min(minh(dr->prawy), minh(dr->lewy));
}

int main(){
    struct drzewo *pdr1=(struct drzewo*)malloc(sizeof (struct drzewo));
    pdr1->lewy=NULL;
    pdr1->prawy=NULL;
    pdr1->liczba=1;
    wstaw(pdr1,5);
    wstaw(pdr1,7);
    wstaw(pdr1,0);
    printf("Min. wysokosc drzewa rowna: %d\n",minh(pdr1));
    return 0;
}