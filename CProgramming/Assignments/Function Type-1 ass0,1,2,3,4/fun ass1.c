void even();
void palidrome();
void leap();
void vowel();
void age();
void uppercase();
void salary();
void main()
{
	printf("If-else Example\n");
	even();
	palidrome();
	leap();
	vowel();
	age();
	uppercase();
	salary();
}
void even()
{
	printf("Even number Example\n");
	int no=20;
	if(no%2==0)
	{
		printf("%d is Even Number",no);
	}
	else 
	{
		printf("%d is Odd Number",no);
	}
	printf("\n\n");
}
void palidrome()
{
	printf("Palindrome number Example\n");
	int no=838;
	int x1,q1,x2,x3;
	x1=no%10;
	q1=no/10;
	x2=q1%10;
	x3=q1/10;
	if(x1==x3)
	{
		printf("%d is Palindrome Number",no);
	}
	else
	{
		printf("%d is not Palindrome Number",no);
	}
	printf("\n\n");
}
void leap()
{
	printf("Leap year Example\n");
	int year=2026;
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not leap year",year);
	}
	printf("\n\n");
}
void vowel()
{
	printf("Vowel Example\n");
	char character='i';
	if(character=='a'|| character=='e' || character=='i' || character=='o' || character=='u')
	{
		printf("%c is vowel",character);
	}
	else
	{
		printf("%c is Consonant",character);
	}
	printf("\n\n");
}
void age()
{
	printf("Age Example\n");
	int age=20;
	if(age>=18)
	{
		printf("%d age is eligible to vote",age);
	}
	else
	{
		printf("%d age is not eligible to vote",age);
	}
	printf("\n\n");
}
void uppercase()
{
	printf("Uppercase Example\n");
	char character='R';
	if(character>='A' && character<='Z')
	{
		printf("%c is Uppercase",character);
	}
	else
	{
		printf("%c is Lowercase",character);
	}
	printf("\n\n");
}
void salary()
{
	printf("Salary Example\n");
	int basic=6500;
	int da, ta, hra, salary;
	if(basic<=5000)
	{
		da=(10*basic)/100;
		ta=(20*basic)/100;
		hra=(25*basic)/100;
		salary=basic+da+ta+hra;
		printf("Basic=%d is less than 5000 so total Salary = %d",basic,salary);
	}
	else
	{
		da=(15*basic)/100;
		ta=(25*basic)/100;
		hra=(30*basic)/100;
		salary=basic+da+ta+hra;
		printf("Basic=%d is greater than 5000 so total Salary = %d",basic,salary);
	}
}