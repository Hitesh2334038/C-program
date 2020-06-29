#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char* argv[]) 
{ 
    char str1[30],cpy[30],find;
    int count=0,increment=0,i,intchar;
    printf("Delete '%c' character from following line : ",argv[1]);
    fgets(str1,100,stdin);
    
    count=strlen(str1);
    
    for(i=0;i<count;i++)
    {
        if(argv[1][0]!=str1[i])
        {
            cpy[increment]=str1[i];
            increment++;
        }
    }
    printf("%s",cpy);
} 

