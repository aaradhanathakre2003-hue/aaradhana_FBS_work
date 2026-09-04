void armstrong();
void prime();
void perfect();
void strong();
void oper();
void main()
{
	printf("Range Examples\n\n");
	armstrong();
	prime();
	perfect();
	strong();
	oper();	
}
void armstrong()
{
	printf("Armstrong Example\n");
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
	printf("\n\n");
}
void prime()
{
	printf("Prime Example\n");
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		int status=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				status=1;
			}
		}
		if(status==0)
		{
			printf("%d ",i);
		}
	}
	printf("\n\n");
}
void perfect()
{
	printf("Perfect Example\n");
	int no,sum;
    printf("Enter number: ");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
    	sum=0;
    	for(int j=1;j<i;j++)
		{
		   if(i%j==0)
		      sum=sum+j;
		}
	    if(sum==i)
	    {
		    printf("%d ",i);
	    }
	}
	printf("\n\n");
}
void strong()
{
	printf("Strong Example\n");
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
	printf("\n\n");
}
void oper()
{
	printf("Operations Example\n");
	int no,choice;
	printf("Enter the number for operation : ");
	scanf("%d",&no);
	printf("\nSelect choice for operation\n 1.Even or Odd\n 2.Prime\n 3.Pallindrome\n 4.Positive,Negative or Zero\n 5.Reverse\n 6.Sum of Digits");
	printf("\n\nChoice : ");
	scanf("%d",&choice);
	if(choice==1)
	{
		if(no%2==0)
		{
			printf("\n%d :Even number",no);
		}
		else
		{
			printf("\n%d :Odd number",no);
		}
	}
	else if(choice==2)
	{
		int status=0;	
		for(int i=2;i<no-1;i++)
		{
			if(no%i==0)
			{
				status=1;
			}
		}
		if(status==0)
		{
			printf("\n%d :Prime number",no);
		}
		else
		{
			printf("\n%d :Not prime number",no);
		}
	}
	else if(choice==3)
	{
		int temp=no,rev=0,rem;
		for(int i=no;no>0;i++)
		{
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
		}
		if(rev==temp)
		{
			printf("\n%d :Pallindrome",temp);
		}
		else
		{
			printf("\n%d :Not Pallindrome",temp);
		}
	}
	else if(choice==4)
	{
		if(no>0)
		{
			printf("\n%d :Positive Number",no);
		}
		else if(no<0)
		{
			printf("\n%d :Negative Number",no);
		}
		else
		{
			printf("\n%d :Zero",no);
		}
	}
	else if(choice==5)
	{
		int rem,rev=0,temp=no;
		for(int i=no;no>0;i++)
		{
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
		}
		printf("\n%d is reverse of %d",rev,temp);
	}
	else if(choice==6)
	{
		int rem,sum=0,temp=no;
		for(int i=no;no>0;i++)
		{
			rem=no%10;
			sum=sum+rem;
			no=no/10;
		}
		printf("\n%d is sum of digit of %d",sum,temp);
	}
	else
	{
		printf("Enter correct choice");
	}
}