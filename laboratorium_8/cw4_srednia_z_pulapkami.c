//cw4- Wczytać z pliku 10 liczb (jedna liczba w jednej linii), ale
// uwzględniwszy, że może czasami się pojawić nieliczba w linii (np. przerywnik językowy)

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
    if((f=fopen("cw4.txt","a+"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    for(int i=0;i<ILE;++i)
        fprintf(f,"%d\n%c\n",rand()%50,rand()%24+65);
    fclose(f);
    return 0;
}*/
//właściwa część programu
int main(){
    FILE *f;
    if((f=fopen("cw4.txt","r"))==NULL){
        printf("Nie moge otworzyc pliku!\n");
        exit(1);
    }
    int liczby[ILE],i=0,suma=0,res,tmp;
    do{
        res=fscanf(f," %d\n",&tmp);
        if(res==1)
            liczby[i++]=tmp;
        else
            res=fscanf(f,"%*s");
    }
    while(res!=EOF);
    /*for(int i=0;i<ILE;++i) //wypisanie testowe
        printf("%d\t",liczby[i]);*/
    for(i=0;i<ILE;++i)
        suma+=liczby[i];
    printf("Srednia liczb wynosi: %.1f",(double)suma/ILE);
    return 0;
}