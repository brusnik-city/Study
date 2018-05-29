#include <stdio.h>
#include <stdlib.h>

void f1(int a[][4], int x);


int ** mn_tab_1 (int n, int m, int l, int A[][n], int B[][m]);

int main()
{
	int t_A [2][3] = {1,2,3,4,5,6};
int t_B [3][4] = {1,1,1,1,1,1,1,1,1,1,1,1};
int (*C)[4];
C=mn_tab_1(3,4,2,t_A,t_B);
f1(C,2);


    return 0;
}

int ** mn_tab_1 (int n, int m, int l, int A[][n], int B[][m])
{
    int i,j,k;
     int (*C)[m];
     C=(int**)calloc(l*m,sizeof(int *));

    for(i=0;i<l;++i)
    {
		for(j=0;j<m;++j)
        {
			for(k=0;k<n;++k)
			{
				C[i][j]+=A[i][k]*B[k][j];

			}

        }

    }
    return C;

}

void f1(int a[][4], int x)
{
	int i,j;
	printf("\n");

	for(i=0;i<x;i++)
	{
		for(j=0;j<4;j++){
			printf("%d\t",a[i][j]);
	}
	printf("\n");
	}

}
