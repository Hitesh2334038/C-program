#include<stdio.h>
#include<string.h>
#include<math.h>

void main()
{
char hexa[50]={0};
    int  deci=0,i;
    int  count=0;  
    int  dig,power;   
    printf("Enter Hexadecimal Number: ");
    scanf("%s",hexa);   
 for(i=(strlen(hexa)-1);i>=0;i--)
    {
     switch(hexa[i])
      {
        case 'A': dig=10;
                  break;
        case 'B': dig=11;
                  break;
        case 'C': dig=12;
                  break;
        case 'D': dig=13;
                  break;
        case 'E': dig=14;
                  break;
        case 'F': dig=15;
                  break;
                  
      }
   deci= deci+ (dig)*(pow(16,count));
//power=pow(16,count);
       count++;
    
   }
printf("\nHexadecimal to decimal: %d",deci);
}
