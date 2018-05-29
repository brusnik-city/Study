#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypisz (double *poczatek, double *koniec);
int main()
{
    srand(time(0));
    float T_A[4][4];
    int i,j;
    float suma=0.0;
    float sumpod=0.0;
    float sumk1=0.0;
    float sumk2=0.0;
    float sumk3=0.0;
    float sumk4=0.0;
    float x;
printf("\tMACIERZ \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            T_A[i][j]=(rand()%10)+(rand()%10)*0.1+10;
            printf("%.1f  ",T_A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++) suma+= T_A[i][i];
    printf("\n suma na przekatnej = %.1f",suma);

    for(i=0;i<4;i++)
    {
        for(j=0;j<i;j++) sumpod+=T_A[i][j];
    }
    printf("\n suma pod przekatna = %.1f\n",sumpod);

    for(i=0;i<4;i++) sumk1+=T_A[i][0];
    for(i=0;i<4;i++) sumk2+=T_A[i][1];
    for(i=0;i<4;i++) sumk3+=T_A[i][2];
    for(i=0;i<4;i++) sumk4+=T_A[i][3];
    printf("k1=%.1f  k2=%.1f  k3=%.1f  k4=%.1f\n",sumk1,sumk2,sumk3,sumk4);

    for(i=0;i<4;i++)
    {
        for(j=i;j<4;j++)
        {
            x=T_A[j][i];
            T_A[j][i]=T_A[i][j];
            T_A[i][j]=x;

        }
    }
     printf("\n\tMACIERZ TRANSPONOWANA\n");
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)printf("%.1f  ",T_A[i][j]);
printf("\n");
}
printf("\n\n\n");

//=============4.2========================

double test[6]={1.2,1.3,1.4,1.5,1.6,1.7};
wypisz(test,(test+6));
int test2[6]={1,2,3,4,5,6};
wypisz_int(test2,test2+6);


    return 0;
    }


void wypisz (double *poczatek, double *koniec) {
   while (poczatek < koniec)
    printf ("%6.2f ", *(poczatek++) );
  return;}

  void wypisz_int (int *poczatek, int *koniec) {
   while (poczatek < koniec)
    printf ("%4d", *(poczatek++));
  return;}
