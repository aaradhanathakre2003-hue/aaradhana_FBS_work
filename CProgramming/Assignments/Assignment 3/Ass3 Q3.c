void main()
{
	int start,end,sum=0;
	printf("Enter start & end:");
	scanf("%d%d",&start,&end);
	int x=start;
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("Sum of %d to %d is %d ",x,end,sum);
}