typedef struct Time
{
    int hour;
    int min;
    int sec;
}Time;
void main()
{
    Time tarr[5];
    
    printf("Enter Hour, Minute and Second\n");
    for(int i=0;i<5;i++)
    {
	    scanf("%d",&tarr[i].hour);
	    scanf("%d",&tarr[i].min);
	    scanf("%d",&tarr[i].sec);   	
	}
	printf("\nDisplay data");
    for(int i=0;i<5;i++)
    {
    	printf("\nTime %d: %d:%d:%d",i+1,tarr[i].hour,tarr[i].min,tarr[i].sec);
	}
}
