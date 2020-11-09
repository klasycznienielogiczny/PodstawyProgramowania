
// - Skopiowanie z tekstu zawierającego imię i nazwisko do dwóch oddzienych tablic (w jednej samo imię, w drugiej samo nazwisko)
//- Funkcja, która zmienia tekst na duże/małe litery //toupper tolower
//- F. zwracająca ilośc małych liter w tekście: islower
//- F. przycinająca tekst do określonej długości (w razie gdy tekst jest za krótki nic nie robiąca):
// forma notatnika/ skojarzenia z miesiacami (strzelam że struktura)

/* co ma wiekszy rozmiar
struct S1
    {
        bool b; //
        double d; //
        char c; //
        int i; //
    };
    struct S2
    {
        double d; //
        int i; //
        bool b; //
        char c; //
    }; */

//1- Proszę o zaimplementowanie funkcji flegmatyk, która tekst zwróci ze zwielokrotnionymi samogłoskami: 2p i 1,5p i 1p (jeśli losową ilość zwielokratniamy to +1 punkty)
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum miesiac {styczen,marzec=3,kwiecien,maj,czerwiec,lipiec,grudzien=12};

enum miesiac podajnumermiesiaca(char tekst[]) {
    enum miesiac msc;
    if(strcmp(tekst,"styczen")==0)
        msc = styczen;
    else if(strcmp(tekst,"marzec")==0)
        msc = marzec;
    else if(strcmp(tekst,"kwiecien")==0)
        msc = kwiecien;
    else if(strcmp(tekst,"maj")==0)
        msc = maj;
    else if(strcmp(tekst,"czerwiec")==0)
        msc = czerwiec;
    else if(strcmp(tekst,"lipiec")==0)
        msc = lipiec;
    else if(strcmp(tekst,"grudzien")==0)
        msc = grudzien;
    else return 0;
    return msc;
}

int main(){
    printf("Jaki miesiac?");
    char mc[32];
    scanf("%s",mc);
    printf("%s to %d miesiac",mc,podajnumermiesiaca(mc));
    return 0;
}

*/
/*
#include <stdio.h> // za plusa
#include <stdlib.h>


int *fun(int a){
    int *wsk=malloc(sizeof(int)*a);
    if(wsk!=NULL) {
        printf("Udalo sie\n");
        for (int i = 0; i < a; ++i)
            wsk[i] = 0;
    }
    return wsk;
}

int main(){
    int a, *tab;
    scanf("%d",&a);
    tab = fun(a);
    free(tab);
    return 0;
}*/

//************************************************** NOWE LABKI ***************************************************************

/*
// 10. obietnice wyborcze ferdka - tablica dwuwymiarowa, wpisać 5, program ma losować liczbe 0-5 i wyświetlać daną obietnicę przypisaną
// pod danym numerem


#include <stdio.h>
#include <time.h>// <--- ma mieć deklaracje time.h na początku
#include <stdlib.h>

int czy_wolne(int tab[]){
    for(int i=0;i<5;i++)
        if(tab[i]==0)
            return 1;
    return 0;
}

int main(){
    char obietnice[5][256]={"Kielbasy, browary i inne towary","Opieke lekarska i rente wysoka","Kokosy, banany","Zamiast pracy taniec i spiew","Kazdy bedzie mial co bedzie chcial"};
    int a,seed,zuzyte[5]={0,0,0,0,0};
    time_t time_v;
    seed = time(&time_v);
    char decyzja='y';
    do{
        if(zuzyte[a=rand()%5]==0){
            zuzyte[a]++;
            printf("%s",obietnice[a]);
        }
        else continue;
        if(czy_wolne(zuzyte)){
            printf("\nLosujemy dalej? y/n");
            scanf(" %c",&decyzja);
        }
        else{
            printf("\nKoniec obietnic!\n");
            return 0;
        }
    }while(decyzja=='y' || decyzja=='Y');
}
*/

/*
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    double lMax;

    lMax = log2(INT_MAX);
    printf("INT_MAX \t= %25d ; lMax = log2(INT_MAX) \t= %.0f \n",INT_MAX,  lMax);

    lMax = log2(UINT_MAX);
    printf("UINT_MAX \t= %25u ; lMax = log2(UINT_MAX) \t= %.0f \n", UINT_MAX,  lMax);

    lMax = log2(LONG_MAX);
    printf("LONG_MAX \t= %25ld ; lMax = log2(LONG_MAX) \t= %.0f \n",LONG_MAX,  lMax);


    lMax = log2(ULONG_MAX);
    printf("ULONG_MAX \t= %25lu ; lMax = log2(ULONG_MAX) \t= %.0f \n",ULONG_MAX,  lMax);

    lMax = log2(LLONG_MAX);
    printf("LLONG_MAX \t= %25lld ; lMax = log2(LLONG_MAX) \t= %.0f \n",LLONG_MAX, lMax);

    lMax = log2(ULLONG_MAX);
    printf("ULLONG_MAX \t= %25llu ; lMax = log2(ULLONG_MAX) \t= %.0f \n",ULLONG_MAX, lMax);

    return 0;
}
*/