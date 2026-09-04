#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i;
	printf("Enter String: ");
	fgets(str,50,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]='@';
		}
	}
	printf("%s",str);
}