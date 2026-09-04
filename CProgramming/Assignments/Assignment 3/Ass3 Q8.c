void main() 
{
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
}