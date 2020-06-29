#include<stdio.h>
#include<string.h>
void main()
{
 char s1[100],s2[100];
 int i;
 printf( "Enter string: ");
 scanf("%s",s1);
 
 printf("\noringinal string: %s\n",s1);
 for(i=0;s1[i]!='\0';i++)
  {
    s2[i]=s1[i];

  }
   

 printf("copy string: %s\n",s2);



}
