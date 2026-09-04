void reverse(int[],int);
void main()
{
    int arr[10], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
}
void reverse(int arr[], int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Reverse array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}