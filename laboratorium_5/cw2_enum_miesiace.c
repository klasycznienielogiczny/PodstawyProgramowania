#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum miesiac {styczen=1,marzec=3,kwiecien,maj,czerwiec,lipiec,grudzien=12};

enum miesiac podajnumermiesiaca(char tekst[]) {
    enum miesiac msc;
    if(strcmp(tekst,"styczen")==0)
        msc = styczen;
    else if(strcmp(tekst,"marzec")==0)
        msc = marzec;
    else if(strcmp(tekst,"kwiecien")==0)
        msc = kwiecien;
    else if(strcmp(tekst,"maj")==0)
        msc = maj;
    else if(strcmp(tekst,"czerwiec")==0)
        msc = czerwiec;
    else if(strcmp(tekst,"lipiec")==0)
        msc = lipiec;
    else if(strcmp(tekst,"grudzien")==0)
        msc = grudzien;
    else return 0;
    return msc;
}

int main(){
    printf("Jaki miesiac?");
    char mc[32];
    scanf("%s",mc);
    printf("%s to %d miesiac",mc,podajnumermiesiaca(mc));
    return 0;
}