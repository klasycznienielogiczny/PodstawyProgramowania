//- F. zwracająca ilośc małych liter w tekście: islower
#include <stdio.h>
#include <ctype.h>

int ile_malych(char tekst[], int n){
    int ile=0;
    for(int i=0; i<n;++i)
        if(islower(tekst[i])) ++ile;
    return ile;
}

int main(){
    char tekst[]="PrzyKLADowy TEKScik";
    printf("%s zawiera %d malych liter\n",tekst, ile_malych(tekst,sizeof(tekst)/sizeof(char)));
    return 0;
}