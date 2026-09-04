typedef struct SalesManager
{
	int id;
	char name[50];
	double salary;
	double incentive;
    double target;
}SalesManager;
void display(SalesManager*);
void store(SalesManager*);
void main()
{
	SalesManager s1;
	printf("Enter ID, Name, Salary, Incentive and Target\n");
	store(&s1);
	
	printf("\nDisplaying the record: \n");
	display(&s1);
}
void display(SalesManager* s)
{
	printf("ID: %d ",s->id);
	printf("\nName: %s ",s->name);
	printf("\nSalary: %lf ",s->salary);
	printf("\nIncentive: %.2lf",s->incentive);
	printf("\nTarget: %.2lf",s->target);
}
void store(SalesManager* s)
{
	scanf("%d",&s->id);
    scanf("%s",s->name);
    scanf("%lf",&s->salary);
    scanf("%lf",&s->incentive);
    scanf("%lf",&s->target);
}