//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
#include <math.h>
// Kolejny przykład zasięgu zmiennych
float a=8.5985;

int main() {
    printf("%f\n",a);
    {
        float a =87;
        printf("%f\n",a);
        {
            float a =8877;
            printf("%f\n",a);
            {
                float a =87.8745;
                printf("%f\n",a);
            }
        }
    }
    return 0;
}