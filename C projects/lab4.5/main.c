#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int **array_1,**array_2,*array_4;
    //===========================================
    array_1=(int**)malloc(6*sizeof(int *));
    for(i=0;i<6;i++)array_1[i]=(int *)calloc(7,sizeof(array_1));
    for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)printf("%d  ",array_1[i][j] );
        printf("\n");
    }
    for(i=0;i<6;i++)
	{
		free(array_1[i]);
	}
	free(array_1);
    printf("\n\n");
    //===========================================
     array_2=(int**)malloc(4*sizeof(int *));
    for(i=0;i<4;i++)array_2[i]=(int *)calloc(6,sizeof(array_1));
    for(i=0;i<4;i++)
    {
        for(j=0;j<6;j++)printf("%d  ",array_2[i][j] );
        printf(" || ");
    }
    for(i=0;i<4;i++)
	{
		free(array_2[i]);
	}

    printf("\n\n");
    //============================================
    int (*array_3)[7];
    array_3=(int**)calloc(6,sizeof(array_3[7]));
   // for(i=0;i<6;i++)array_3[i]=(int *)calloc(7,sizeof(array_3));
 array_3[2][5]=10;
     for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)printf("%d  ",array_3[i][j] );
        printf("\n");
    }

for(i=0;i<6;i++)
	{
	    free(array_3[i]);
	}
    printf("\n\n");
    //============================================

 array_4=(int *)calloc(7*6,sizeof(array_4));
 for(i=0;i<6*7;i++)printf("%d  ",array_4[i]);

	    free(array_4);
    printf("\n\n");

    return 0;
}
