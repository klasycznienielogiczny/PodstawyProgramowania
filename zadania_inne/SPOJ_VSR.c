#include <stdio.h>

int main() {
    int v1,v2,testow;
    scanf(" %d", &testow);
    for(int i=0;i<testow;i++) {
        while (scanf(" %d %d", &v1, &v2) != EOF)
            printf("%d\n", (2 * v1 * v2) / (v1 + v2));
    }
    return 0;
}