#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr,n,temp;
    printf("Enter size: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    
    printf("Reverse array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    free(arr);
}