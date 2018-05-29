#include <stdio.h>
#include <stdlib.h>
int add2(int * a, int * b)
{
    return (*a+*b);

}
int comp2(int * a, int * b)
{
    return (*a-*b);
}

int add2_or_comp2 (int *a, int *b, int(*f)(int*,int*))
{
                       return (f(a,b));
}
int main()
{
int i,j;
int wynik;
int (*f)(int*,int*);
printf ("podaj dwie liczby\n");
scanf("%d",&i);
scanf("%d",&j);
printf("\n\nchcesz je dodaæ (wpisz 1) czy odjac {wpisz 2)?");
scanf("%d",&wynik);

if(wynik==1)f=add2;
else if(wynik==2)f=comp2;
else printf("nastêpnym razem wpisz 1 lub 2!");

    return add2_or_comp2(&i,&j,f);
}
