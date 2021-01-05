#include <stdio.h>

int main() {
    int a,b;
    char znak;
    while(scanf(" %c %d %d", &znak,&a,&b)!=EOF){
        switch(znak){
            case '+':
                printf("%d\n",a+b);
                break;
            case '-':
                printf("%d\n",a-b);
                break;
            case '*':
                printf("%d\n",a*b);
                break;
            case '/':
                printf("%d\n",a/b);
                break;
            case '%':
                printf("%d\n",a%b);
                break;

        }
    }
    return 0;
}