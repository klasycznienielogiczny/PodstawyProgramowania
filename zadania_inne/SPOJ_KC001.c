#include <stdio.h>

int main(){
    int a,suma=0;
    for(int i=0;i<3;i++) {
        scanf(" %d", &a);
        suma+=a;
    }
    printf("%d",suma);
    return 0;
}