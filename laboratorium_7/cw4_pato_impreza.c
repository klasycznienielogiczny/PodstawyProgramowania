/*Pato impreza - mamy strukturę odpowiadającą człowiekowi (imie, waga, promileAlkoholu), utwórzmy 3 takich imprezowiczów. Następnie utwórzmy strukturę Alkohol (%, nazwa) i utwórzmy kilka takich struktur.
    Proszę utworzyć funkcje kolejka(imprezowicze, alkohol, ilosc), która zaaplikuje zadaną ilość alkoholu do wszystkich osób
    Proszę utworzyć funkcje odplyneli(imprezowicze), która zwróci informacje ile osób ma już powyżej 2 promile we krwi
    Proszę o napisanie funkcji impreza(imprezowicze, alkohole), która będzie losować alkohol i ilość do wypicia i wypisywać na ekran w pętli "Wszyscy piją ... w ilości ...", ewentualnie też "... odpłynął", funkcja kończy działanie gdy wszyscy pijący będą już leżeć pod stołem.
    Pomocne informacje jak przeliczać wagę na objętość krwi: https://krew.info/oblicz/, polecam też oddawanie krwi (czekolady i darmowe MPK) i odradzam picie alkoholu */

#define ST 3 //za plus
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct human{
    char imie[20];
    float waga;
    float promile;
};

struct alkohol{
    char nazwa[20];
    float procent;
};

void kolejka(struct human imprezowicze[ST], struct alkohol al, float ilosc){
    for(int i=0; i<ST;i++)
        imprezowicze[i].promile+=ilosc/1000*al.procent/imprezowicze[i].waga;
}

void odplyneli(struct human imprezowicze[ST]){
    int odp=0;
    for(int i=0; i<ST;i++)
        if(imprezowicze[i].promile>=2) {
            odp++;
            printf("%s odplynal\n",imprezowicze[i].imie);
        }
    printf("Odplynelo: %d\n",odp);
}

void impreza(struct human imprezowicze[ST], struct alkohol alkohole[ST]){
    int alk=rand()%3;
    int ile=rand()%1000;
    printf("Wszyscy pija %s w ilosci %d\n",alkohole[alk].nazwa, ile);
    kolejka(imprezowicze, alkohole[alk],ile);
    odplyneli(imprezowicze);
}

int main(){
    int zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    struct human h1={"osoba1", 55, 0};
    struct human h2={"osoba2", 75, 1.9};
    struct human h3={"osoba3", 95, 1};
    struct human imprezowicze[]={h1,h2,h3};
    struct alkohol a1={"alk1",40};
    struct alkohol a2={"alk2",10};
    struct alkohol a3={"alk3",4};
    struct alkohol alkohole[]={a1,a2,a3};
    impreza(imprezowicze,alkohole);
    impreza(imprezowicze,alkohole);
    impreza(imprezowicze,alkohole);
    return 0;
}
