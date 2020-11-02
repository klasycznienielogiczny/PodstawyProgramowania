#include <stdio.h>
#include <math.h>

int main() {
    char end='n',znak[2];
    float a,b;
    while(end=='n'){
        printf("Podaj pierwsza liczbe: ");
        scanf("%f",&a);
        printf("Podaj druga liczbe: ");
        scanf("%f",&b);
        printf("Podaj dzialanie: ");
        scanf("%s",&znak);
        switch(znak[0]){
            case '+':
                printf("%f %c %f = %f\n",a,znak[0],b,a+b);
                printf("Czy zakonczyc? y-tak, n-no");
                scanf(" %c",&end);
                break;
            case '-':
                printf("%f %c %f = %f\n",a,znak[0],b,a-b);
                printf("Czy zakonczyc? y-tak, n-no");
                scanf(" %c",&end);
                break;
            case '*':
                printf("%f %c %f = %f\n",a,znak[0],b,a*b);
                printf("Czy zakonczyc? y-tak, n-no");
                scanf(" %c",&end);
                break;
            case '/':
                printf("%f %c %f = %f\n",a,znak[0],b,a/b);
                printf("Czy zakonczyc? y-tak, n-no");
                scanf(" %c",&end);
                break;
            default:
                printf("Nie ma dzialania!");
                printf("Czy zakonczyc? y-tak, n-no");
                scanf(" %c",&end);
                break;
        }
    }
    return 0;
}