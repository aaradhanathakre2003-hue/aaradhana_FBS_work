#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],ch;
	int i,fact=0;
	printf("Enter String: ");
	scanf("%s",str);
	fflush(stdin);
	printf("Enter character: ");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			printf("\nCharacter %c found at %d position.",ch,i);
			fact=1;
		}
	}
	if(fact==0)
	{
		printf("Character %c not found",ch);
	}
}