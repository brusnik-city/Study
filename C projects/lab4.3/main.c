#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double srednia (int *tab, int ile);
int suma (int(*tab)[4],int n);
 void wypisz (int *poczatek, int *koniec);
int main()
{
    srand(time(0));
    int abc[5][4];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            abc[i][j]=(rand()%20)-10;
        }
    }
    for(i=0;i<5;i++)
    {
    wypisz(abc[i],abc[i+1]);
    printf("\n");
    }
    double sr;
    int test[6] = {1,3,5,7,-8,-11};
    sr=srednia(test,6);
    printf("%g",sr);

   //===========================
   printf("\n");
    double avg_abc[5];
   for(i=0;i<5;i++)
   {
       avg_abc[i]=srednia(abc[i],4);
       printf("%g\t",avg_abc[i]);
   }
double avg_all=srednia(abc,20);
printf("\n srednia z calosci = %lf\t",avg_all);

int sum;
sum = suma(abc,5);
printf("suma wszystkich elementow = %d",sum);


    return 0;
}
void wypisz (int *poczatek, int *koniec) {
   while (poczatek < koniec)
    printf ("%4d", *(poczatek++));
  return;}


int suma(int (*tab)[4],int n)
{
    int wynik=0;
    int i,j;
   for(i=0;i<n;i++)
   {
       for(j=0;j<4;j++)
        wynik= wynik+ tab[i][j];
   }

    return wynik;

}


double srednia (int *tab, int ile)
{
    int wynik=0;
    int i;
    double sr=0.0;
    for(i=0;i<ile;i++)
    {
        wynik+=tab[i];
    }
    sr=(double)wynik/(double)ile;
    return sr;
}
