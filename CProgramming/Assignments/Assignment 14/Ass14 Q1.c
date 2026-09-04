#include<string.h>
struct Student
{
	int roll;
	char name[50];
	int	marks;
};
void main()
{
	struct Student s1,s2;
	s1.roll=101;
	strcpy(s1.name,"radha");
	s1.marks=75;
	printf("Roll No:%d, Name:%s, Marks:%d \n",s1.roll,s1.name,s1.marks);
	
	printf("\nEnter Roll no, Name and Marks\n");
	scanf("%d",&s2.roll);
	scanf("%s",s2.name);
	scanf("%d",&s2.marks);
	printf("\nRoll No:%d, Name:%s, Marks:%d ",s2.roll,s2.name,s2.marks);
}