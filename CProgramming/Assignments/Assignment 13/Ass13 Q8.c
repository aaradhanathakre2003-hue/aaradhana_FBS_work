#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, *brr, *crr;
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    arr=(int*)malloc(n1*sizeof(int));
    brr=(int*)malloc(n2*sizeof(int));
    crr=(int*)malloc((n1+n2)*sizeof(int));
    
    printf("Enter first array: ");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter second array: ");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(int i=0;i<n1;i++)
    {
        crr[i] = arr[i];
    }
    for(int i=0;i<n1;i++)
    {
        crr[n1 + i] = brr[i];
    }
    
    printf("Merged array: ");
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",crr[i]);
    }
    free(arr);
    free(brr);
    free(crr);
}