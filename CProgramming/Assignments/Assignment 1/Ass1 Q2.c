void main()
{
	int no=838;
	int x1,q1,x2,x3;
	x1=no%10;
	q1=no/10;
	x2=q1%10;
	x3=q1/10;
	if(x1==x3)
	{
		printf("%d is Palindrome Number",no);
	}
	else
	{
		printf("%d is not Palindrome Number",no);
	}
}