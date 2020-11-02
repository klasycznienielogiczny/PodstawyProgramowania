#include <stdio.h>

int main(){
    int a=2, b=7;
    printf("%d & %d = %d\n",a,b,a&b);
    printf("%d && %d = %d\n",a,b,a&&b);
    printf("%d | %d = %d\n",a,b,a|b);
    printf("%d || %d = %d\n",a,b,a||b);
    return 0;
}