typedef struct Date
{
    int date;
    int month;
    int year;
}Date;
void main()
{
    Date darr[5];

    printf("Enter Date, Month and Year\n");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&darr[i].date);
	    scanf("%d",&darr[i].month);
	    scanf("%d",&darr[i].year);
	}
	printf("\nDisplay data");
    for(int i=0;i<5;i++)
    {
    	printf("\nDate %d: %d/%d/%d",i+1,darr[i].date,darr[i].month,darr[i].year);
	}
    
}