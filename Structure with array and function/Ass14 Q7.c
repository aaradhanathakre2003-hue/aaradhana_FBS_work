typedef struct Time
{
    int hour;
    int min;
    int sec;
}Time;
void display(Time*,int);
void store(Time*,int);
void main()
{
	Time arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter Hour, Minute and Second for arr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("\n-----------------------Array 2-------------------------");
	printf("\nEnter Hour, Minute and Second for brr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("\n-----------------------Array 3-------------------------");
	printf("\nEnter Hour, Minute and Second for crr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
	
}
void display(Time* tarr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nTime %d: %d:%d:%d",i+1,tarr[i].hour,tarr[i].min,tarr[i].sec);
		printf("\n");
	}
}
void store(Time* tarr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d time: ",i+1);
		scanf("%d",&tarr[i].hour);
	    scanf("%d",&tarr[i].min);
	    scanf("%d",&tarr[i].sec);  
	}
}