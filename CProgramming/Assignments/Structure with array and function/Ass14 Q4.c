typedef struct HR
{
	int id;
	char name[50];
	double salary;
	double commission;
}HR;
void display(HR*,int);
void store(HR*,int);
void main()
{
	HR arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter ID, Name ,Salary and Commission of arr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("-----------------------Array 2-------------------------");
	printf("\nEnter ID, Name, Salary and Commission of brr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("-----------------------Array 3-------------------------");
	printf("\nEnter ID, Name, Salary and Commission of crr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
}
void display(HR* aarr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\n%d. ID:%d, Name:%s, Salary:%.2lf, Commission:%.2lf",i+1,aarr[i].id, aarr[i].name, aarr[i].salary, aarr[i].commission);	
		printf("\n");
	}
}
void store(HR* aarr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d record: ",i+1);
		scanf("%d",&aarr[i].id);
		scanf("%s",aarr[i].name);
		scanf("%lf",&aarr[i].salary);
		scanf("%lf",&aarr[i].commission);
	}
}