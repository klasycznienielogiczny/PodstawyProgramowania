// cw4 - Proszę o zdefiniowanie funkcji w preprocesorze LOG, która zadany tekst poprzedzi nazwą pliku i numerem linii: 2p i 1,5p i 1p

#include <stdio.h>
#define LOG(message) printf("%s : linia: %d : %s (funkcja %s)",__FILE__,__LINE__, message,__func__)

int main(){
    printf("%s %s\n",__DATE__, __TIME__);
    LOG("xdd");
    return 0;
}