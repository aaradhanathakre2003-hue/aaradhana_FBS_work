typedef struct SalesManager
{
    int id;
    char name[50];
    double salary;
    double incentive;
    double target;
}SalesManager;
void main()
{
    struct SalesManager sarr[5];
    
    printf("\nEnter ID, Name, Salary, Incentive and Target\n");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&sarr[i].id);
	    scanf("%s",sarr[i].name);
	    scanf("%lf",&sarr[i].salary);
	    scanf("%lf",&sarr[i].incentive);
	    scanf("%lf",&sarr[i].target);
	}
    
    printf("\nDisplay data");
    for(int i=0;i<5;i++)
    {
    	printf("\n%d. ID:%d, Name:%s, Salary:%.2lf, Incentive:%.2lf, Target:%.2lf",i+1,sarr[i].id,sarr[i].name,sarr[i].salary,sarr[i].incentive,sarr[i].target);	
	}
    
}