#include<stdio.h>
void main()
{
 int val,rem;
 printf("Enter Decimal value");
 scanf("%d",&val);
 while(val!=0)
 {
   rem=val%16;
   val=val/16;
   
   if(rem==10)
    {
      printf("A");
    }
   else if(rem==11)
    {
     printf("B");
    }
   else if(rem==12)
    {
     printf("C");
    }
   else if(rem==13)
    {
     printf("D");
    }
   else if(rem==14)
    {
     printf("E");
    }
   else if(rem==15)
    {
     printf("F");
    }
   else
   {
     printf("%d",rem); 
   }
   

 }


}
