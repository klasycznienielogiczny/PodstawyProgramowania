//
// Created by piotr on 18.10.2020.
//

#include <stdio.h> //kalkulator zysków <<< zrobić ładniejszy :(
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