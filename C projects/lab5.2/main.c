#include <stdio.h>
#include <stdlib.h>


void mn_tab (int n,int m, int l, int A[][n], int B[][m], int C[][m]);

int main()
{
	int t_A [2][3] = {1,2,3,4,5,6};
int t_B [3][4] = {1,1,1,1,1,1,1,1,1,1,1,1};
int t_C[2][4]={{0}};

mn_tab(3,4,2,t_A,t_B,t_C);
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%d ",t_C[i][j]);
	}
	printf("\n");
}

	return 0;
}

void mn_tab (int n,int m, int l, int A[][n], int B[][m], int C[][m])
{
	int i,j,k;
	for(i=0;i<l;++i)

		for(j=0;j<m;++j)

			for(k=0;k<n;++k)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}



}
