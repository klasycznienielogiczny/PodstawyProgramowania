// co ma wiekszy rozmiar
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct S1{
    bool b; //
    double d; //
    char c; //
    int i; //
} s1={true, 58, 'c', 5};
struct S2{
    double d; //
    int i; //
    bool b; //
    char c; //
} s2={58, 5, true, 'c'};

int main(){
    printf("s1: %d\n",sizeof(s1));
    printf("s2: %d\n",sizeof(s2));
    (sizeof(s1)>sizeof(s2)) ? printf("s1 > s2") : (sizeof(s1)<sizeof(s2)) ? printf("s1 > s2") : printf("s1 == s2");
    return 0;
}