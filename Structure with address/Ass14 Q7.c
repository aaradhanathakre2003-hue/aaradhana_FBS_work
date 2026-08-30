typedef struct Time
{
	int hour;
    int min;
    int sec;
}Time;
void display(Time*);
void store(Time*);
void main()
{
	Time t1;
	printf("Enter hour, Minute and Second\n");
	store(&t1);
	
	printf("\nDisplaying the time: \n");
	display(&t1);
}
void display(Time* t)
{
	printf("Time: %d:%d:%d\n",t->hour,t->min,t->sec);
}
void store(Time* t)
{
	scanf("%d",&t->hour);
    scanf("%d",&t->min);
    scanf("%d",&t->sec);
}