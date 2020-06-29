#include<stdio.h>
int main()
{
 int p,q,a,b,c,d,e,f,count=0;
 int mat1[10][10],mat2[10][10],mat3[10][10];
 printf("Enter 1st matrix row  and column");
 scanf("%d",&a);
 scanf("%d",&b);
 
printf("Enter the 1st matrix ");
 for(p=0;p<a;p++)
 {
  for(q=0;q<b;q++)
  {
   scanf("%d",&mat1[p][q]);  
  }
 }

 printf("Enter 2st matrix row  and column");
 scanf("%d",&c);
 scanf("%d",&d);

printf("Enter 2nd matrix");
 for(p=0;p<c;p++)
 {
  for(q=0;q<d;q++)
  {
   scanf("%d",&mat2[p][q]);
  }

 }

for(p=0;p<c;p++)
 {
  for(q=0;q<d;q++)
  {
   printf("%d",mat2[c][d]);
  }
	printf("\n");
 }


 for(p=0;p<a;p++)
 {
  for(q=0;q<d;q++)
  {
   for(e=0;e<c;e++)
   {
    count=count+mat1[p][e]*mat2[e][q];
    //printf("%d\n",count);
    //printf("%d\n",mat1[p][e]);
   }
     mat3[p][q]=count;
printf("%d\n",count);
    count=0;
 }
}
for(p=0;p<a;p++)
 {
  for(q=0;q<d;q++)
  {
    printf("%d\t",mat3[p][q]);
    
  }
	printf("\n");
}
return 0;
}


