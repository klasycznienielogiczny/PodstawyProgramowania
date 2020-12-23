#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void data_teraz(){
    time_t czas;
    struct tm *wsk;
    time(&czas);
    wsk=localtime(&czas);
    char *data = asctime(wsk);
    printf("%s", data);
}

void data_teraz2(){
    time_t czas;
    time(&czas);
    char *data=ctime(&czas);
    printf("%s", data);
}

void czekaj(int sec){
    clock_t koniec;
    koniec = clock() + sec*CLOCKS_PER_SEC;
    while( clock() < koniec) { }
}

void czas_trwania(void (*funkcja)(sec),int sec){
    time_t start, koniec;
    int roznica;
    time(&start);
    funkcja(sec);
    time(&koniec);
    roznica=difftime(koniec, start);
    printf("Zajelo to %d sekund",roznica);
}

int main(){
    data_teraz();
    czekaj(5);
    data_teraz2();
    void (*funkcja)(int sec);
    funkcja=czekaj;
    czas_trwania(funkcja,10);
    return 0;
}