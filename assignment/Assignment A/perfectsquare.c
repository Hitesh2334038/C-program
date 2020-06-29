#include<stdio.h>
void main()
{
  int i,num,sqr,sqr2;

  printf("Enter the number :");
  scanf("%d",&num );

  sqr2=num*num;

  for(i=0;i<num;i++)
  {
   sqr=i*i;

   if(sqr>sqr2)
   {
     break;
   }
  }
  printf("\n square: %d",sqr);
}
