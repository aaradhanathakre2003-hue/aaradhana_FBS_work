void vote(int *);
void main()
{
	int age=2;
	vote(&age);	
}
void vote(int *age)
{
	if((*age)>=18)
		printf("eligible to vote");
	else
		printf("not eligible to vote");
}