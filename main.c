// Napisać program demonstrujący różnicę między operatorami: & i &&: 2p i 1,5p
//
// - Napisać program demonstrujący różnicę między operatorami: | i ||

#include <stdio.h> // wczytanie słowa i zliczenie jego długości (do znaku '\0')
#include <math.h>

int main() {
    printf("Ktory syn?");
    int syny;
    scanf("%d",&syny);
    switch(syny)
    {
        case 1:
        case 2:
            printf("Slynal z madrosci ;)");
            break ;
        case 3:
            printf("Gupi byl. Poszedl do lacznosci");
            break ;
        default:
            printf("Jeszcze nie bylo 500+\n");
            break;
    }
    return 0;
}

/*#include <stdio.h> // wczytanie słowa i zliczenie jego długości (do znaku '\0')
#include <math.h>

int main() {
    char slowo[128];
    printf("Podaj slowo: ");
    scanf("%127s",slowo);
    int dlugosc=0;
    for(dlugosc;dlugosc<sizeof(slowo);++dlugosc)
    {
        if(slowo[dlugosc]=='\0')
            goto wynik;
    }
    wynik:
        printf("Slowo \"%s\" ma %d liter(y).",slowo,dlugosc);
    return 0;
}
*/


/*#include <stdio.h> //kalkulator zysków <<< zrobić ładniejszy :(
#include <math.h>
// Kalkulator ile się zarobiło na inwestycji: podajemy kwotę zainwestowaną,
// podajemy kwotę zwróconą, oraz ilość miesięcy, powinno zwrócić % zysk/stratę całkowitą, oraz % miesięczną
int main() {
    float wklad, wyplata;
    int ile_msc;
    printf("Podaj kwote zainwestowana: ");
    scanf("%f", &wklad);
    printf("Podaj kwote wyplacona: ");
    scanf("%f", &wyplata);
    printf("Podaj ilosc miesiecy: ");
    scanf("%d", &ile_msc);
    if (wyplata-wklad>=0)
        printf("Zyskales %f PLN, co daje %f %% zysku miesiecznie",wyplata-wklad, 100*((wyplata-wklad)/ile_msc)/wklad);
    else
        printf("Straciles %f PLN, co daje %f %% straty miesiecznie",(-1*(wyplata-wklad)), -100*((wyplata-wklad)/ile_msc)/wklad);
    return 0;
}
*/
/*  <stdio.h> // dodawanie tablic, zrobić!
#include <math.h>

int main() {
    int tab1[] ={1,2,3};
    int tab2[] ={4,5,6};
    int wyjsciowa[6];
    wyjsciowa=tab1+tab2;
    printf("%d",wyjsciowa)
    return 0;
}
*/
/* #include <stdio.h> //MILIONERZY //ładnie z funkcją
#include <math.h>

int main() {
    printf("Co to jest rzerzaczka?\n a) choroba\n b) roslina\n c)male zwierze futerkowe o wymiarach 2x2\n d)nie wiem co wpiac");

}
*/
/* #include <stdio.h>
#include <math.h>

int main() {
    int tab[4][20];
    for (int i=0;i<4;++i)
    {
        scanf("%s",tab[i]);
    }

    for (int i=0;i<4;++i)
    {
        printf("%s, ",tab[i]);
    }
    return 0;
}

*/
/* #include <stdio.h> PLUS za zadanie
#include <math.h>

int main() {
    printf("1 - m->km\n2 - km-> m\n");
    int a;
    scanf("%d",&a);
    switch(a){
        float b;
        case 1:
            printf("Podaj ilosc: ");
            scanf("%f",&b);
            printf("%f mili to: %f km\n ", b, 1.609344*b);
            break;
        case 2:
            printf("Podaj ilosc: ");
            scanf("%f",&b);
            printf("%f km to: %f m\n ", b, b/1.609344);
            break;
        default:
            printf("Operacja nieznana!\n");
            break;
    }
    return 0;
}
*/
/* #include <stdio.h>
#include <math.h>

int main() {
    char tab[50];
    scanf("%s", tab);
    if(tab[0]=='P' || tab[0]=='p')
        printf("Jest OK");
    else
        printf("Nic");
    return 0;
}
*/

/*#include <stdio.h>
#include <math.h>

int main() {
    printf("Wybierz liczbe od 0-9");
    int a;
    scanf("%d",&a);
    if(a!=9)
        printf("%d ! Wygrałem ;)",a+1);
    else
        printf("Jestes hardkorem!");
    return 0;
}
*/

/*
 * JESTEŚ HARDKOREM! UZUPEłnić
 * #include <stdio.h>
#include <math.h>

int main() {
    const int tab[3]={1};
    for (int i=0;i<3;++i)
        printf("%d\n",tab[i]);
    return 0;
}

*/

/* #include <stdio.h> ZADANIE PLUSOWE
#include <math.h>

int main() {
    const int tab[3]={1};
    for (int i=0;i<3;++i)
        printf("%d\n",tab[i]);
    return 0;
}
*/

// LABORATORIA 1 \/\/\/
/* #include <stdio.h>
#include <math.h>

int main() {
    char tekst[]=" Ziobro przestan mi rodzine przesladowac ";
    for(int i=0;i<sizeof(tekst)+1;i++)
        printf("~");
    printf("\n|%s|\n",tekst);
    for(int i=0;i<sizeof(tekst)+1;i++)
        printf("~");
    return 0;
}
*/
/*
 * #8
 * #include <stdio.h>
#include <math.h>

int zamien_czas(int d,int h, int m, int s)
{
    return s+60*m+3600*h+3600*24*d;
}

int main() {
    printf("dd:hh:mm:ss\n");
    int d,h,m,s;
    scanf("%d:%d:%d:%d",&d,&h,&m,&s);
    printf("sekund: %d",(zamien_czas(d,h,m,s)));
    return 0;
}

*/

/*
 * #7#include <stdio.h>
#include <math.h>

float a=8.5985;

int main() {
    printf("%f\n",a);
    {
        float a =87;
        printf("%f\n",a);
        {
            float a =8877;
            printf("%f\n",a);
            {
                float a =87.8745;
                printf("%f\n",a);
            }
        }
    }
    return 0;
}
*/
/* #6 #include <stdio.h>

int main() {
    int a=1;
    char k='a';
    float b=3.14;
    double c=3.14;
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short int));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(long long int));
    printf("%d\n",sizeof(unsigned int));
    printf("%d\n",sizeof(long));
}

 char<short<int<long<long long
*/
/*#5
 * include <stdio.h>

int main() {
    float a;
    scanf("%f",&a);
    printf("%.3f",a);
    return 0;
}
*/
/* #4
#include <stdio.h>

int zmienna=5;

int main() {
    {
        int zmienna = 8;
        printf("%d\n", zmienna);
    }
    printf("%d", zmienna);
    return 0;
}
*/

/* #3
#include <stdio.h>

int main() {
    int a;
    char b;
    printf("Podaj liczbe\n");
    scanf("%d", &a);
    printf("Podaj litere\n");
    scanf("%c", &b);
    printf(" Liczba %d , litera %c",a,b);
    getchar();
    return 0;
}
*/

/* #2
 * #include <stdio.h>

int main() {
    int a,b,reszta;
    printf("Podaj liczby\n");
    scanf("%d %d", &a, &b);
    reszta=a%b;
    printf("Reszta z %d \\ %d = %d",a,b,reszta);
    return 0;
}
*/
/*#1

#include <stdio.h>

int main() {
    int a,b,c,delta;
    printf("Podaj wspolczynniki a b c\n");
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b-4*a*c;
    printf("Delta z liczb %d %d %d wynosi %d",a,b,c,delta);
    getchar();
    return 0;
}
*/