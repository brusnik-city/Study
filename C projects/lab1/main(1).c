//zadanie1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
int suma_rek(int *, int *);

int main()
{
    srand(time(0));
    int tab[N];
    int *p=NULL;

    for(p=tab;p<tab+N;p++)
    {
        *p= rand() %28 +7;
        printf("p[%d]=%d\n",(p-tab+1), *p);
    }

   int su=suma_rek(tab,p-1);
    printf("su=%d\n", su);
    return 0;
  }

  int suma_rek(int *tab,int *p)
  {
      if((p-tab)!=0)
        return suma_rek(tab,p-1)+*p;
      else
        return *p;
  }

