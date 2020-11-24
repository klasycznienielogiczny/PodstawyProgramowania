//cw5- Funkcja, która otrzymuje dane przez void* i zwiększa pierwszego inta w tak wskazanej pamięci,
// proszę to przetestować dla inta, struktury zaczynającej się od inta:

#include <stdio.h>
#include <stdlib.h>

struct liczba{
    int i;
    int j;
    char k;
};

void fun(void *wsk){
    *(int*)wsk=*(int*)wsk+1;
    //printf("W funckji %d\n",*(int*)wsk);
}

void funs(void *str){
    *(int*)str=*(int*)str+1;
}

int main(){
    int a=5;
    int *ptr=&a;
    struct liczba l={8, 1,'k'};
    struct liczba *str=&l; //zwiekszamy pierwsze pole w strukturze
    //int *str=&l.j; //zwiekszamy drugiego inta
    printf("a=%d\nOdpalamy funkcje\n",a);
    fun(ptr);
    printf("Po odpaleniu funkcji:\na=%d",a);
    printf("\n\n\n");
    printf("l.i=%d\nOdpalamy funkcje\n",l.i);
    printf("l.j=%d\nOdpalamy funkcje\n",l.j);
    funs(str);
    printf("Po odpaleniu funkcji:\nl.i=%d\n",l.i);
    printf("Po odpaleniu funkcji:\nl.j=%d",l.j);
    return 0;
}
