void main() 
{
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
    }
	else
	{
        printf("Not Prime");
	}
}
