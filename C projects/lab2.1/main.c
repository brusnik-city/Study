#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char * funkcja(int liczba);

struct s{
unsigned dlugosc;
char *var;
};


int main()
{
    struct s ** wsk;
    wsk=(struct s **)malloc(4*sizeof(struct s*));
    int i,j,k;
    for(i=0;i<4;i++)wsk[i]=(struct s *)malloc(5*sizeof(struct s));
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%u",&wsk[i][j].dlugosc);
        }
    }

 for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("[%d][%d]=%u\t",i,j,wsk[i][j]);

        }
        printf("\n");

    }
   for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            wsk[i][j].var=funkcja(wsk[i][j].dlugosc);
            for(k=0;k<wsk[i][j].dlugosc;k++)printf("%c",wsk[i][j].var[k]);
            printf("\t");

        }
        printf("\n");

    }

    return 0;
}

char * funkcja(int liczba)
{
    char *wsk;
    int i;
    wsk=(char*)malloc(liczba*sizeof(char));
    for(i=0;i<liczba;i++)
        wsk[i]=(rand()%25)+97;



    return wsk;
}
