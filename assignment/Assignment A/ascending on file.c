#include <stdio.h>
struct things
{
	char itemcode[6];
	char itemname[20];
	int qty;
};
int main()
{
	int option,iterate;
	char find;
	char file[100];
	FILE *f,*f2;
	struct things things1;
	struct things things2;
	
	printf("do you want to add item or get item list?\npress number\n           1 = add\n          2 = list\n");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
	
		f=fopen("inorder.txt","a+");
	
		if(f==0)
		{
			printf("file error");
		}
		printf("item code : ");
		scanf("%s",things1.itemcode);
		printf("item name (first letter must be capital): ");
		scanf("%s",things1.itemname);
		printf("Qty : ");
		scanf("%d",&things1.qty);
		
		fwrite(&things1,sizeof(things1),1,f);
		
		if(fwrite!=0)
		{
			printf("Data stored");
		}
		else
		{
			printf("Error");
		}
		fclose(f);
		break;
	case 2:	   
		f=fopen("inorder.txt","r");
		
		if(f==0)
		{
			printf("File error");
		}
		for(iterate=65;iterate<=90;iterate++)
		{
			while(fread(&things1, sizeof(struct things), 1, f))
			{ 
   	      	    find=things1.itemname[0];
				
				if(find==iterate)
				{
					f2=fopen("ordered.c","a");
					fprintf(f2,"%s                %s                  %d\n",things1.itemcode,things1.itemname,things1.qty);
					printf("%s\n",things1.itemname);
					fclose(f2);
				}
			}
			rewind(f);
		}
		fclose(f);
		break;
	}
}

