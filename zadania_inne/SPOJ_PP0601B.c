#include <stdio.h>

int main() {
    int x,y,n,t;
    scanf( "%d",&t);
    for (int i=0; i<t;++i){
        scanf( "%d %d %d",&n, &x, &y);
        for(int j=1;j<n;++j){
            if(j%x==0 && j%y!=0)
                printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}