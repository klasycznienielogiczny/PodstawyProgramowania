//2- Napisać funkcje enableBit(long long number, unsigned bit2Enable), która zapali dany bit
#include <stdio.h>

long long enableBit(long long number, unsigned bit2Enable){
    return number |= (1UL<<bit2Enable);
}

int main(){
    printf("Wynik: %lld ; wejscie %d",enableBit(7,4),4);
    return 0;
}