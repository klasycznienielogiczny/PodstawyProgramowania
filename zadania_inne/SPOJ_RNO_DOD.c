#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void czytaj(char *format, ...)
{
    va_list ptr;
    va_start(ptr, format);
    vscanf(format, ptr);
    va_end(ptr);
}

int main()
{
    int testy;
    scanf(" %d ",&testy);
    int *suma=malloc(testy*sizeof(int));
    for(int a=0;a<testy;++a) {
        suma[a]=0;
        int ile_liczb;
        scanf(" %d ",&ile_liczb);
        int *i = malloc(ile_liczb*sizeof(int));
        for (int k = 0; k < ile_liczb; ++k) {
            czytaj(" %d", &i[k]);
            suma[a] += i[k];
        }
    }

    for(int a=0;a<testy;++a)
        printf("%d\n",suma[a]);
    return 0;
}
