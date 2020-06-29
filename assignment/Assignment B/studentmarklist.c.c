#include<stdio.h>
struct student
{
	int rollnum,mark1,mark2,mark3;
	char name[20];
};
struct student importinfo()
{
	struct student s;
	printf("enter the info");
	scanf("%d%s%d%d%d ",&s.rollnum,s.name,&s.mark1,&s.mark2,&s.mark3);
  return s;
}
void displayinfo(struct student s)
{
	printf(" here is the info : %d %s %d %d %d",s.id,s.name,s.mark1,s.mark2,s.mark3);
}
void main()
{
struct student s1,s2;
s1=importinfo();
s2=importinfo();

displayinfo(s1);
displayinfo(s2);


}
