typedef struct HR
{
	int id;
	char name[50];
	double salary;
	double commission;
}HR;
void display(HR*);
void store(HR*);
void main()
{
	HR a1;
	printf("Enter ID, Name, Salary and Commission\n");
	store(&a1);
	
	printf("\nDisplaying the record: \n");
	display(&a1);
}
void display(HR* a)
{
	printf("ID: %d ",a->id);
	printf("\nName: %s ",a->name);
	printf("\nSalary: %lf ",a->salary);
	printf("\nCommission: %.2lf",a->commission);
}
void store(HR* a)
{
	scanf("%d",&a->id);
	scanf("%s",a->name);
	scanf("%lf",&a->salary);
	scanf("%lf",&a->commission);
}