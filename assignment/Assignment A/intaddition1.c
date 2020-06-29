#include <stdio.h>
void main()
{
    int x[5];
    int i,sum=0;
    int *ptr;

    printf("Enter integer value\n" );
    for(i=0;i<5;i++)
    {
      scanf("%d",&x[i] );
    }

    ptr=x;

    for (i=0;i < 5;i++)
    {
      sum=sum+*ptr;
      ptr++;
    }

printf("\nsum is: %d",sum );

}
