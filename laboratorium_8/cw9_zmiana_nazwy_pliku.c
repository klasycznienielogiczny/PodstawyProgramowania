//cw9- Program, który otrzymuje jako argumenty uruchomienia listę plików i zmienia ich
// nazwy dodając przed nazwę wybrany prefix
// (dla uproszczenia są podawane pliki x.txt, y.txt, ... bez nazw katalogów)
// nazwe pliku z rozszerzeniem podajemy jako argument podczas uruchomienia programu
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char prefix[]="xd_";
    strcat(prefix,argv[1]);
    if((rename(argv[1],prefix)==0))
        printf("Zmieniono nazwe pliku\n");
    else
        printf("Jakis blad\n");

    return 0;

}