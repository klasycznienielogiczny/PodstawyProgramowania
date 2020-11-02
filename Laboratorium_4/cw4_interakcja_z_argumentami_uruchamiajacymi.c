#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if(strcpy(argv[1],"--h"))
        printf("Help\n");
    return 0;
}