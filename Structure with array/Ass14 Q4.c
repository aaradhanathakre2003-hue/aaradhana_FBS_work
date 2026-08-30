typedef struct HR
{
    int id;
    char name[50];
    double salary;
    double commission;
}HR;
void main()
{
    HR harr[5];
     
    printf("Enter ID, Name, Salary and Commission\n");
    for(int i=0;i<5;i++)
    {
	    scanf("%d",&harr[i].id);
	    scanf("%s",harr[i].name);
	    scanf("%lf",&harr[i].salary);
	    scanf("%lf",&harr[i].commission);
	}
    printf("\nDisplay data");
    for(int i=0;i<5;i++)
    {
    	printf("\n%d. ID:%d, Name:%s, Salary:%.2lf, Commission:%.2lf",i+1,harr[i].id, harr[i].name, harr[i].salary, harr[i].commission);	
	}
    
}