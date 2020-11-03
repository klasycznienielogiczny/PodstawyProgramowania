// doo czyszczenia konsoli: getchar():
// while (getchar() != '\n');
// jakieś \r \b

#include <stdio.h>

void czysc_wejscie(){
    while (getchar() != '\n');
}

int main(){
    czysc_wejscie();
    return 0;
}
