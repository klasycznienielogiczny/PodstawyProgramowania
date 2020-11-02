// doo czyszczenia konsoli: getchar():
// while (getchar() != '\n');
// jakieś \r \b

//- Napisz funkcje kalkulator(operacja, liczba), która dla danej liczby będącej wewnątrz tej funkcji (static)
// wykona zadaną operacje z podaną w argumencie liczbą i zwróci wynik: 2p...

//- Proszę o zadeklarowanie funkcji, która przyjmuje wszystkie wbudowane typu całkowitoliczbowe i napisanie funkcji
// (poniżej maila), która wyświetli te liczby: definicja za main, deklaracja przed main

//- Funkcja menu, która w razie wpisania 0 wyjdzie z programu: exit(0). <stdlib.h>

/*
//funkcje i podanie argumentów typu f(i++,++i)
#include <stdio.h>

void fun(int a, int b){
    printf("%d\t%d",a,b);
}

int main(){
    int i=5;
    fun(++i,i++);
    return 0;
}*/
//funkcja która przyjmuje typ tekstu (error/warning) oraz komunikat oraz ma poprzedzić wyświetlenie numerem komunikatu, który
//ma rosnąć przy okazji każdego wywyłania funkcji

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

/*
#include <stdio.h>

int main(){
    int a=2, b=7;
    printf("%d & %d = %d\n",a,b,a&b);
    printf("%d && %d = %d\n",a,b,a&&b);
    printf("%d | %d = %d\n",a,b,a|b);
    printf("%d || %d = %d\n",a,b,a||b);
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
