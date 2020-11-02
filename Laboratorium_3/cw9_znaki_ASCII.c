#include <stdio.h> // dec ->ASCII

int main() {
    for(int i=0;i<256;++i)
        printf("%d to %c\n",i,(char)i);
    return 0;
}