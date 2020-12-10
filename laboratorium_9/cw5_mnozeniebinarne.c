//Napisz funkcje mnożącą liczbę 10-krotnie, ale mnożenie ma się odbyć przy pomocy przesunięć bitowych
#include <stdio.h> //za plusa

int pomnoz(int a){
    int wynik;
    wynik = (a<<3)+(a<<1);
    return wynik;
}

int main(){
    int a=5;
    printf("%d * 10 = %d",a,pomnoz(a));
    return 0;
}