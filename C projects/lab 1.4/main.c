#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float suma (float *tab, int N);
float minimum (float *tab, int N);
float maksimum (float *tab, int N);
float srednia(float *tab, int N);
float min_odch(float *tab, int N);
float max_odch(float *tab, int N);

int main()
{
     srand(time(0));
    float tab[10];
    float *p=NULL;
    int i=0;
    for(i=0;i<10;i++)
    {
        tab[i]= (float)RAND_MAX / (rand()%10000);
        printf("tab[%d]=%f\n",i, tab[i]);
    }

    //SUMA
    printf ("\nSUMA= %f",suma(tab,10));
    printf ("\nMINIMUM= %f",minimum(tab,10));
    printf ("\nMAKSIMUM= %f",maksimum(tab,10));
    printf ("\nSREDNIA= %f",srednia(tab,10));
    printf ("\nMINIMALNE ODCHYLENIE OD SREDNIEJ= %f",min_odch(tab,10));
    printf ("\nMAKSYMALNE ODCHYLENIE OD SREDNIEJ= %f",max_odch(tab,10));
    return 0;
}


float suma (float *tab, int N)
{
    int i;
    float wynik=0.0;
    for(i=0;i<N;i++)wynik+=tab[i];
    return wynik;
}

float minimum (float *tab, int N)
{
    int i;
    float minimum=RAND_MAX;
    for(i=0;i<N;i++)if(tab[i]<minimum)minimum=tab[i];
    return minimum;
}

float maksimum (float *tab, int N)
{
    int i;
    float max=0.0;
    for(i=0;i<N;i++)if(tab[i]>max)max=tab[i];
    return max;
}
float srednia(float *tab, int N)
{
   return suma(tab,N)/N;
}
float min_odch(float *tab, int N)
{
    int i;
    float x;
    float s= srednia(tab,N);

    float min_odch=100000.0;
    for(i=0;i<N;i++)
    {
        if(s-tab[i]<0.0)x =(s - tab[i]*(-1.0));
        else x=(s - tab[i]);
        if (x<min_odch) min_odch=x;
    }
    return min_odch;
}

float max_odch(float *tab, int N)
{
    int i;
    float x;
    float s= srednia(tab,N);

    float max_odch=0.0;
    for(i=0;i<N;i++)
    {
        if(tab[i]-s<0.0)x =(tab[i]*(-1.0)-s);
        else x=(tab[i]-s);
        if (x>max_odch) max_odch=x;
    }
    return max_odch;
}
