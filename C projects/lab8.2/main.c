#include <stdio.h>
#include <stdlib.h>
#include <time.h>

union zmienna{
int calkowita;
double rzeczywista;
};

struct liczba{
char znak;
union zmienna x;
};

void wypisz(struct liczba *tab, int ile);
struct liczba *sort(struct liczba *tab, int ile);
int cmp(const void *a, const void *b);

int main()
{
    srand(time(0));

    struct liczba tab[20];
    struct liczba * tab2;

    int i,zmienna,dlugosc,ile;
    for(i=0;i<20;i++)
    {
    zmienna= rand()%2;
    if(zmienna==0)
    {
        tab[i].znak='i';
        tab[i].x.calkowita=rand()%100;

    }
    else if(zmienna==1)
    {
        tab[i].znak='d';
        tab[i].x.rzeczywista=(rand()%100)+rand()*0.00000001;
    }
    }
    wypisz(tab,20);


    FILE *plik;
    plik=fopen("nowy.bin","w+b");


        fwrite(tab,sizeof(struct liczba),20,plik);
        fclose(plik);

    plik=fopen("nowy.bin","r+b");
    fseek (plik, 0, SEEK_END);
    fgetpos (plik, &dlugosc);
    ile=dlugosc/sizeof(struct liczba);
    printf ("Rozmiar pliku: %d plik przechowuje %d elementow\n", dlugosc,ile);

    fseek (plik, 0, SEEK_SET);
    tab2=malloc(20*sizeof(struct liczba));
	fread(tab2,sizeof(struct liczba),20,plik);

	wypisz(tab2,20);
    tab2=sort(tab2,20);
 printf("==========================\n");
	wypisz(tab2,20);
    return 0;
}

void wypisz(struct liczba *tab, int ile)
{
    int i;
    for(i=0;i<ile;i++)
    {
    if(tab[i].znak=='i')
    {
        printf("%d \t\t\tcalkowita\n",tab[i].x);

    }
    else if(tab[i].znak=='d')
    {
        printf("%lf \t\trzeczywista\n",tab[i].x);
    }
    }
}

struct liczba *sort(struct liczba *tab, int ile)
{
    struct liczba *tab2;
    struct liczba wsk;
    int x,y;
    int i,j,licznik=0;
    tab2=malloc(20*sizeof(struct liczba));
    for(i=0;i<ile;i++)
    {
    if(tab[i].znak=='i')
    {
       tab2[licznik]=tab[i];

    }
    else if(tab[i].znak=='d')
    {
        tab2[ile -1-licznik]=tab[i];
        licznik++;
    }
    }
    //qsort(tab2,licznik,sizeof(tab[0]),cmp);

    return tab2;
}
/*int cmp(const void *a, const void *b)
{
    struct liczba z =*((struct liczba *)a);
    struct liczba y =*((struct liczba *)b);
    if(z.x>y.x)return 1;
    else if(z.x<y.x)return -1;
    else if(z.x==y.x)return 0;*/

