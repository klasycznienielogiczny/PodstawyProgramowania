#include <stdio.h>
//Program liczy deltę równania kwadratowego
int main() {
    int a,b,c,delta;
    printf("Podaj wspolczynniki równania kwadratowego: a b c\n");
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b-4*a*c;
    printf("Delta z liczb %d %d %d wynosi %d",a,b,c,delta);
    getchar();
    return 0;
}