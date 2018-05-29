#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(0));
    char losuj_wyraz[10];
    int i;
    char losowa;
    char *p;
    char *p2;
    int ilosc=0;
    losowa=(rand()%25)+97;
    for(i=0;i<10;i++)
    {
        losuj_wyraz[i]=(rand()%25)+97;
        printf("%c",losuj_wyraz[i]);
    }
    p=strchr(losuj_wyraz,losowa);
    if(p!=NULL)printf("\n\n%c wystepuje na miejscu %p ",losowa,p);
    else printf("\n%c nie wystepuje",losowa);

    for(p2=strchr(losuj_wyraz,losowa);p2!=NULL;p2=strchr(p2+1, losowa))
    {
        ilosc++;
    }
printf("\n ilosc wystapien %d ",ilosc);
    return 0;
}
