// LAB1 zad 2 LIFO
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void show(int *);
void push(int *, int);
int pop (int *);
int main()
{
    int tab[MAX];

    int i=0;
    for(i=0;i<MAX;i++)tab[i]=NULL;
    tab[0]=20;
    tab[1]=30;
    show(tab);
    push(tab, 23);
    printf("\n\n");
    show(tab);
       printf("\n\n");
    printf("%d", pop(tab));
       printf("\n\n");
        show(tab);
    return 0;
}

void show(int *tab)
{   int i;
    for(i=0;tab[i]!=NULL; i++)
        printf("%d  ", *(tab+i) );
}

void push(int *tab, int value)
{
    int i=0;
    while(tab[i]!=NULL)i++;
        if (i>=MAX) exit(-1);
        else tab[i]=value;
}

int pop(int *tab)
{   int i=0;
    int value;
    while(tab[i]!=NULL)i++;
    value=tab[i-1];
    tab[i-1]=0;
    return i;
}
