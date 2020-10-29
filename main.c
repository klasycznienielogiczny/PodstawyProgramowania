//

// obietnice wyborcze ferdka - tablica dwuwymiarowa, wpisać 5, program ma losować liczbe 0-5 i wyświetlać daną obietnicę przypisaną
// pod danym numerem

/* #include <time.h> <--- ma mieć deklaracje time.h na początku
#include <stdlib.h>
#include <stdio.h>
void losowanko(int ile) {
    int seed;
    time_t time_v;
    seed = time(&time_v);
    for (int i = 0; i < ile; ++i)
        printf("%d wylosowana liczba to: %d\n", i + 1, rand());

    for (int i = 0; i < ile; ++i)
        printf("%d wylosowana liczba z zakresu <0-99> to: %d\n", i + 1, rand() % 100);
}

int main(){
    losowanko(8);
    return 0;
}
*/
//potrojenie wartosci w tablicy

//mediana z tablicy
/*
#include <stdio.h>
#include <string.h>

void mediana(int tab[],int n) {
    int tab_s[]=sort(tab);
    return n%2==0 ? tab_s[n/2]+tab_s[n/2+1] : tab_s[(n-1/2)];
}

void sort(int tab[],int n){
    int tmp[];
    for(int i=0;i<n;++i)

}
int main() {
    int tab[]={5,4,3,2,1};
    printf("Mediana rowna: %d",mediana(tab));
}
 */

/* #include <stdio.h>  <--- za plus
#include <string.h>

float average(float *tab, int n) {
    float suma=0;
    for (int i=0; i<n;++i)
        suma+=tab[i];

    return suma/n;
}

int main() {
    float tabs[]={8.5, 7.4, 7, 9,10};
    printf("Srednia: %.3f\n", average(tabs, sizeof(tabs)/sizeof(float)));
    return 0;
}
*/
/* #include <stdio.h>
#include <string.h>

void fibonacci(unsigned int liczba) {

}

int main() {
    // Wywołujemy funkcję
    fibonacci();
}
*/
/* #include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if(strcpy(argv[1],"--h"))
        printf("Help\n");
    return 0;
}
*/
/* #include <stdio.h>

int main(int argc, char* argv[]) {
    for(int k=0;k<argc;++k)
        printf("%s",argv[k]);
    return 0;
}

*/

/* #include <stdio.h>

int pisz(int tab[], int n){
    int suma =0;
    for (int i=0; i<n; ++i)
        printf("%d\t",tab[i]);
    return suma;
}

int main() {
    int tabs[]={5,4,8,7,9,10,58,47,85};
    pisz(tabs,sizeof(tabs)/sizeof(int));
    return 0;
} */


/* #include <stdio.h> + zrobić ten co wypisuje

int sum(int tab[], int n){
    int suma =0;
    for (int i=0; i<n; ++i)
        suma+=tab[i];
    return suma;
}

int main() {
    int tabs[]={5,4,8,7,9,10,58,47};
    printf("Suma: %d", sum(tabs,8));
    return 0;
}
*/




// lab 3















/*
void fun()
{
    printf("Jestem sobie funkcja mala\n");
    printf("\t\t\tiksde\n");
}
 */

/*
#include "test.h"

int main() {
    fun();
    losowanko(5);
    return 0;
}
*/
/*#include <stdio.h> // - Program, który będzie zliczał linie dla tesktu z klawiatury,
// do czasu napotkania znaku końca tekstu (na Linuxie Ctr+D, a Windows CTRL+X)

int main() {
    int ilosc=0;
    char tekst[256];
    while(1){
        printf("Podaj tekst: ");
        scanf("%s",tekst);
        ++ilosc;
        if(tekst[sizeof(tekst)/sizeof(char)]==3)
        {
            printf("Ilosc lini: %d",ilosc);
            return 0;
        }
    }
    return 0;
}
*/
/* #include <stdio.h> // dec ->ASCII

int main() {
    for(int i=0;i<256;++i)
        printf("%d to %c\n",i,(char)i);
    return 0;
}
 */
/* #include <stdio.h> //wyswietla slowa na wprowadzona literke

int main() {
    char literka;
    char tekst[]="noniewiem";
    printf("Podaj literke: ");
    scanf("%c",&literka);
    switch(literka){
        case 'a':
        case 'A':
            printf("%c%s",literka,tekst);
            break;
        case 'b':
        case 'B':
            printf("%c%s",literka,tekst);
            break;
        case 'c':
        case 'C':
            printf("%c%s",literka,tekst);
            break;
        default:
            break;
    }

    return 0;
}
*/
/* #include <stdio.h> // program ktory irytuje wyswietlaniem tekstu, dopoki sie nie odpowie "tak"

int main() {
    char odp[4];
    do{
        printf("Czy chcesz zakonczyc program?");
        scanf("%3s",odp);
    }
    while(odp!="nie");
    return 0;
}
*/
/* #include <stdio.h>
#include <math.h>

// zadanie za plusa
int main() {
    int tab[]={1,2,3,4,5,6,7,9,8,10};
    //printf("%d",sizeof(tab)/sizeof(int));
    for(int i=1;i<(sizeof(tab)/sizeof(int))-1;++i) {
        if ((tab[i - 1] < tab[i]) && (tab[i] > tab[i + 1])) {
            printf("Nie jest posortowana");
            return 0;
        }
    }
    printf("Jest posortowana");
    return 0;
}
*/
/*#include <stdio.h>
#include <math.h>

// zadanie za plusa
int main() {
    char tekst[256];
    printf("Podaj tekst: ");
    scanf("%s",tekst);
    int i=0,cyfr=0;
    while(tekst[i]!='\0'){
        cyfr++;
        i++;
    };
    printf("Ilosc znakow: %d",cyfr);
    return 0;
}
*/
/* #include <stdio.h>
#include <math.h>


int main() {
    char end='n',znak[2];
    float a,b;
    do{
        printf("Podaj pierwsza liczbe: ");
        scanf("%f",&a);
        printf("Podaj druga liczbe: ");
        scanf("%f",&b);
        printf("Podaj dzialanie: ");
        scanf("%1s",&znak);
        switch(znak[0]){
            case '+':
                printf("%f %c %f = %f\n",a,znak[0],b,a+b);
                printf("Czy zakonczyc? y-tak, n-no");
                scanf("%c",&end);
                break;
            case '-':
                printf("%f %c %f = %f\n",a,znak[0],b,a-b);
                printf("Czy zakonczyc? y-tak, n-no");
                scanf("%c",&end);
                break;
            case '*':
                printf("%f %c %f = %f\n",a,znak[0],b,a*b);
                printf("Czy zakonczyc? y-tak, n-no");
                scanf("%c",&end);
                break;
            case '/':
                printf("%f %c %f = %f\n",a,znak[0],b,a/b);
                printf("Czy zakonczyc? y-tak, n-no");
                scanf("%c",&end);
                break;
            default:
                printf("Nie ma dzialania!");
                printf("Czy zakonczyc? y-tak, n-no");
                scanf("%c",&end);
                break;
        }
    }
    while(end=='n');
    return 0;
}
*/
/*
 * #include <stdio.h>
#include <math.h>

//kalkulator w switchu
int main() {

    return 0;
}
*/
//LAB_4
/*
#include <stdio.h>
#include <math.h>

// zadanie za plusa
int main() {
    int k,w;
    printf("Podaj ilosc wierszy: ");
    scanf("%d",&w);
    printf("Podaj ilosc kolumn: ");
    scanf("%d",&k);
    int tab[w][k];
    for(int i=0;i<k;i++) {
        for (int j = 0; j < w; j++) {
            printf("\nPodaj liczbe tab[%d][%d]:", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
    printf("Transponowane: \n");
    for(int j=0;j<k;j++){
        for(int i=0;i<w;i++){
            printf("%d\t",tab[j][i]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>


int main() {
    for(int i=0;i<=100;++i)
    {
        if(i%6==0)
            printf("%d\t",i);
    }
    printf("\n");
    int suma=0,i=30;
    while(i<=100) {
        suma += i;
        i++;
    }
    printf("Suma liczb od 30 do 100 wynosi: %d", suma);
    return 0;
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

// LAB 2 \/
// Napisać program demonstrujący różnicę między operatorami: & i &&: 2p i 1,5p
//
// - Napisać program demonstrujący różnicę między operatorami: | i ||










