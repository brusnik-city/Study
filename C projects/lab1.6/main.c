#include <stdio.h>
#include <stdlib.h>
void change( int *, int , int );
int main()
{
    int tab[100];
    int i;
    int k=5;
    int x=100;
    for(i=0;i<100;i++)
    {
        tab[i]=i;
        printf ("tab[%d]=%d\n",i,tab[i]);
    }
    for(i=0; i<x-k;i++) tab[i]=tab[i+k];
    for(i=x-k;i<x;i++) tab[i]=NULL;


      for(i=0;i<100;i++)
    {
        printf ("tab[%d]=%d\n",i,tab[i]);
    }
    return 0;
}

