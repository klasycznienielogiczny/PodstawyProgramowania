#include <stdio.h>
#include <string.h>

int fibonacci(unsigned int liczba) {
    if(liczba==0)
        return 0;
    if(liczba==1 || liczba==2)
        return 1;

    return fibonacci(liczba-1)+fibonacci(liczba-2);
}

int main() {
    printf("Ktory wyraz ciagu podac?");
    int a;
    scanf("%ud",&a);
    printf("%d. wyraz ciagu Fibonacciego to %d",a,fibonacci(a));
}