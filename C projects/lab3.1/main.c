#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pas;
    //int *b;
    int i,j,n;
    scanf("%d",&n);
    printf("\n");
      int b[1000];
      pas=(int*)malloc(sizeof (int));
    //b=(int*)malloc(2*sizeof(int));

    for(i=0;i<1000;i++)b[i]=1;
    pas[0]=1;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i+1;j++) printf(" ");
        for(j=0;j<=i-1;j++)printf("%d ",pas[j]);
        printf("\n");

    realloc(pas,(i+1)*sizeof (int));
    //realloc(b,(i+1+1)*sizeof(int));
    for(j=0;j<i+1;j++)pas[j]=b[j];
    b[0]=1;
    b[i+1]=1;
    for(j=1;j<i+1;j++) b[j]=pas[j-1]+pas[j];
    }
free(pas);
//free(b);


    return 0;
}
