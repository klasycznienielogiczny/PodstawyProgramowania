//13. Funkcja menu, która w razie wpisania 0 wyjdzie z programu: exit(0). <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();

int main(){
    printf("Witaj w menu.\nWybierz dzialanie\n1-9 - wyswietla wybrana liczbe\n0-wychodzi z menu\n");
    while(1)
        menu();
    return 0;
}

void menu(){
    int dec;
    scanf("%d",&dec);
    switch(dec){
        case 0:
            printf("Dzieki za wspolna przygode!\n");
            exit (0);
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Wybrales liczbe %d\n",dec);
            break;
        default:
            printf("Brak zdefiniowanego dzialania!\n");
    }
}