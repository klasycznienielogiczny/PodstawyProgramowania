









/*
// 10. obietnice wyborcze ferdka - tablica dwuwymiarowa, wpisać 5, program ma losować liczbe 0-5 i wyświetlać daną obietnicę przypisaną
// pod danym numerem

/*
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
