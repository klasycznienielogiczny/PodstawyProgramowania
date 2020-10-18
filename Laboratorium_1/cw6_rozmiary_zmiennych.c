//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
// Program wypisuje wielkość zajmowanej pamięci przez odpowiednie zmienne
int main() {
    int a=1;
    char k='a';
    float b=3.14;
    double c=3.14;
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short int));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(long long int));
    printf("%d\n",sizeof(unsigned int));
    printf("%d\n",sizeof(long));
}