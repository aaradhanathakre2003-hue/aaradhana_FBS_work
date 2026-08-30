typedef struct Student
{
	int rollno;
	char name[50];
	int marks;
}Student;
void display(Student*);
void store(Student*);
void main()
{
	Student s1;
	printf("\nEnter Students record: \n");
	store(&s1);
	
	printf("\nDisplaying the record: \n");
	display(&s1);
}
void display(Student* s)
{
	printf("Roll No: %d ",s->rollno);
	printf("\nName: %s ",s->name);
	printf("\nMarks: %d ",s->marks);
}
void store(Student* s)
{
	scanf("%d",&s->rollno);
	scanf("%s",s->name);
	scanf("%d",&s->marks);
}