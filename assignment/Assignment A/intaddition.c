#include <stdio.h>
int sum(int *num,a)
{ 
int add;
 for(i=0;i<n;i++)
{
  add=add+num[i];
}
 return add;
}
void main()
{ 
int i,n;
int arr[];
printf("enter n");
scanf("%d",&n);
  
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int total=sum(&arr,n);

printf("%d",total);
}
