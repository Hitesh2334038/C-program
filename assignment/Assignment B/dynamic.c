//sum of n integer
#include<stdio.h>

void main()
{
int i,count,*arr,sum=0;
printf("Enter total num added");
scanf("%d",&count);

arr=(int*)malloc(count*sizeof(int));

for(int i=0;i<count;i++)
{
scanf("%d",arr[i]);
sum=sum+arr[i];
}
printf("total sum: %d",sum);
free(arr);
}