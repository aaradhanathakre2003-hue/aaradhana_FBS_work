#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i,count=0,flag=0;
	printf("Enter String: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
    {
		count++;
	}
    for(i=0;i<count/2;i++)
    {
        if(str[i]!=str[count-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is Not Palindrome");
    }
}