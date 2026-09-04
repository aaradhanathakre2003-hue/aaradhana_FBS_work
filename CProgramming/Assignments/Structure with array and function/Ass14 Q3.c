typedef struct Admin
{
	int id;
	char name[50];
	double salary;
	double allowance;
}Admin;
void display(Admin*,int);
void store(Admin*,int);
void main()
{
	Admin arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter ID, Name ,Salary and Allowance of arr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("-----------------------Array 2-------------------------");
	printf("\nEnter ID, Name, Salary and Allowance of brr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("-----------------------Array 3-------------------------");
	printf("\nEnter ID, Name, Salary and Allowance of crr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
}
void display(Admin* aarr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\n%d. ID:%d, Name:%s, Salary:%.2lf, Allowance:%.2lf",i+1,aarr[i].id, aarr[i].name, aarr[i].salary, aarr[i].allowance);	
		printf("\n");
	}
}
void store(Admin* aarr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d record: ",i+1);
		scanf("%d",&aarr[i].id);
		scanf("%s",aarr[i].name);
		scanf("%lf",&aarr[i].salary);
		scanf("%lf",&aarr[i].allowance);
	}
}