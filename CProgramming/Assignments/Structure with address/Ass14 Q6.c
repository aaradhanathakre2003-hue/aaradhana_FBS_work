typedef struct Date
{
	int date;
    int month;
    int year;
}Date;
void display(Date*);
void store(Date*);
void main()
{
	Date d1;
	printf("Enter Date, Month and Year\n");
	store(&d1);
	
	printf("\nDisplaying the date: \n");
	display(&d1);
}
void display(Date* d)
{
	printf("Date: %d/%d/%d\n",d->date,d->month,d->year);
}
void store(Date* d)
{
	scanf("%d",&d->date);
    scanf("%d",&d->month);
    scanf("%d",&d->year);
}