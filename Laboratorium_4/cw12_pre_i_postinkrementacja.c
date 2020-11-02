//funkcje i podanie argumentów typu f(i++,++i)
#include <stdio.h>

void fun(int a, int b){
    printf("%d\t%d",a,b);
}

int main(){
    int i=5;
    fun(++i,i++);
    return 0;
}