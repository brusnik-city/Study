#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(float*, int);

int main()
{
    srand(time(0));
    float tab1[10];
    float tab2[15];
    int i;
    for(i=0;i<10;i++)
    {
        tab1[i]=(rand()%10)*0.1+1.0;
        printf("%f  ",tab1[i]);
    }
    printf("\n");
      for(i=0;i<15;i++)
    {
        tab2[i]=(rand()%10)*0.1+1.0;
        printf("%f  ",tab2[i]);
    }
    sort(tab1,10);
    sort(tab2,15);

    printf("\n\n");
     for(i=0;i<10;i++)
    {

        printf("%f  ",tab1[i]);
    }
    printf("\n");
      for(i=0;i<15;i++)
    {

        printf("%f  ",tab2[i]);
    }
    return 0;
}

void sort(float *tab, int n)
{
    int i,j;
    float x;
    int min;
    for(i=0;i<n;i++)
    {
        min =i;
        for (j=i;j<n;j++)
        {
         if(tab[min]>tab[j])min=j;
        }
        x=tab[min];
        tab[min]=tab[i];
        tab[i]=x;
    }
}
