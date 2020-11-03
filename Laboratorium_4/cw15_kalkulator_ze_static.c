//15. Napisz funkcje kalkulator(operacja, liczba), która dla danej liczby będącej wewnątrz tej funkcji (static)
// wykona zadaną operacje z podaną w argumencie liczbą i zwróci wynik: 2p...

#include <stdio.h>
#include <math.h>

int kalkulator(char znak[], float b){
    static float a=50;
    switch(znak[0]){
        case '+':
            printf("%f %c %f = %f\n",a,znak[0],b,a+b);
            break;
        case '-':
            printf("%f %c %f = %f\n",a,znak[0],b,a-b);
            break;
        case '*':
            printf("%f %c %f = %f\n",a,znak[0],b,a*b);
            break;
        case '/':
            printf("%f %c %f = %f\n",a,znak[0],b,a/b);
            break;
        default:
            printf("Nie ma dzialania!");
            break;
    }
}

int main() {
    char end='n',znak[2];
    float a;
    while(end=='n'){
        printf("Podaj  liczbe:");
        scanf("%f",&a);
        printf("Podaj dzialanie:");
        scanf("%s",&znak);
        kalkulator(znak,a);
        printf("Czy zakonczyc? y-tak, n-no");
        scanf(" %c",&end);
    }
    return 0;
}