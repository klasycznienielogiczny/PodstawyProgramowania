#include <stdio.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>

void czytaj(char *format, ...)
{
    va_list ptr;
    va_start(ptr, format);
    vscanf(format, ptr);
    va_end(ptr);
}

int main() {
    int k,w;
    scanf(" %d %d",&w, &k);
    int **mac=(int **)malloc(sizeof(int*)*w);
    for(int i=0;i<w;++i)
        mac[i]=(int *)malloc(sizeof(int)*k);

    for(int i=0;i<w;i++) {
        for (int j = 0; j < k; j++) {
            czytaj(" %d", &mac[i][j]);
        }
    }

    for(int j=0;j<k;j++){
        for(int i=0;i<w;i++){
            printf("%d ",mac[i][j]);
        }
        printf("\n");
    }
    return 0;
}