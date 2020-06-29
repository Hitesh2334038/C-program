#include<stdio.h>
#include<math.h>
int binarytodecimal(int n);
int main()
{
   int n;
   printf("Enter Binary Number\n");
   scanf("%d\n",&n );
   int ans=binarytodecimal(n);
   printf("%d",ans);
   return 0;
}
   int binarytodecimal(int n)
   {
    int deci =0,rem,count=0;

    while(n!=0)
    {
      rem=n%10;
      n=n/10;

      deci=deci+rem*pow(2,count);

      count++;
    }
    return deci;
   }
