#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float f_1(float*, int);
int naj(float**, int, int);
int main()
{
    int i,j;
    float iloczyn;
    srand(time(0));
    float T_1[4];
    float T_2[4];
    float T_3[4];
    float T_4[4];
    float T_5[4];
    float * tab[5];
    for(i=0;i<4;i++)
    {
        T_1[i]=(rand()%10)+(rand()*0.00001);
        T_2[i]=(rand()%10)+(rand()*0.00001);
        T_3[i]=(rand()%10)+(rand()*0.00001);
        T_4[i]=(rand()%10)+(rand()*0.00001);
        T_5[i]=(rand()%10)+(rand()*0.00001);
    }
    for(i=0;i<4;i++)
    {
        printf("T_1[%d] = %f  ",i,T_1[i]);
    }
    printf("\n");
      for(i=0;i<4;i++)
    {
        printf("T_2[%d] = %f  ",i,T_2[i]);
    }
    printf("\n");
      for(i=0;i<4;i++)
    {
        printf("T_3[%d] = %f  ",i,T_3[i]);
    }
    printf("\n");
      for(i=0;i<4;i++)
    {
        printf("T_4[%d] = %f  ",i,T_4[i]);
    }
    printf("\n");
for(i=0;i<4;i++)
    {
        printf("T_5[%d] = %f  ",i,T_5[i]);
    }
    printf("\n");

tab[0]=T_1;
tab[1]=T_2;
tab[2]=T_3;
tab[3]=T_4;
tab[4]=T_5;


for (i = 0; i<sizeof tab/sizeof (float); i++){
   for (j = 0; j<4; j++)
	    printf("%.2f  ", tab[i][j]);
   printf ("\n");
}

iloczyn=f_1(tab[0],4);
printf("\n\n %f",iloczyn);
iloczyn=f_1(tab[1],4);
printf("\n\n %f",iloczyn);
iloczyn=f_1(tab[2],4);
printf("\n\n %f",iloczyn);
iloczyn=f_1(tab[3],4);
printf("\n\n %f",iloczyn);
iloczyn=f_1(tab[4],4);
printf("\n\n %f",iloczyn);


int index;
index = naj(tab,5,4);
printf("\n najwiekszy iloczyn ma tablica %d \n",index+1);


printf("\n\n\n");
 for(i=0;i<5;i++)
 {
     for(j=0;j<4;j++)
        printf("%f  ",tab[i][j]);
    printf("\n");
 }

    return 0;
}

float f_1(float* tab, int n)
{
    int i;
    float wynik=1.0;
   for(i=0;i<n;i++)
    wynik=( wynik * tab[i]);
       return wynik;
   }


int naj(float**tab, int n, int nt)
{
    int i;
    float naj=0.0;
    float test;
    int index;
    for(i=0;i<n;i++)
    {
        test=f_1(tab[i],nt);
        if(test>naj)
        {
            naj=test;
            index=i;
        }
    }

    return index;
}



