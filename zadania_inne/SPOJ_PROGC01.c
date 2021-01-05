#include <stdio.h>

int main(){
    char c;
    int ile=0;
    while((c=fgetc(stdin))!=EOF) {
        if (c == '\n')
            ile++;
    }
    printf("%d",ile+1);
    return 0;
}