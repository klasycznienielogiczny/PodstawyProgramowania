//- F. przycinająca tekst do określonej długości (w razie gdy tekst jest za krótki nic nie robiąca):

#include <stdio.h>
void przycinanie(char tekst[], int n,int dl){
    for(int i=n;i<dl;++i)
        tekst[i]='\b';
    tekst[dl]='\n';
}

int main(){
    char tekst[]="Przykladowy tekst";
    int n=sizeof(tekst);
    printf("Tekst oryginalny: %s\n",tekst);
    przycinanie(tekst, 5,n);
    printf("Tekst przyciety: %s\n",tekst);
    return 0;
}