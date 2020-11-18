// forma notatnika/ skojarzenia z miesiacami

#include <stdio.h>
#include <stdlib.h>

struct miesiac{
    int nr;
    char nazwa[20];
    char notatka[150];
};

int main(){
    struct miesiac m1 = {1, "Styczen"};
    struct miesiac m2 = {2, "Luty"};
    struct miesiac m3 = {3, "Marzec"};
    printf("%d. miesiac to %s. Dodaj notatke\n",m1.nr, m1.nazwa);
    scanf("%150s",m1.notatka);
    printf("%d. miesiac to %s. Dodaj notatke\n",m2.nr, m2.nazwa);
    scanf("%150s",m2.notatka);
    printf("%d. miesiac to %s. Dodaj notatke\n",m3.nr, m3.nazwa);
    scanf("%150s",m3.notatka);
    printf("%d. miesiac to %s.\nW tym miesiacu: %s\n",m1.nr, m1.nazwa, m1.notatka);
    printf("%d. miesiac to %s.\nW tym miesiacu: %s\n",m2.nr, m2.nazwa, m2.notatka);
    printf("%d. miesiac to %s.\nW tym miesiacu: %s\n",m3.nr, m3.nazwa, m3.notatka);
    return 0;
}