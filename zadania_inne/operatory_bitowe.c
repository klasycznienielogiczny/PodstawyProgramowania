#include <stdio.h>

void d2b(int liczba){
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

void kon(int a, int b){
    printf("%d & %d to %d, czyli: ",a,b,a&b);
    d2b(a&b);
}

void przesl(int a, int b){
    printf("%d << %d to %d, czyli: ",a,b,a<<b);
    d2b(a<<b);
}

void przesp(int a, int b){
    printf("%d >> %d to %d, czyli: ",a,b,a>>b);
    d2b(a>>b);
}

void xor(int a, int b){
    printf("%d ^ %d to %d, czyli: ",a,b,a^b);
    d2b(a^b);
}

void alt(int a, int b){
    printf("%d | %d to %d, czyli: ",a,b,a|b);
    d2b(a|b);
}

void neg(int a){
    printf("~%d to %d, czyli: ",a,~a);
    d2b(~a);
}

int main(){
    int a=3, b=4;
    przesp(a,b);
    przesl(a,b);
    kon(a,b);
    xor(a,b);
    alt(a,b);
    neg(a);
    neg(b);
    return 0;
}
