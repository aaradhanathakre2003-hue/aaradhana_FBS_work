#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,n,sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum = %d", sum);
    free(arr);
}