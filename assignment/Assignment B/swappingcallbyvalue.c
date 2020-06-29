#include <stdio.h>
void swap(int a,int b);
void main()
{
  int x,y;
  printf("Enter value of x:");
  scanf("%d",&x);
  printf("\n Enter value og y:");
  scanf("%d",&y);
  
  swap(x,y);
}

void swap(int a,int b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;

printf("\n after swapping value of X: %d \n Y: %d",a,b);



}
