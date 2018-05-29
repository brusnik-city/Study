#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct vector{
float x;
float y;
float z;
};
struct abc{
struct vector vect;
double dlugosc;
};


float dlugosc(float x,float y,float z);
void f_d (struct abc *,int ile);
int compare (const void * a, const void * b);
int compare2 (const void * a, const void * b);


main()
{
    srand(time(0));

    int ile;
    int i;
    double znajdz;
    double * wynik;
    scanf("%d",&ile);
    struct abc tab[ile];
    for(i=0;i<ile;i++)
    {
        tab[i].vect.x=(rand()%10)+(rand()%10)*0.1;
        tab[i].vect.y=(rand()%10)+(rand()%10)*0.1;
        tab[i].vect.z=(rand()%10)+(rand()%10)*0.1;

        printf ("\nwektor %d = %.2f %.2f %.2f",i+1,tab[i].vect.x,tab[i].vect.y,tab[i].vect.z);
    }

    f_d(tab,ile);

    qsort(tab,ile, sizeof(struct abc),compare);
    printf("/n/npo sortowaniu\n");
    for(i=0;i<ile;i++)
    {
        printf ("\nwektor %d = %.2f %.2f %.2f",i+1,tab[i].vect.x,tab[i].vect.y,tab[i].vect.z);
    }
     printf("\n\nwektor o jakiej dlugosci chcesz znalezc \n");
     scanf("%lf",&znajdz);
     wynik=bsearch(&znajdz,tab,ile,sizeof(struct abc),compare2);
     for(i=0;i<ile;i++)
     {
        if(tab[i].dlugosc==(*wynik))
        {
            printf("taka dlogosc ma wektor %d",i);
        }
     }
    return 0;
}

float dlugosc(float x,float y,float z)
{
    float dl;

	dl=(sqrt(x*x+y*y+z*z));
	return dl;
}

void f_d (struct abc *tab,int ile)
 {
     int i=0;
     for(i=0;i<ile;i++)
     {
        tab[i].dlugosc=dlugosc(tab[i].vect.x,tab[i].vect.y,tab[i].vect.z);
        printf ("\ndlugosc wektora %d = %.2f",i+1,tab[i].dlugosc);



     }
 }


int compare (const void * a, const void * b)
{
     struct abc* arg1 = (struct abc*) a;
     struct abc* arg2 = (struct abc*) b;
     if( arg1->dlugosc < arg2->dlugosc ) return -1;
     else if( arg1->dlugosc == arg2->dlugosc ) return 0;
     else return 1;
}

int compare2 (const void * a, const void * b)
{
     double *arg1 = (double *) a;
     struct abc* arg2 = (struct abc*) b;
     if( *arg1 < arg2->dlugosc ) return -1;
     else if( *arg1 == arg2->dlugosc ) return 0;
     else return 1;
}
