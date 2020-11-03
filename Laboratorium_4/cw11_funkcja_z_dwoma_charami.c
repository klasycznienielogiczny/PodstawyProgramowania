// 11. funkcja która przyjmuje typ tekstu (error/warning) oraz komunikat oraz ma poprzedzić wyświetlenie numerem komunikatu, który
//ma rosnąć przy okazji każdego wywyłania funkcji

#include <stdio.h>
#include <string.h>
int counter[3]={0,0,0},tmp=0;
void komunikat(char prefix[], char tekst []){
    if(strcmp("WARNING",prefix) || strcmp("warning",prefix))
        tmp=0;
    if(strcmp("ERROR",prefix) || strcmp("error",prefix))
        tmp = 1;
    if(strcmp("DEBUG", prefix) || strcmp("debug", prefix))
        tmp = 2;
    printf("[%s#%d] %s\n",prefix,++counter[tmp],tekst);
}

int main(){
    char prefix[10], tekst[256];
    while(getchar()!=EOF) {
        printf("Podaj prefix:");
        scanf(" %s", prefix);
        printf("Podaj tresc komunikatu:");
        scanf(" %s", tekst);
        komunikat(prefix, tekst);
    }
    return 0;
}