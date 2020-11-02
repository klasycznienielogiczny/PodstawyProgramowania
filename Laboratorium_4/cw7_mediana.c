#include <stdio.h>
#include <string.h>

float mediana(int tab[], int n){
    int a=0,j=0;
    for(int i=n-2;i>=0;--i){
        a=tab[i];
        j=i+1;
        while((j<n) && (a>tab[j])){
            tab[j-1] = tab[j];
            j++;
        }
        tab[j-1]=a;
        /*for(j=i+1;j<n;++j)
            if(a>tab[j])
                tab[j-1]=tab[j];
        tab[j-2]=a;*/
    }
    /*for(int i=0;i<n;i++)
        printf("%d\t",tab[i]);*/
    return n%2==0 ? 1.0*(tab[n/2-1]+tab[n/2])/2 : 1.0*tab[(n-1)/2];
}

int main() {
    int tab[]={5,4,3,2,1,8,9,85};
    //printf("L.el. %d\n",sizeof(tab)/sizeof(int));
    printf("Mediana jest rowna %.2f",mediana(tab,sizeof(tab)/sizeof(int)));
    //mediana(tab,sizeof(tab)/sizeof(int));
}