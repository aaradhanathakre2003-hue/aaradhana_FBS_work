typedef struct Date
{
    int date;
    int month;
    int year;
}Date;
void display(Date*,int);
void store(Date*,int);
void main()
{
	Date arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter Date, Month and Year of arr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("\n-----------------------Array 2-------------------------");
	printf("\nEnter Date, Month and Year of brr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("\n-----------------------Array 3-------------------------");
	printf("\nEnter Date, Month and Year of crr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
	
}
void display(Date* darr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nDate %d: %d/%d/%d",i+1,darr[i].date,darr[i].month,darr[i].year);
		printf("\n");
	}
}
void store(Date* darr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d date: ",i+1);
		scanf("%d",&darr[i].date);
	    scanf("%d",&darr[i].month);
	    scanf("%d",&darr[i].year);
	}
}