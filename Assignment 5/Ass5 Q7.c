void main()
{
	int n,no=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=row;col++)
		{
			printf("%d ",no);
			no++;
		}
		printf("\n");
	}
}