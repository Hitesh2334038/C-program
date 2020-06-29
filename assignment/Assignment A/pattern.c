#include <stdio.h>

void main()
{

	int i;
	int red=4,j,k,row,col,space=10;
	//printf("enter the row");
	//scanf("%d",&row);
	//printf("enter the col");
	//scanf("%d",&col);
	for(i=0;i<6;i++)
	{
		for(k=red;k>=0;k--)
		{
			printf(" ");
		}
		for(j=i;j>=0;j--)
		{
			printf("%d",j);
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}

		red--;
		printf("\n");
	}
	red=1;
	for(i=4;i>=0;i--)
	{
		for(k=0;k<red;k++)
		{
			printf(" ");
		}
		for(j=i;j>=0;j--)
		{
			printf("%d",j);
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		

		red++;
		printf("\n");

		
	}
}




