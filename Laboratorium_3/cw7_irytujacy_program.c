#include <stdio.h> // program ktory irytuje wyswietlaniem tekstu, dopoki sie nie odpowie "tak"
#include <string.h>
int main() {
    char odp[4];
    do{
        printf("Czy kontynuowac program?");
        scanf("%s",odp);
    }
    while(strcmp("tak",odp));
    return 0;
}