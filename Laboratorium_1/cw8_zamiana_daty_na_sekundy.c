//
// Created by piotr on 18.10.2020.
//

#include <stdio.h>
#include <math.h>
// Program wczytuje czas w formacie dd:hh:mm:ss i wyświetla ile to sekund
int zamien_czas(int d,int h, int m, int s)
{
    return s+60*m+3600*h+3600*24*d;
}

int main() {
    printf("dd:hh:mm:ss\n");
    int d,h,m,s;
    scanf("%d:%d:%d:%d",&d,&h,&m,&s);
    printf("sekund: %d",(zamien_czas(d,h,m,s)));
    return 0;
}