#include <stdio.h>

int main() {
    for(int i=0;i<=100;++i)
        if(i%6==0)
            printf("%d\t",i);
    return 0;
}