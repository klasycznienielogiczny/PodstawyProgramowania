#include <stdio.h>

int main() {
    int a,b,rejestr[10];
    char znak;
    while(scanf(" %c %d %d", &znak,&a,&b)!=EOF){
        switch(znak){
            case '+':
                printf("%d\n",rejestr[a]+rejestr[b]);
                break;
            case '-':
                printf("%d\n",rejestr[a]-rejestr[b]);
                break;
            case '*':
                printf("%d\n",rejestr[a]*rejestr[b]);
                break;
            case '/':
                printf("%d\n",rejestr[a]/rejestr[b]);
                break;
            case '%':
                printf("%d\n",rejestr[a]%rejestr[b]);
                break;
            case 'z':
                rejestr[a]=b;
                break;
        }
    }
    return 0;
}