#include <stdio.h>
#include <string.h>
void main()
{
int c=0;
char s[10];
char rev[10];
scanf("%s",s);
int  i=0;
int j=0;
while(s[i] != '\0')
{
c=c+1;
i++;
}

for(i=c-1;i>=0;i--)
{
rev[i]=s[j];
j++;
}
rev[i]='\0';
printf("%s",rev);
}


