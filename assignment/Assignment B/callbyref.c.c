#include<stdio.h>
int arms(int *);
void main()
{
int num;
printf("Enter num:");
scanf("%d",&num);
int ans=arms(num);
printf(" num is: %d",ans);
if(ans==num)
{
	printf ("this is a armstrong num");
}
else
{
	printf("is not a armstrong num");
}
}
int arms(int *a)
{        int rem;
	int result=0;
	while(*a!=0)
	{
          rem=*a%10;
	  result=result+*a**a**a;
	  *a=*a/10;
	}
	return result;
	
}
