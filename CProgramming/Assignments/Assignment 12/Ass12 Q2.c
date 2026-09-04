#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],ch;
	int i;
	printf("Enter String: ");
	scanf("%s",str);
	fflush(stdin);
	printf("Enter character: ");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			str[i]='$';
		}
	}
	printf("%s",str);
}