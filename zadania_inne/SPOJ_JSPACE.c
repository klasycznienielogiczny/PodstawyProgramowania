#include <stdio.h>
#include <ctype.h>

int main(){
    char c,pom;
    while((c=fgetc(stdin))!=EOF){
        while (isspace(c) && c!='\n'){
            pom=c;
            c=fgetc(stdin);
        }
        if(!isspace(pom) || pom=='\n') {
            printf("%c",c);
        }
        else if(isspace(pom) && pom!='\n'){
            printf("%c", toupper(c));
            pom='k';
        }
    }
    return 0;
}