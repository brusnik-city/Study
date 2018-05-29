#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct S
{
    unsigned dlugosc;
    int *var;
}S;

int main()
{
    srand(time(NULL));
   S *wsk[5];
   int i,los,j;
   for(i=0;i<5;i++)
   {

       wsk[i]=malloc(sizeof(S));
       scanf("%d",&los);
       printf("\n");
       wsk[i]->dlugosc=los;
       wsk[i]->var=malloc(los*sizeof(int));
       for(j=0;j<los;j++)
       {
           wsk[i]->var[j]=rand()%100;
           printf("%d ",wsk[i]->var[j]);
       }
       printf("\n");

   }
   for(i=0;i<5;i++)
   {
       free(wsk[i]);
   }

    return 0;
}
4
