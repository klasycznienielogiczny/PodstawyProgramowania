//2- Napisać funkcje bool getArrayBit(int array, unsigned element, unsigned bit), która zwróci
// konkretny bit z konkretnego elementu tablicy
#include <stdio.h>
int getArrayBit(int array[], unsigned int element, unsigned bit){
    return (array[element]&(1<<bit)) ? 1 : 0;
}

int main(){
    int arr[]={5,10,78,69,54,178,182,22};
    printf("%d", getArrayBit(arr,0,1));
}