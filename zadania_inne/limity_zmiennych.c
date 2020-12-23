#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    double lMax;

    lMax = log2(INT_MAX);
    printf("INT_MAX \t= %25d ; lMax = log2(INT_MAX) \t= %.0f \n",INT_MAX,  lMax);

    lMax = log2(UINT_MAX);
    printf("UINT_MAX \t= %25u ; lMax = log2(UINT_MAX) \t= %.0f \n", UINT_MAX,  lMax);

    lMax = log2(LONG_MAX);
    printf("LONG_MAX \t= %25ld ; lMax = log2(LONG_MAX) \t= %.0f \n",LONG_MAX,  lMax);


    lMax = log2(ULONG_MAX);
    printf("ULONG_MAX \t= %25lu ; lMax = log2(ULONG_MAX) \t= %.0f \n",ULONG_MAX,  lMax);

    lMax = log2(LLONG_MAX);
    printf("LLONG_MAX \t= %25lld ; lMax = log2(LLONG_MAX) \t= %.0f \n",LLONG_MAX, lMax);

    lMax = log2(ULLONG_MAX);
    printf("ULLONG_MAX \t= %25llu ; lMax = log2(ULLONG_MAX) \t= %.0f \n",ULLONG_MAX, lMax);

    return 0;
}