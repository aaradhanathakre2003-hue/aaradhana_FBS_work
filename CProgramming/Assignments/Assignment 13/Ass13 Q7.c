#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,*brr,*crr,n;
    printf("Enter size: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    brr=(int*)malloc(n*sizeof(int));
    crr=(int*)malloc(n*sizeof(int));

    printf("Enter first array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter second array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
	    crr[i]=arr[i]+brr[i];
    }
    
    printf("Third array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",crr[i]);
    }
    free(arr);
    free(brr);
    free(crr);
}