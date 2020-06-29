#include<stdio.h>
struct Emp
{
int arr[5];
char name[50];
int number;
int salary;
char desi[50];;

};

void main()
	
 {
struct Emp s[10];
int n;
printf("=============Enter Empoly Info============== \n");
printf("enter the number of Empoly want");
scanf("%d",&n);

int i,j;

for(i=0;i<n;i++)
{
	printf ("enter the name : \n") ;
        scanf("%s",s[i].name);
    printf("enter the number : \n") ;
        scanf("%d",&s[i].number);
printf("enter the salary : \n") ;
        scanf("%d",&s[i].salary);
printf("enter the mark2 : \n") ;
        scanf("%s",s[i].desi);

       
}
printf("============= Empoly Info==============");
for(i=0;i<n;i++)
{
printf ("\t name is : %s  \n",s[i].name) ;
printf("\t rollnum is: %d \n",s[i].number);
printf("\t mark1 is: %d \n",s[i].salary);
printf("\t mark2 is: %s \n",s[i].desi);

}


}
