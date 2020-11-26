//cw3- Wczytać z pliku 10 liczb (można go wygenerować na Linuxie tak: shuf -i 1-100000 -n 10) i wyświetlić ich średnią

#include <stdio.h>
#include <stdlib.h>
#define ILE 10
#include <time.h>
/* //generujemy plik
int main(){
    int zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    FILE *f;
    if((f=fopen("cw3.txt","a+"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    for(int i=0;i<ILE;++i)
        fprintf(f,"%d\t",rand()%50);
    fclose(f);
    return 0;
}*/
//właściwa część programu
int main(){
    FILE *f;
    if((f=fopen("cw3.txt","r"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    int liczby[ILE],i,suma=0;
    for(i=0;i<ILE;++i)
        fscanf(f,"%d\t",&liczby[i]);
    fclose(f);
    for(i=0;i<ILE;++i)
        suma+=liczby[i];
    printf("Srednia liczb wynosi: %.1f",(double)suma/ILE);
    return 0;
}