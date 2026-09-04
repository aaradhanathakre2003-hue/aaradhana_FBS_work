#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	int i,count1=0,count2=0;
	printf("Enter String1: ");
	scanf("%s",str1);
	printf("Enter String2: ");
	scanf("%s",str2);
	for(i=0; str1[i]!='\0'; i++)
    {
        count1++;
    }
    for(i=0; str2[i]!='\0'; i++)
    {
        count2++;
    }
    if(count1>count2)
    {
        printf("Larger String = %s", str1);
    }
    else if(count2>count1)
    {
        printf("Larger String = %s", str2);
    }
    else
    {
        printf("Both strings are equal in length");
    }
}