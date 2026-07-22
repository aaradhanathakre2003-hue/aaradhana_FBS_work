void main()
{
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