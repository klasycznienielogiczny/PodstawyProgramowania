#include <time.h>// <--- ma mieć deklaracje time.h na początku
#include <stdlib.h>
#include <stdio.h>
void losowanko(int ile) {
    int seed;
    time_t time_v;
    seed = time(&time_v);
    for (int i = 0; i < ile; ++i)
        printf("%d wylosowana liczba to: %d\n", i + 1, rand());

    for (int i = 0; i < ile; ++i)
        printf("%d wylosowana liczba z zakresu <0-99> to: %d\n", i + 1, rand() % 100);
}

int main(){
    losowanko(8);
    return 0;
}