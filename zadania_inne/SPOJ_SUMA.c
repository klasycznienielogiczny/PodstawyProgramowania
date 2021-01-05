#include <stdio.h>

int main(){
    int a,suma=0;
    while(scanf(" %d", &a)!=EOF){
        suma+=a;
        printf("%d\n",suma);
    }
    return 0;
}