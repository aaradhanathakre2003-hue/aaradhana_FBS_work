void sum();
void areacircle();
void temp();
void swap();
void avg();
void sq();
void hour();
void per();
void areatri();
void marks();
void main()
{
	printf("Arithmatic Examples\n");
	sum();
	areacircle();
	temp();
	swap();
	avg();
	sq();
	hour();
	per();
	areatri();
	marks();
}
void sum()
{
	printf("Sum of number Example\n");
	int a,b,sum;
	a=10;
	b=25;
	sum=a+b;
	printf("Sum of two integers %d & %d is %d",a,b,sum);
	printf("\n\n");
}
void areacircle()
{
	printf("Area of circle Example\n");
	float pi= 3.14, r=10, area;
	area=pi*r*r;
	printf("Area of circle is %f",area);
	printf("\n\n");
}
void temp()
{
	printf("Temperature Example\n");
	float C=10,F;
	F=(C*9/5)+32;
	printf("Converting temperature from %f Celsius to Fahrenheit is %f",C,F);
	printf("\n\n");
}
void swap()
{
	printf("Swap Example\n");
	int a=10,b=20;
	printf("Before swapping a & b is %d & %d \n",a,b);
	int temp=a;
	a=b;
	b=temp;
	printf("After swapping a & b is %d & %d",a,b);
	printf("\n\n");
}
void avg()
{
	printf("Average of numbers Example\n");
	int no1=10, no2=20, no3=30, no4=40, no5=50, sum;
	sum=no1+no2+no3+no4+no5;
	float avg=sum/5;
	printf("Average of 5 numbers(10,20,30,40,50) is %f",avg);
	printf("\n\n");
}
void sq()
{
	printf("Square & cube of number Example\n");
	int no=10,sq, cu;
	sq=no*no;
	cu=no*no*no;
	printf("Square & Cube of %d is %d and %d",no,sq,cu);
	printf("\n\n");
}
void hour()
{
	printf("Hour Example\n");
	int min=135, hour, rem_min;
	hour=min/60;
	rem_min=min%60;
	printf("%d min = %d hours and %d remaining minutes",min,hour,rem_min);
	printf("\n\n");
}
void per()
{
	printf("Perimeter of rectangle Example\n");
	int l=10,w=5, perimeter;
	perimeter=2*(l+w);
	printf("Perimeter of Rectangle is %d",perimeter);
	printf("\n\n");
}
void areatri()
{
	printf("Area of trinagle Example\n");
	int b=8 ,h=6 , area;
	area=(b*h)/2;
	printf("Area of Triangle is %d",area);
	printf("\n\n");
}
void marks()
{
	printf("Total & percentage Example\n");
	int s1=80 ,s2=75 ,s3=90 ,s4=85 ,s5=70 ,total;
	float percentage;
	total=s1+s2+s3+s4+s5;
	percentage=(total/500.0)*100;
	printf("Total marks is %d out of 500\n",total);
	printf("Percentage of 5 Subjects %f",percentage);
	printf("\n");
}