#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i,no;
	printf("Enter String: ");
	scanf("%s",str);
	fflush(stdin);
	printf("Enter number: ");
	scanf("%d",&no);
	for(i=no;str[i]!='\0';i++)
	{
		str[i]=str[i+1];
	}
	printf("After Removing index :%s",str);
}