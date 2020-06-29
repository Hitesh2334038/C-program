#include<stdio.h>
void main()
{
int i,j,k,sumr=0,sumc=0 , mat[2][2] ,value1=0,value2=0 ,sumr1=0,count=0;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&mat[i][j]);
	}
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d",mat[i][j]);
	}
printf("\n");
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	    sumr=sumr+mat[i][j];
	}
	if(value1==0&&value2==0)
	{
	value1=sumr;
	value2=sumr;
	}
	value1=sumr;
	sumr=0;
	if(value2==value1)
	{ count++;
	//printf("this is a matrix square\n");
	}	
}
printf("---------");
printf("sumr :%d\n",sumr);

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	    sumr=sumr+mat[j][i];
	}
	value1=sumr;
	sumr=0;
}
printf("sumr :%d",sumr);
if(sumr==sumr)
{count++;
//printf("this is a magic matrix");
}
else
{
printf("this not is a magic matrix");
}
       
   for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
              if(i==j)
                 {
                   sumr=sumr+mat[i][j];
          		}
		}if(sumr==value2)
	{ count++;
	}	
	}sumr=0;
 for(i=1;i>=0;i--)
	{
		for(j=0;j<2;j++)
		{	

           if(i+j==2-1)
              {
                    sumr=sumr+mat[i][j];
              }
	if(sumr==value2)
	{ count++;
	}
          }
	}
printf("---------");
printf("sumr :%d\n",sumr);
printf("sumr :%d\n",sumr);
if(value1==0&&value2==0)
	{
	value1=sumr;
	value2=sumr;
	}
	
	if(value1==value2)
	{count++;

	printf("this is a matrix square\n");
	}	
printf("%d",count);



}
