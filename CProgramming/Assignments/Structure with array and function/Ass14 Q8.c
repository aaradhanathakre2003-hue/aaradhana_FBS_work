typedef struct Distance
{
    float feet;
    float inch;
}Distance;
void display(Distance*,int);
void store(Distance*,int);
void main()
{
	Distance arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter Feet and Inch for arr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("\n-----------------------Array 2-------------------------");
	printf("\nEnter Feet and Inch for brr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("\n-----------------------Array 3-------------------------");
	printf("\nEnter Feet and Inch for crr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
	
}
void display(Distance* darr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nDistance %d: %.2f feet %.2f inch",i+1,darr[i].feet,darr[i].inch);
		printf("\n");
	}
}
void store(Distance* darr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d distance: ",i+1);
		scanf("%f",&darr[i].feet);
    	scanf("%f",&darr[i].inch);  
	}
}