#include <stdio.h>
#include <string.h>
int main()
{
	int count=0,i,word=1,space=0,vowels=0;
	char string[100];
	 
	
	printf("Enter Sentence : ");
	gets(string);
	
	count=strlen(string);
	
	
	printf("Total Character(s)   : %d\n",count);
	
	for(i=0;i<count;i++)
	{
		if(string[i]==' '||string[i]=='\0')
		{
			word++;
		}
		
		if(string[i]==' ')
		{
			space++;
		}
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
		{
			vowels++;
		}
	}
	printf("Total word(s)        : %d\n",word);
	printf("Total white space(s) : %d\n",space);
	printf("Total vowel(s)       : %d\n",vowels);
}

