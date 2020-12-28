
// LAB 9- Proszę o zobrazowanie  smutnej demokratycznej przypadłości, że każdy ma partie na którą głosuje i przyjmuje
// z aprobatą co oni mówią, a nie rozumie (bo nie chce rozumieć) co mówią przeciwnicy polityczni, krytykując to.
// Aby to zaimplementować proszę:
//    - Zdefiniować struktury zawierające wiadomość dla odbiorców (tablica char o pewnej długości, oraz coś jeszcze
//    np. liczba) WiadomoscDoWyborcowX, ...Y, ...Z
//    - Proszę o zdefiniowanie enum WiadomosciDoWyborcow o następujących wpisach: WIADOMOSC_DO_WYBORCOW_X,
//    WIADOMOSC_DO_WYBORCOW_Y, WIADOMOSC_DO_WYBORCOW_Z
//    - następnie proszę utworzyć strukturę WiadomoscDoWyborcow, która będzie miała pole enum z typem wiadomości i
//    unię zawierającą wszystkie dostępne wiadomości
//    - proszę utworzyć również analogiczne funkcje: przekazWiadomoscWyborcomX, ...Y, ...Z, które to funkcje wyświetlą
//    wiadomość dla wyborców, ale tylko jeśli jest ona od popierwnej partii, jeśli nie jest funkcja powinna zignorować
//    treść i wyświetlić stereotypowy tekst na temat nadawcy np. "kosmopolici", "volksdeutsche", itp. -
//    oczywiście wybór tekstu zależy od wybranych partii


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct WiadomoscDoWyborcowX{
    char tekst[128];
    int liczba_odbiorcow;
};

struct WiadomoscDoWyborcowY{
    char tekst[128];
    int liczba_odbiorcow;
};

struct WiadomoscDoWyborcowZ{
    char tekst[128];
    int liczba_odbiorcow;
};

enum WiadomosciDoWyborcow {WIADOMOSC_DO_WYBORCOW_X,WIADOMOSC_DO_WYBORCOW_Y,WIADOMOSC_DO_WYBORCOW_Z};

struct WiadomoscDoWyborcow{
    enum WiadomosciDoWyborcow typ;
    union {
        struct WiadomoscDoWyborcowX messX;
        struct WiadomoscDoWyborcowY messY;
        struct WiadomoscDoWyborcowZ messZ;
    } message;
};

void PrzekazWiadomoscWyborcomX(struct WiadomoscDoWyborcow w){
    if(w.typ==WIADOMOSC_DO_WYBORCOW_X)
        printf("Wiadomosc do wyborcow X: %s\n",w.message.messX.tekst);
    else if(w.typ == WIADOMOSC_DO_WYBORCOW_Y)
        printf("Kosmopolici\n");
    else if(w.typ==WIADOMOSC_DO_WYBORCOW_Z)
        printf("Volksdeutsche\n");
    printf("Odbiorcow wiadomosci: %d\n",w.message.messX.liczba_odbiorcow);
}

void PrzekazWiadomoscWyborcomY(struct WiadomoscDoWyborcow w){
    if(w.typ==WIADOMOSC_DO_WYBORCOW_Y)
        printf("Wiadomosc do wyborcow Y: %s\n",w.message.messY.tekst);
    else if(w.typ==WIADOMOSC_DO_WYBORCOW_Z)
        printf("Volksdeutsche\n");
    else if(w.typ==WIADOMOSC_DO_WYBORCOW_X)
        printf("Komuchy\n");
    printf("Odbiorcow wiadomosci: %d\n",w.message.messY.liczba_odbiorcow);
}

void PrzekazWiadomoscWyborcomZ(struct WiadomoscDoWyborcow w){
    if(w.typ==WIADOMOSC_DO_WYBORCOW_Z)
        printf("Wiadomosc do wyborcow Z: %s\n",w.message.messZ.tekst);
    else if(w.typ==WIADOMOSC_DO_WYBORCOW_X)
        printf("Komuchy\n");
    else if (w.typ==WIADOMOSC_DO_WYBORCOW_Y)
        printf("Kosmopolici\n");
    printf("Odbiorcow wiadomosci: %d\n",w.message.messZ.liczba_odbiorcow);
}

int main(){
    struct WiadomoscDoWyborcow wX={0,{"Doberek X-ksy", 45}};
    struct WiadomoscDoWyborcow wY={1,{"Doberek Y-yy", 35}};
    struct WiadomoscDoWyborcow wZ={2,{"Doberek Z-ty", 55}};

    printf("\nWiadomosc od X do kazdego, w kolejnosci X Y Z\n");
    PrzekazWiadomoscWyborcomX(wX);
    PrzekazWiadomoscWyborcomY(wX);
    PrzekazWiadomoscWyborcomZ(wX);

    printf("\nWiadomosc od Y do kazdego, w kolejnosci X Y Z\n");
    PrzekazWiadomoscWyborcomX(wY);
    PrzekazWiadomoscWyborcomY(wY);
    PrzekazWiadomoscWyborcomZ(wY);

    printf("\nWiadomosc od Z do kazdego, w kolejnosci X Y Z\n");
    PrzekazWiadomoscWyborcomX(wZ);
    PrzekazWiadomoscWyborcomY(wZ);
    PrzekazWiadomoscWyborcomZ(wZ);

    return 0;
}