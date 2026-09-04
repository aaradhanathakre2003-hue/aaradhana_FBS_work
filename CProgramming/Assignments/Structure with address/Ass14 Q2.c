typedef struct Employee
{
	int id;
	char name[50];
	double salary;
}Employee;
void display(Employee*);
void store(Employee*);
void main()
{
	Employee e1;
	printf("\nEnter Employee record: \n");
	store(&e1);
	
	printf("\nDisplaying the record: \n");
	display(&e1);
}
void display(Employee* e)
{
	printf("ID: %d ",e->id);
	printf("\nName: %s ",e->name);
	printf("\Salary: %lf ",e->salary);
}
void store(Employee* e)
{
	scanf("%d",&e->id);
	scanf("%s",e->name);
	scanf("%lf",&e->salary);
}