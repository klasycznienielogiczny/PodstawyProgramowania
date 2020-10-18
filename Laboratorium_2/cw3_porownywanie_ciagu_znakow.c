//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
#include <math.h>
// Program sprawdza czy wprowadzony ciąg znaków zaczyna się od litery imienia autora
int main() {
    char tab[50];
    scanf("%s", tab);
    if(tab[0]=='P' || tab[0]=='p')
        printf("Jest OK");
    else
        printf("Nic");
    return 0;
}