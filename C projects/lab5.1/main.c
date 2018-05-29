#include <stdio.h>
#include <stdlib.h>
#define rows 5
#define columns 4

void f1(int a[][columns], int x);
void f2(int *apointer, int x);
void f3(int **pp, int x, int y);

void wypisz_int (int *poczatek, int *koniec)
{
	while (poczatek < koniec)
	printf ("%4d", *poczatek++);
	return;
}

void fill_int (int *poczatek, int *koniec)
{
	while (poczatek < koniec)
    *poczatek++ = rand()%10;
	return;
}

int main(void)
{
	int i;

	//********array_1 *********//

	int **array_1;
	array_1 = calloc (rows, sizeof(int*));
	if (array_1 == NULL) exit(-1);
    else {
    	for(i=0; i<rows; i++){
		  	      array_1[i] = calloc (columns, sizeof(int));
	       if (array_1[i] == NULL) exit(-1);
	    }
	}
	for(i=0; i<rows; i++) {
	  fill_int (array_1[i],array_1[i]+columns);
	  //printf("\n");
    }
	//wypisywanie
	printf("\n array_1\n");
	for(i=0; i<rows; i++) {
	  wypisz_int (array_1[i],array_1[i]+columns);
	  printf("\n");
    }

 printf("\n wypisywanie f2\n");
	f2(array_1[0],4);
	f2(array_1[1],4);
	f2(array_1[2],4);
	f2(array_1[3],4);
	f2(array_1[4],4);
	printf("\n wypisywanie f3\n");
	f3(array_1,5,4);

	for(i=0; i < rows; i++)
	  free(array_1[i]);
	free(array_1);


	//********array_2 *********//

	int **array_2;
	array_2 = calloc (rows, sizeof(int*));
	if (array_2 == NULL) exit(-1);
    else {
      array_2[0] = calloc (rows*columns, sizeof(int));
	       if (array_2[0] == NULL) exit(-1);

	  for(i=1; i < rows; i++)
	     array_2[i] = array_2[0] + i*columns;
	}

	for(i=0; i<rows; i++) {
	  fill_int (array_2[i],array_2[i]+columns);
	 // printf("\n");
    }
	//wypisywanie
	printf("\n array_2\n");
	for(i=0; i<rows; i++) {
	  wypisz_int (array_2[i],array_2[i]+columns);
	  printf("\n");

    }
      printf("\n wypisywanie f2\n");
	  f2(array_2[0],20);
	  printf("\n wypisywanie f3\n");
	  f3(array_2,5,4);

	free(array_2[0]);
	free(array_2);

	//********array_3 *********//

	int (*array_3)[columns];
	array_3 = calloc (rows*columns, sizeof(int));
	if (array_3 == NULL) exit(-1);

	for(i=0; i<rows; i++) {
	  fill_int (array_3[i],array_3[i]+columns);
	 // printf("\n");
    }
	//wypisywanie
	printf("\n array_3\n");
	for(i=0; i<rows; i++) {
	  wypisz_int (array_3[i],array_3[i]+columns);
	  printf("\n");
    }
     printf("\n wypisywanie f1\n");
    f1(array_3,5);
     printf("\n wypisywanie f2\n");
	f2(array_3[0],20);

	free(array_3);

	//********array_4 *********//

	int *array_4;
	array_4 = calloc (rows*columns, sizeof(int));
	if (array_4 == NULL) exit(-1);

    for(i=0; i<rows; i++) {
	  fill_int (array_4 + i*columns,array_4 + (i+1)*columns);
	//  printf("\n");
    }
	//wypisywanie
	printf("\n array_4\n");
	for(i=0; i<rows; i++) {
	  wypisz_int (array_4 + i*columns,array_4 + (i+1)*columns);
	  printf("\n");
    }
       printf("\n wypisywanie f1\n");
    f2(array_4,20);
	free(array_4);



   printf("\n array_5\n");
   //********array_5 *********//

	int array_5[rows][columns] = {{0}};
	for(i=0; i<rows; i++) {
	  fill_int (array_5[i],array_5[i]+columns);
	  //printf("\n");
    }
	for(i=0; i<rows; i++) {
	  wypisz_int (array_5[i],array_5[i]+columns);
	  printf("\n");
    }
       printf("\n wypisywanie f1\n");
    f1(array_5,5);
       printf("\n wypisywanie f2\n");
	f2(array_5[0],20);

	return 0;


}
//========================================================
//========================================================

void f1(int a[][columns], int x)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<columns;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

void f2(int *apointer, int x)
{
    int i;
    for(i=0;i<x;i++)printf("%d ",apointer[i]);
    printf("\n");
}


void f3(int **pp, int x, int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)printf("%d ",pp[i][j]);
            printf("\n");
    }
    printf("\n");
}





















