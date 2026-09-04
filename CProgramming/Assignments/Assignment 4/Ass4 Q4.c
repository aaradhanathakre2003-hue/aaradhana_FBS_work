//Strong
void main()
{
	int no,temp,sum,digit,fact;
	printf("Enter number:");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			digit=temp%10;
			fact=1;
			for(int j=1;j<=digit;j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}