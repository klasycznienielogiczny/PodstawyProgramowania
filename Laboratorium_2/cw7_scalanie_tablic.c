//
// Created by piotr on 18.10.2020.
//

#include <stdio.h> // dodawanie tablic, zrobić!
#include <math.h>
// Program scala dwie tablice w jedną
int main() {
    int tab1[] ={1,2,3};
    int tab2[] ={4,5,6};
    int wyjsciowa[6];
    wyjsciowa=tab1+tab2;
    printf("%d",wyjsciowa)
    return 0;
}