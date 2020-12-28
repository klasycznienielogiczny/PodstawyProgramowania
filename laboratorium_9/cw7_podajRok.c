//2- Napisz funkcje, która zwróci nr aktualnego roku

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void podajRok(){
    time_t czas;
    struct tm *wsk;
    time(&czas);
    wsk=localtime(&czas);
    printf("%d", 1900+wsk->tm_year);
}

int main(){
    podajRok();
    return 0;
}