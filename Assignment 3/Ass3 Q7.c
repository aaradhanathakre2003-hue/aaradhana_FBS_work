void main()
{
	int i=1,no,fact=1;
	printf("Enter no : ");
	scanf("%d",&no);
	while(i<=no)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d is %d ",no,fact);
}