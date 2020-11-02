#include <stdio.h>
#include <string.h>

int sort(int tab[],int n){
    int a,i,j;
    for(i=1;i<n;++i){
        a=tab[i];
        for(j=i-1;j>=0;j--)
            if(a<tab[j])
                tab[j+1]=tab[j];
        tab[j+1]=a;
    }
}

int mediana(int tab[],int n) {
    int tab_s[n];
    *tab_s=sort(tab,n);
    for (int i=0; i<n;i++)
        printf("%d\t",tab_s[i]);
    //return n%2==0 ? (tab_s[n/2]+tab_s[n/2+1])/2 : tab_s[(n-1/2)];
    return 0;
}


int main() {
    int tab[]={5,4,3,2,1,8};
    //printf("Mediana rowna: %d",mediana(tab,6));
    mediana(tab,6);
}