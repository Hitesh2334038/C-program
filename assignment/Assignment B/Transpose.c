#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	int i,j;
	int mat1[5][5],mat2[5][5];
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	for(i=0;i<=5;i++)
		{
			for(j=0;j<=5;j++)
			{
				printf("%d",mat1[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<=5;i++)
		{
			for(j=0;j<=5;j++)
			{
				mat2[j][i]=mat1[i][j];
			}
		}
	for(i=0;i<=5;i++)
		{
			for(j=0;j<=5;j++)
			{
				printf("%d",mat2[i][j]);
			}
			printf("\n");
		}

}
