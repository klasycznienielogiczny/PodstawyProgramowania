#include <stdio.h>

int czy(float a, float b, float c){
    if(a<=0 || b<=0 || c<=0)
        return 0;
    if((a+b)>c && (a+c)>b && (b+c)>a)
        return 1;
    return 0;
}

int main(){
    float a,b,c;
    while(scanf(" %f %f %f", &a,&b,&c)!=EOF)
        printf("%d\n",czy(a,b,c));
    return 0;
}