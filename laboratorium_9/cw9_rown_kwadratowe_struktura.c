//cw3- Napisz funkcje, która zwraca pierwiastki równania kwadratowego, ale mają one być
// zwrócone jako struktura, w taki sposób aby zawierała informacje ile jest pierwiastków i jakie one są

#include <stdio.h>
#include <math.h>
#include <string.h>

struct liczba{
    float re;
    float im;
};

struct pierwiastki{
    struct liczba pierw1;
    struct liczba pierw2;
    int ile;
    char info[16];
};

struct pierwiastki rozwiaz(float a, float b, float c){
    struct pierwiastki rozw;
    float delta=b*b-4*a*c;
    if(delta>0){
        float pdelta=sqrt(delta);
        rozw.ile=2;
        strcpy(rozw.info,"rzeczywiste");
        rozw.pierw1.re=(-b-pdelta)/2;
        rozw.pierw2.re=(-b+pdelta)/2;
        rozw.pierw1.im=rozw.pierw2.im=0;
    }
    if(delta==0){
        float pdelta=sqrt(delta);
        rozw.ile=1;
        strcpy(rozw.info,"rzeczywiste");
        rozw.pierw1.re=(-b)/2;
        rozw.pierw1.im=0;
    }
    if(delta<0){
        float pdelta=sqrt(abs(delta));
        rozw.ile=2;
        strcpy(rozw.info,"zespolone");
        rozw.pierw1.re=rozw.pierw2.re=-b/2;
        rozw.pierw1.im=pdelta/2;
        rozw.pierw2.im=-pdelta/2;
    }
    return rozw;
}

void wypisz(struct pierwiastki p){
    if (p.ile==1)
        printf("Jest %d rozwiazanie %s: x=%.4f",p.ile,p.info, p.pierw1.re);
    if (p.ile==2 && (strcmp(p.info,"rzeczywiste")==0))
        printf("Sa %d rozwiazania %s: x1=%.4f ; x2=%.4f",p.ile,p.info, p.pierw1.re, p.pierw2.re);
    if (strcmp(p.info,"zespolone")==0)
        printf("Sa %d rozwiazania %s: x1=%.4f+%.4fi ; x2=%.4f%.4fi", p.ile,p.info, p.pierw1.re, p.pierw1.im, p.pierw2.re, p.pierw2.im);
}

int main(){
    float a,b,c;
    printf("Podaj wspolczynniki rownania ax^2+bx+c w formacie a b c\n");
    scanf(" %f %f %f",&a,&b,&c);
    wypisz(rozwiaz(a,b,c));
    return 0;
}