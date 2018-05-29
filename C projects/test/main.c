#include <stdio.h>
int main(){
int a[] = {0, 1, 2, 3, 4};
int *p[] = {a, a+1, a+2, a+3, a+4};
int **pp = p;
printf ("%p, %d\n", a, *a);
printf ("%p, %p, %d\n", p, *p, **p);
printf ("%p, %p, %d\n", pp, *pp, **pp);

pp++;
printf ("%I64d, %I64d, %d\n", pp-p, *pp-a, **pp);  //%I64d format dla long long int
*pp++;
printf ("%I64d, %I64d, %d\n", pp-p, *pp-a, **pp);
*++pp;
printf ("%I64d, %I64d, %d\n", pp-p, *pp-a, **pp);
++*pp;
printf ("%I64d, %I64d, %d\n", pp-p, *pp-a, **pp);

pp=p;
**pp++;
printf ("%I64d, %I64d, %d\n", pp-p, *pp-a, **pp);
*++*pp;
printf ("%I64d, %I64d, %d\n", pp-p, *pp-a, **pp);
++**pp;
printf ("%I64d, %I64d, %d\n", pp-p, *pp-a, **pp);

int i;
for (i = 0; i<5; i++)
  printf ("tab[%d] = %d\n", i, a[i]);

/////////////////////
printf ("#############################\n")  ;
char *c[]={"ENTER", "NEW","POINT","FIRST"};
char **cp[]={c+3, c+2, c+1, c};
char ***cpp=cp;

   printf("%s\n", **++cpp);
   printf("%s\n", *--*++cpp+3);
   printf("%s\n", *cpp[-2]+3);
   printf("%s\n", cpp[-1][-1]+1);
}
