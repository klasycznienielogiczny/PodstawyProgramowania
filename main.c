#include <stdio.h>
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