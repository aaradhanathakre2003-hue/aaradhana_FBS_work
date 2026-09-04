typedef struct Employee
{
	int id;
	char name[50];
	double salary;
}Employee;
void main()
{
	Employee earr[5];
	
	printf("Enter ID, Name and Salary\n");
	for(int i=0;i<5;i++)
    {
	    scanf("%d",&earr[i].id);
		scanf("%s",earr[i].name);
		scanf("%lf",&earr[i].salary);
	}
	
	for(int i=0;i<5;i++)
    {
    	printf("\n%d. ID:%d, Name:%s, Salary:%.2lf \n",i+1,earr[i].id,earr[i].name,earr[i].salary);
	}
	
}