//- Urodziny w klasie - solenizant przynosi cukierki do klasy, (proszę wylosować ilość uczniów) w określonej
// ilości (tyle ile ma klasa zaokrąglając w górę do pełnych dziesiątek), każdy uczeń bierze po cukierku,
// ale jest 20% szans, że powie "Wszystkiego najlepszego, a mogę dwa" - wtedy głupio mu odmówić.
// Proszę o wykonanie poczęstunku z informacją, ile osób dostało cukierki, a ile nie.
// Proszę aby utworzyć strukturę TorbaCukierków, która będzie miała licznik, z którego będzie się odejmować.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int losuj() {
    int seed;
    time_t time_v;
    seed = time(&time_v);
    srand(seed);
    int tmp=rand()%40 + 1;//Zakres 1-40
    return tmp;
}

int zaokragl(int ile){
    while(ile%10 !=0)
        ile++;
    return ile;
}

struct TorbaCukierkow{
    int ilosc;
};

void daj_cukierka(struct TorbaCukierkow *cukierki){
    cukierki->ilosc-=1;
}

void zyczenia(){
    printf("Wszystkiego najlepszego!\n");
}

void zyczenia2(){
    printf("Wszystkiego najlepszego, a moge dwa\n");
}

void poczestunek(struct TorbaCukierkow *cukierki, int uczniowie){
    int tmp_ucz;
    for(tmp_ucz=uczniowie-1;tmp_ucz>0;tmp_ucz--){ //-1 bo solenizant nie bierze cukierka
        if((cukierki->ilosc)>0){
            if(rand()%5 <1){
                zyczenia2();
                daj_cukierka(cukierki);
                daj_cukierka(cukierki);
                printf("Dziekuje. Oto DWA cukierki\n");
            }
            else{
                zyczenia();
                daj_cukierka(cukierki);
                printf("Dziekuje. Oto cukierkek dla Ciebie\n");
            }
        }
        else{
            printf("Skonczyly sie cukierki\n");
            printf("Zostalo %d uczniow bez cukierka :(\n",tmp_ucz);
            break;
        }
    }
    if(tmp_ucz==0)
        printf("Wszyscy uczniowie dostali swoje cukierki\nZostalo %d cukierkow\n",cukierki->ilosc);
}

int main(){
    struct TorbaCukierkow *cuk=malloc(sizeof(struct TorbaCukierkow));
    int ile_uczniow=losuj();
    printf("Klasa ma %d uczniow\n\n\n",ile_uczniow);
    cuk->ilosc=zaokragl(ile_uczniow);
    printf("Przynioslem %d cukierkow\n\n\n",cuk->ilosc);
    poczestunek(cuk,ile_uczniow);
    return 0;
}