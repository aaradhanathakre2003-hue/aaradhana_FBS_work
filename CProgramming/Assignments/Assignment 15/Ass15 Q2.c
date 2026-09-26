typedef struct Time
{
	int hrs;
	int min;
	int sec; 
}Time;
int main()
{
    Time t;
    int total;

    printf("Enter hours: ");
    scanf("%d",&t.hrs);
    printf("Enter minutes: ");
    scanf("%d",&t.min);
    printf("Enter seconds: ");
    scanf("%d",&t.sec);
    t.min=t.min+t.sec/60;
    t.sec=t.sec%60;
    t.hrs=t.hrs+t.min/60;
    t.min=t.min%60;
    printf("\nTime = %02d:%02d:%02d\n",t.hrs,t.min,t.sec);

    printf("\nEnter total seconds: ");
    scanf("%d",&total);
    t.hrs=total/3600;
    total=total%3600;
    t.min=total/60;
    t.sec=total%60;
    printf("Converted Time = %02d:%02d:%02d\n",t.hrs,t.min,t.sec);
}