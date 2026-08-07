void evenodd(int *);
void main()
{
	int no=8;
	evenodd(&no);	
}
void evenodd(int *no)
{
	if((*no)%2==0)
		printf("even");
	else
		printf("odd");
}