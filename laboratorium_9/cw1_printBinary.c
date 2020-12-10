#include <stdio.h> // za plus
// - Napisać funkcje void printBinary(long long number) wyświetlającą liczbę jako binarną

void printBinary(long long liczba){
    int i=0, tab[32];
    if (liczba==0)
        printf("%d",0);
    while(liczba){
        tab[i++]=liczba%2;
        liczba=liczba/2;
    }
    for (int j=i-1;j>=0;j--)
        printf("%d",tab[j]);
    printf("\n");
}

int main(){
    long long a=587424;
    printBinary(a);
    return 0;
}