typedef struct Admin
{
    int id;
    char name[50];
    double salary;
    double allowance;
}Admin;
void main()
{
    Admin aarr[5];
    
    printf("Enter ID, Name, Salary and Allowance\n");
    for(int i=0;i<5;i++)
    {
	    scanf("%d",&aarr[i].id);
	    scanf("%s",aarr[i].name);
	    scanf("%lf",&aarr[i].salary);
	    scanf("%lf",&aarr[i].allowance);    	
	}

    printf("\nDisplay data");
    for(int i=0;i<5;i++)
    {
    	printf("\n%d. ID:%d, Name:%s, Salary:%.2lf, Allowance:%.2lf",i+1,aarr[i].id, aarr[i].name, aarr[i].salary, aarr[i].allowance);	
	}
}