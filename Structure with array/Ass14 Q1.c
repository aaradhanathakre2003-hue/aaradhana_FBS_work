typedef struct Student
{
	int roll;
	char name[50];
	int	marks;
}Student;
void main()
{
	Student sarr[5];
	
	printf("Enter Roll no, Name and Marks\n");
	for(int i=0;i<5;i++)
    {
		scanf("%d",&sarr[i].roll);
		scanf("%s",sarr[i].name);
		scanf("%d",&sarr[i].marks);    	
	}
	
	printf("\nDisplay data");
	for(int i=0;i<5;i++)
    {
    	printf("\n%d. Roll No:%d, Name:%s, Marks:%d ",i+1,sarr[i].roll,sarr[i].name,sarr[i].marks);
	}
	
}