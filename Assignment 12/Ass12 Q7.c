#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i;
	printf("Enter String: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(i%2==0)
		{
			printf("%c",str[i]);
		}
	}
}