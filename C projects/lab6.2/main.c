
#include <stdio.h>
#include <string.h>
#define ROZMIAR 81        //maksymalna dlugo�� �a�cuch�w
#define GRAN 20           // maksymalna liczba �a�cuch�w
void sortlan(char *lan[], int num);  //procedura sortuj�ca �ancuchy
int main(void)
{
  char dane[GRAN][ROZMIAR];    //tablica przechowujaca �a�cuchy
  char *wsklan[GRAN];
  int licz = 0;                //licznik danych wejsciowych
  int k;
  printf("Podaj maksymalnie %d wierszy \n",GRAN);
  printf("Aby zakonczyc, wcisnij Enter na poczatku wiersza.\n");

 while (licz < GRAN && gets(dane[licz]) != NULL && dane[licz][0] != '\0')
  {
     wsklan[licz]= dane[licz];    //ustaw wska�niki na �a�cuchy
     licz++;
  }
  sortlan(wsklan, licz);
  puts("\n Oto uporzadkowana lista:\n");
  for (k = 0; k < licz; k++)
     puts(wsklan[k]) ;
  return 0;
}

// procedura sortuj�ca  - kt�ra tablica jest sortowana ?

void sortlan(char *lan[], int num)
{
  //potrzebne zmienne lokalne
  int i,j;


  for (i=num-1; i>0;i--)
     for (j=0;j<i;j++)
        if (strcmp(*(lan+j),*(lan+j+1)) > 0)
        {
             char *temp=*(lan+j);
            *(lan+j)=*(lan+j+1);
            *(lan+j+1)=temp;
        }
}
