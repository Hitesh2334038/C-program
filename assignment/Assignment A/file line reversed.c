#include <stdio.h>

struct copy
{
	char cpy[100];
};

int main()
{
	FILE *f,*f2;
	struct copy copy[10];
	int count=1,temp=1,k=0,i=0,j=0;
	char file[30],data;
	printf("Enter file name : ");
	scanf("%s",file);
	
	f=fopen(file,"r");
	f2=fopen("reversed.c","w");
	
	for (data = getc(f); data != EOF; data = getc(f))
	{
		if(data=='\n')
		{
			i++;
			j=0;
		}
		copy[i].cpy[j]=data;
		j++;
	}
	fclose(f);  
	for(j=i;j>=0;j--)
	{
		while(copy[j].cpy[k]!='\0')
		{
			fprintf(f2,"%c",copy[j].cpy[k]);
			k++;	
		}
		k=0;
		
	}
}

