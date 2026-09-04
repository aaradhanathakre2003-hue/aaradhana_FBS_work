void arth();
void tri();
void greater();
void marks();
void discount();
void div();
void age();
void main()
{
	printf("Nested Loop examples\n\n");
	arth();
	printf("\n\n");
	tri();
	printf("\n\n");
	greater();
	printf("\n\n");
	marks();
	printf("\n\n");
	discount();
	printf("\n\n");
	div();
	printf("\n\n");
	age();
}
void arth()
{
	printf("Arithmatic Example\n");
	int no1,no2,op;
	printf("Enter no1 & no2 : ");
	scanf("%d%d",&no1,&no2);
	printf("Enter 1=add,2=sub,3=div,4=mul,5=mod: ");
	scanf("%d",&op);
	if(op==1)
	{
		int add= no1+no2;
		printf("Addition of %d & %d is %d",no1,no2,add);
	}
	else if(op==2)
	{
		int sub= no1-no2;
		printf("Substraction of %d & %d is %d",no1,no2,sub);
	}
	else if(op==3)
	{
		int div= no1/no2;
		printf("Division of %d & %d is %d",no1,no2,div);
	}
	else if(op==4)
	{
		int mul= no1*no2;
		printf("Multiplication of %d & %d is %d",no1,no2,mul);	
	}
	else if(op==5)
	{
		int mod=no1%no2;
		printf("Mod of %d & %d is %d",no1,no2,mod);
	}
	else
	{
		printf("Enter correct operator");
	}
}
void tri()
{
	printf("Triangle Example\n");
	int s1,s2,s3;
	printf("Enter Side1, Side2 & Side3 : ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==s2 && s1==s3 && s2==s3)
	{
		printf("Triangle is Equilateral");
	}
	else if(s1==s2 || s1==s3 || s2==s3)
	{
		printf("Triangle is Isosceles");
	}
	else
	{
		printf("Triangle is Scalene");
	}
}
void greater()
{
	printf("Greater number Example\n");
	int a,b,c;
	printf("Enter a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a=%d is greater",a);
		}
		else
		{
			printf("c=%d is greater",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("b=%d is greater",b);
		}
		else
		{
			printf("c=%d is greater",c);
		}
	}
}
void marks()
{
	printf("Marks Example\n");
	int marks;
	printf("Enter Marks : ");
	scanf("%d",&marks);
	if(marks>75)
	{
		printf("Distinction");
	}
	else if(marks<=75 && marks>65)
	{
		printf("First Class");
	}
	else if(marks<=65 && marks>55)
	{
		printf("Second Class");
	}
	else if(marks<=55 && marks>=40)
	{
		printf("Pass Class");
	}
	else
	{
		printf("Fail");
	}
}
void discount()
{
	printf("Discount Example\n");
	double price,discount,fp;
	char user;
	printf("Enter price :");
	scanf("%lf",&price);
	printf("Your are student or not (y/n):");
	scanf(" %c", &user);
	if(user=='y')
	{
		if(price>500)
		{
			discount=price*0.20;
			fp=price-discount;
			printf("You get discount of 20percent");
			printf("\nDiscount & Final Price is %lf & %lf",discount,fp);
		}
		else
		{
			discount=price*0.10;
			fp=price-discount;
			printf("You get discount of 10percent");
			printf("\nDiscount & Final Price is %lf & %lf",discount,fp);
		}
	}
	else
	{
		if(price>600)
		{
			discount=price*0.15;
			fp=price-discount;
			printf("You get discount of 15percent");
			printf("\nDiscount & Final Price is %lf & %lf",discount,fp);
		}
		else
		{
			printf("No discount");
			printf("\nFinal Price: %lf",price);
		}
	}
}
void div()
{
	printf("Divisible Example\n");
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	if(number%3==0 && number%5==0)
	{
		printf("Divisible by both");
	}
	else if(number%3!=0 && number%5==0)
	{
		printf("Divisible by 5 but not by 3");
	}
	else if(number%3==0 && number%5!=0)
	{
		printf("Divisible by 3 but not by 5");
	}
	else
	{
		printf("Divisible by None");
	}
}
void age()
{
	printf("Age Example\n");
	int age;
	printf("Enter age : ");
	scanf("%d",&age);
	if(age<12)
	{
	printf("Child person");
	}
	else if(age>=12 && age<=19)
	{
		printf("Teenager person");
	}
	else if(age>=20 && age<=59)
	{
		printf("Adult person");
	}
	else
	{
		printf("Senior person");
	}
}