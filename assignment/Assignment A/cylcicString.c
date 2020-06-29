#include <stdio.h>

void main()
{
  int i=0,j=0,k=0,count=0;
  char string[50];
  printf("Enter String:");
  scanf("%s",string);

 while(string[count]!='\0')
{
   count++;
}
while(j<count)
{
 for(i=j;i<count;i++)
  {
    printf("%c",string[i]);

  }
 for(i=0;i<j;i++)
  {
   printf("%c",string[i]);

  }
  printf("\n");
  j++;

}


}
