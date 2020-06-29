#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[10];
	printf("Enter String 1 : ");
	gets(str1);
	printf("Enter String 2 : ");
	scanf("%s",str2);
	
	check(str1,str2);
}
int check(char *str1,char *str2)
{
	int count1=0,count2=0,increment=0,iterate,occurances=0;
	count1=strlen(str1);
	count2=strlen(str2);

	while(increment<count2)
	{
		for(iterate=0;iterate<count1;iterate++)
		{
			if(str2[increment]==str1[iterate])
			{
				occurances++;
			}
		}
		if(occurances!=0)
		{
			printf("Total count of %c is = %d\n",str2[increment],occurances);
		}
		occurances=0;
		increment++;
	}
}

