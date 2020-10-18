//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
#include <math.h>
// Program wczytuje słowo i zlicza jego długośc (do znaku '\0')
// v1 - z goto
int main() {
    char slowo[128];
    printf("Podaj slowo: ");
    scanf("%127s",slowo);
    int dlugosc=0;
    for(dlugosc;dlugosc<sizeof(slowo);++dlugosc)
    {
        if(slowo[dlugosc]=='\0')
            goto wynik;
    }
    wynik:
    printf("Slowo \"%s\" ma %d liter(y).",slowo,dlugosc);
    return 0;
}
*/