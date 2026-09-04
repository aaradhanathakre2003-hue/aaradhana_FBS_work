void main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=n;col++)
		{
			if(row==1||col==n||row==n||col==1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}