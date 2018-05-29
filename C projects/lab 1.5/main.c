#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *a, int *b);
void sort(int *tab, int n);
void change( int*, int ; int );
int main()
{
    int tab[100];
    int i;
    srand(time(0));
    for(i=0;i<100;i++) tab[i]=rand()%100;

    for(i=0;i<100;i++)
    {
        printf("tab[%2d] = %d\n",i,tab[i]);
    }
    sort(tab,100);
    printf("\n\n");
    for(i=0;i<100;i++)
    {
        printf("tab[%2d] = %d\n",i,tab[i]);
    }

    return 0;
}

void swap(int *a, int *b)
{
    int x;
    x=*a;
    *a=*b;
    *b=x;
}
void sort(int *tab, int n)
{
    int i,j;
    for (i=n;i>0;i--)
    {
        for (j=0;j<i-1;j++)
        {
            if((tab[j]%2)!=0)swap(tab+j,tab+j+1);
        }
    }
}

void change( int *tab, int x; int k)
{
    for(i=0, i<x-k;i++) tab[i+k]=tab[i]
    for(i=x-k;i<n;i++) tab[i]=NULL;
}
