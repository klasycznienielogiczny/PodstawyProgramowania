//cw4- Funkcja porównująca dwa czasy (godzina, minuta, sekunda) i zwracająca późniejszy

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MIN_IN_HR 60
#define SEC_IN_MIN 60

struct godzina{
    int h;
    int m;
    int s;
};

struct godzina porownaj(struct godzina g1, struct godzina g2){
    int tmp1=g1.h*MIN_IN_HR*SEC_IN_MIN+g1.m*SEC_IN_MIN+g1.s;
    int tmp2=g2.h*MIN_IN_HR*SEC_IN_MIN+g2.m*SEC_IN_MIN+g2.s;
    return (tmp1>tmp2) ? g1 : g2;
}

void wypisz(struct godzina g){
    printf("%d:%d:%d",g.h,g.m,g.s);
}

int main(){
    struct godzina g1,g2;
    g1.h=12;
    g1.m=38;
    g1.s=58;

    g2.h=12;
    g2.m=38;
    g2.s=59;
    wypisz(porownaj(g1,g2));
    return 0;
}