void main()
{
	int arr[5],search,i,status=0;
	printf("Enter 5 number: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array = ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter number to search :");
	scanf("%d",&search);
	for(i=0;i<5;i++)
	{
		if(arr[i]==search)
	    {
	        printf("Number Found at position %d",i);
	        status = 1;
	        break;
	    }
    }
    if(status==0)
    {
        printf("Number Not Found");
    }
}