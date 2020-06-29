#include<stdio.h>
void main()
{ 
	int i;
	int j, temp;
	int arr[3];
	for(i=0;i<3;i++)
	{
	scanf("%d",&arr[i]);	
	}
	for(i=0;i<3-1;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(arr[i]<arr[j])
			{       temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;

			}

		}

        }
	for(i=0;i<3;i++)
	{
		printf("%d",arr[i]);
	}
}


