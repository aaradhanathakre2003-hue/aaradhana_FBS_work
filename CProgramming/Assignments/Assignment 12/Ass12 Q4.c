#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],temp;
	int i;
	printf("Enter String: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
	temp=str[0];
	str[0]=str[i-1];
	str[i-1]=temp;
	printf("New String :%s",str);
}