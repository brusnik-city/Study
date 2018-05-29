
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int double_cmp(const void *a, const void *b); //komparator dla double

int cstring_cmp(const void *a, const void *b);   //komparator dla stringów


void print_double_array(double*,int); //wypisywanie tablicy double

void print_cstring_array(char**,int); //wypisywanie tablicy string'ów

int cpstring_cmp(const void *a, const void *b);



void sort_double_example()   //sortowanie tablicy double
{
    double numbers[] = { 7.4, 1.3, 14.5, 0.1, -1.0, 2.3, 1,2, 43.0, 2.0, -4.7, 5.8 };
    size_t numbers_len = sizeof(numbers)/sizeof(numbers[0]);  //określenie długości tablicy

    puts("*** Double sorting...");

      print_double_array(numbers,numbers_len);   //wypisanie tablicy przed sortowaniem
   qsort(numbers, numbers_len,sizeof(numbers[0]) , double_cmp);   //sortowanie tablicy integer


    print_double_array(numbers,numbers_len);  //wypisanie tablicy po sortowaniu
        printf("\npodaj liczbe tybu double");
    double i;
    scanf("%lf",&i);
    double *wsk;
    wsk=(double*)bsearch(&i,numbers,numbers_len,sizeof(numbers[0]),double_cmp);
    if(wsk==NULL)printf("\nliczby nie ma w tablicy \n");
    else printf("Liczba znajduje sie w tablicy\n");
}


void sort_cstrings_example()  //sortowanie tablicy stringów
{
    char *strings[] = { "Zorro", "Alex", "Celine", "Bill", "Forest", "Dexter"};
    size_t strings_len = sizeof(strings)/sizeof(strings[0]);   //okreslenie długości tablicy


    puts("*** String sorting...");

    print_cstring_array(strings, strings_len);   //wypisanie tablicy przed sortowaniem



    qsort(strings, strings_len, sizeof(strings[0]), cstring_cmp);  //sortowanie tablicy stringów


    print_cstring_array(strings, strings_len);   //wypisanie tablicy po sortowaniu
    char t[40];
	char *c;
	scanf("%s",t);
	c=(char*)bsearch(&t,strings,strings_len,sizeof(strings[0]),cpstring_cmp);
	if(c==NULL) printf("Brak nazwy w tablicy.");
	else printf("Nazwa jest w tablicy");
}


 // MAIN program (wywołanie funkcji sortujacych)
int main()
{

    sort_double_example();
    sort_cstrings_example();



    return 0;
}

void print_double_array(double* D,int ile)
{
	int i;
	for(i=0;i<ile;i++)
	{
		printf("%.2f ",*(D+i));
	}
	printf("\n");
}
int double_cmp(const void *a, const void *b)
{
	double *p=(double*)a;
	double *o=(double*)b;
	if(*p<*o) return -1;
	else if(*p==*o) return 0;
	else return 1;

}
void print_cstring_array(char** C,int ile)
{
	int i;
	for(i=0;i<ile;i++)
	{
		printf("%s ",*(C+i));
	}
	printf("\n");
}
int cstring_cmp(const void *a, const void *b)
{
  return strcmp(*(char**)a,*(char**)b);
}
int cpstring_cmp(const void *a, const void *b)
{
	return strcmp((char*)a,*(char**)b);
}
