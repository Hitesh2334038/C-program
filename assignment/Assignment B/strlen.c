#include <stdio.h>
#include <string.h>
void main()
{
int c=0;
char s[10];
scanf("%s",s);
int  i=0;
while(s[i] != '\0')
{
c=c+1;
i++;
}

printf("%d",c);
}
