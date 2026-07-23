void main()
{
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