void main()
{
	int no,r1,r2,temp,sum=0;
	printf("Enter no : ");
	scanf("%d",&no);
	temp=no;
	r1=no%10;
	while(no>=1)
	{
		r2=no%10;
		no=no/10;
	}
	sum=r1+r2;
	printf("Sum(%d) of 1st number(%d) and last number(%d) is %d",temp,r2,r1,sum);
}