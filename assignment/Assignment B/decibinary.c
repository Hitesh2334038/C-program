#include<stdio.h>
void main()
{
 int i,val,rem[10],count=0;
 printf("Enter Decimal value");
 scanf("%d",&val);
 while(val!=0)
 {
   rem[count]=val%2;
   val=val/2;
      
   count++;
 
 }
 
 for(i=count-1;i>=0;i--)
  {
    printf("%d",rem[i]);
  }

 
 
}
