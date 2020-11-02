#include <stdio.h>
#include <math.h>

// zadanie za plusa
int main() {
    int tab[]={1,2,3,4,5,6,7,9,8,10};
    //printf("%d",sizeof(tab)/sizeof(int));
    for(int i=1;i<(sizeof(tab)/sizeof(int))-1;++i) {
        if ((tab[i - 1] < tab[i]) && (tab[i] > tab[i + 1])) {
            printf("Nie jest posortowana");
            return 0;
        }
    }
    printf("Jest posortowana");
    return 0;
}