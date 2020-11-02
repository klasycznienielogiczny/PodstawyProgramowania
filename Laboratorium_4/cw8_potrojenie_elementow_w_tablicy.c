// 8.potrojenie wartosci w tablicy
#include <stdio.h>
int main(){
    int tab[]={1,2,3,4,5,6,7,8,9};
    printf("Tablica oryginalna\n");
    for(int i=0;i<sizeof(tab)/sizeof(int);++i)
        printf("%d\t",tab[i]);
    for(int i=0;i<sizeof(tab)/sizeof(int);++i)
        tab[i]*=3;
    printf("\nTablica po zmianach\n");
    for(int i=0;i<sizeof(tab)/sizeof(int);++i)
        printf("%d\t",tab[i]);
    return 0;
}