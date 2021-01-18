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
    int suma=0;
    int ile_liczb;
    scanf(" %d ",&ile_liczb);
    int *i = malloc(ile_liczb*sizeof(int));
    for (int k = 0; k < ile_liczb; ++k) {
        czytaj(" %d", &i[k]);
        suma += i[k];
    }
    printf("%d",suma);
    return 0;
}
