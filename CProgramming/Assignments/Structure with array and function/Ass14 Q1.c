typedef struct Student
{
	int rollno;
	char name[50];
	int marks;
}Student;
void display(Student*,int);
void store(Student*,int);
void main()
{
	Student arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter Students record of Sarr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("\n-----------------------Array 2-------------------------");
	printf("\nEnter Students record of Sbrr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("\n-----------------------Array 3-------------------------");
	printf("\nEnter Students record of Scrr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
	
}
void display(Student* sarr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Roll No: %d ",sarr[i].rollno);
		printf("Name: %s ",sarr[i].name);
		printf("Marks: %d ",sarr[i].marks);
		printf("\n");
	}
}
void store(Student* sarr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d student record: ",i+1);
		scanf("%d",&sarr[i].rollno);
		scanf("%s",sarr[i].name);
		scanf("%d",&sarr[i].marks);
	}
}