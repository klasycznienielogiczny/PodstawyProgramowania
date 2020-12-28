//1,2- Napisać funkcje disableBit(long long number, unsigned bit2Enable), która zgasi dany bit
#include <stdio.h>

long long disableBit(long long number, unsigned bit2Enable){
    return number &= ~(1UL<<bit2Enable);
}

int main(){
    printf("Wynik: %lld ; wejscie %d",disableBit(5,2),5);
    return 0;
}
