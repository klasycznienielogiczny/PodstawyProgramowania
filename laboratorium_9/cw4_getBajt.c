//2- Napisać funkcje unsigned char getBajt(long long number, unsigned bajt), która zwróci konkretny bajt
#include <stdio.h>

unsigned char getBajt(long long number, unsigned bajt){
    return (number>>bajt) & 1U;
}

int main(){
    printf("Wynik: %hhu ; wejscie %d",getBajt(4,2),4);
    return 0;
}