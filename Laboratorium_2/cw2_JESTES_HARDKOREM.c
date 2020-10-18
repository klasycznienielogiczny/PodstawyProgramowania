//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
#include <math.h>
// Program pokazuje działanie mechanizmu if-else/switch na przykładzie
// https://www.youtube.com/watch?v=8nd5n5KVOUo&ab_channel=orsh666
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