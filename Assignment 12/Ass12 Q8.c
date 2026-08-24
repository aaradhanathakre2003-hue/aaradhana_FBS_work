#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i,count=0;
	printf("Enter String: ");
	fgets(str,50,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("words is :%d",count+1);
}