//Armstrong
void main()
{
	int no,sum,temp,rem;
	printf("Enter number:");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}