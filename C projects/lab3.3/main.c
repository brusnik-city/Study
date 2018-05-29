#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10000
int main()
{
int a[N], i,z, j, pierw;
pierw=sqrt(N);
printf("podaj liczbe poni¿ej 10000");
scanf("%d",&z);
for(i=0;i<z;i++)
{
    a[i]=1;

}

for(i=2;i<=pierw;i++)
{

   if(a[i]!=0)
    {
        j=i+i;
        while(j<=N)
        {
            a[j]=0;
            j=j+i;
        }

    }
}
printf("1 ");
for(i=2;i<=z;i++)
    if (a[i]!=0)printf("%d ",i);
	return 0;
}
