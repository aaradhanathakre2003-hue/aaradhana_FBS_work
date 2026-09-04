typedef struct Admin
{
	int id;
	char name[50];
	double salary;
	double allowance;
}Admin;
void display(Admin*);
void store(Admin*);
void main()
{
	Admin a1;
	printf("Enter ID, Name, Salary and Allowance\n");
	store(&a1);
	
	printf("\nDisplaying the record: \n");
	display(&a1);
}
void display(Admin* a)
{
	printf("ID: %d ",a->id);
	printf("\nName: %s ",a->name);
	printf("\Salary: %lf ",a->salary);
	printf("Allowance: %.2lf",a->allowance);
}
void store(Admin* a)
{
	scanf("%d",&a->id);
	scanf("%s",a->name);
	scanf("%lf",&a->salary);
	scanf("%lf",&a->allowance);
}