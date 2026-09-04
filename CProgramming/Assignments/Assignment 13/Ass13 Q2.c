#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,n,num,found=0;
    printf("Enter size: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter number to search: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("Number found at index %d",i);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Number not found");

    free(arr);
}