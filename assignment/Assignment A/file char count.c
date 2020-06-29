#include <stdio.h>
int main(int argc,char *argv[])
{
	FILE *f;
    char data[100],iteration;
    int count=1,characters=0,word=1,space=0,vowels=0;
	if(argc==1)
	{
		printf("No file name detected!.try again\n");
	}
	f=fopen(argv[1],"r");
    
    for(iteration=getc(f);iteration!=EOF;iteration=getc(f))
	{
		if(iteration=='\n')
		{
			count++;
		}
		if(iteration==' '||iteration=='\0')
		{
			word++;
		}
		
		if(iteration==' ')
		{
			space++;
		}
		if(iteration=='a'||iteration=='e'||iteration=='i'||iteration=='o'||iteration=='u'||iteration=='A'||iteration=='E'||iteration=='I'||iteration=='O'||iteration=='U')
		{
			vowels++;
		}
		characters++;
	}
	
	printf("Characters : %d\n",characters);
	printf("Lines : %d\n",count);
	printf("Words : %d\n",word);
	printf("Spaces : %d\n",space);
	printf("Vowels :%d\n",vowels);
    
}

