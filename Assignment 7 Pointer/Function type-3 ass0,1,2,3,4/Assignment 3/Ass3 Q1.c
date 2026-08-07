void number(int *);
void main()
{
	int no=1;
	number(&no);
}
void number(int *no)
{
	while((*no)<=10)
	{
		printf("%d ", *no);
		(*no)++;
	}
}