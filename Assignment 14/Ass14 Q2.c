#include<string.h>
struct Employee
{
	int id;
	char name[50];
	double salary;
};
void main()
{
	struct Employee e1,e2;
	e1.id=102;
	strcpy(e1.name,"radha");
	e1.salary=75000;
	printf("ID:%d, Name:%s, Salary:%.2lf \n",e1.id,e1.name,e1.salary);
	
	printf("\nEnter ID, Name and Salary\n");
	scanf("%d",&e2.id);
	scanf("%s",e2.name);
	scanf("%lf",&e2.salary);
	printf("ID:%d, Name:%s, Salary:%.2lf \n",e2.id,e2.name,e2.salary);
}