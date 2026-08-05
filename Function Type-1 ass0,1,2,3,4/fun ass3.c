void number();
void table();
void sumfirst();
void prime();
void armstrong();
void perfect();
void fact();
void strong();
void palindrome();
void sum();
void main()
{
	printf("For loop examples\n\n");
	number();
	table();
	sumfirst();
	prime();
	armstrong();
	perfect();
	fact();
	strong();
	palindrome();
	sum();
}
void number()
{
	printf("Number Example\n");
	int no=1;
	while(no<=10)
	{
		printf("%d ",no);
		no++;
	}
	printf("\n\n");
}
void table()
{
	printf("Table Example\n");
	int i=1,no,table;
	printf("Enter no : ");
	scanf("%d",&no);
	while(i<=10)
	{
		table=no*i;
		printf("%d ",table);
		i++;
	}
	printf("\n\n");
}
void sumfirst()
{
	printf("Sum of start to end Example\n");
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
	printf("\n\n");
}
void prime() 
{
	printf("Prime Example\n");
    int n,i=2,status=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<n)
	{
        if(n%i==0)
        {
            status=1;
		}
        i++;
    }
    if(status==0)
    {
        printf("Prime");
        printf("%d",i);
    }
	else
	{
        printf("Not Prime");
	}
	printf("\n\n");
}
void armstrong() 
{
	printf("Armstrong Example\n");
    int no,temp,rem,sum=0;
    printf("Enter number: ");
    scanf("%d",&no);
    temp=no;
    while(no>0) 
	{
        rem=no%10;
        sum=sum+(rem*rem*rem);
        no=no/10;
    }
    if(sum==temp)
    {
        printf("Armstrong");
    }
	else
	{
        printf("Not Armstrong");
    }
    printf("\n\n");
}
void perfect() 
{
	printf("Perfect Example\n");
    int n,i=1,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<n) 
	{
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    if(sum==n)
    {
	    printf("Perfect");
    }
	else
    {
        printf("Not Perfect");
	}
	printf("\n\n");
}
void fact()
{
	printf("Factorial Example\n");
	int i=1,no,fact=1;
	printf("Enter no : ");
	scanf("%d",&no);
	while(i<=no)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d is %d ",no,fact);
	printf("\n\n");
}
void strong() 
{
	printf("Strong Example\n");
    int n,temp,rem,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0) 
	{
        rem=n%10;
        int fact=1,i=1;
        while(i<=rem) 
		{
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Strong");
    }
	else
    {
	    printf("Not Strong");
	}
	printf("\n\n");
}
void palindrome()
{
	printf("Palindrome Example\n");
    int n,temp,rem,rev= 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    printf("\n\n");
}
void sum()
{
	printf("Sum of 1st and last number Example\n");
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