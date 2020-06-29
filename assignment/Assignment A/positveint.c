#include<stdio.h>

int main()

{

  int i,j,k,l;

   for (i=1;i<=100;i++)
    {
      for(j=1;j<=100;j++)
       {
         for(k=1;k<=100;k++)
          {
            for(l=1;l<=100;l++)
             {
               if(i+j+k==l)
                {
                  if(i<j&&j<k&&k<l)
                   {
                     printf("%d + %d + %d = %d\n",i,j,k,l);

		   }   

	        }

	     }
           }
         }
       }

}
