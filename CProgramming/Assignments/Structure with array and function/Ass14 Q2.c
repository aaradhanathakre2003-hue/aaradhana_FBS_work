typedef struct Employee
{
	int id;
	char name[50];
	double salary;
}Employee;
void display(Employee*,int);
void store(Employee*,int);
void main()
{
	Employee arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter ID, Name and Salary of arr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("\n-----------------------Array 2-------------------------");
	printf("\nEnter ID, Name and Salary of brr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("\n-----------------------Array 3-------------------------");
	printf("\nEnter ID, Name and Salary of crr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
	
}
void display(Employee* earr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\n%d. ID:%d, Name:%s, Salary:%.2lf \n",i+1,earr[i].id,earr[i].name,earr[i].salary);
		printf("\n");
	}
}
void store(Employee* earr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d record: ",i+1);
		scanf("%d",&earr[i].id);
		scanf("%s",earr[i].name);
		scanf("%lf",&earr[i].salary);
	}
}