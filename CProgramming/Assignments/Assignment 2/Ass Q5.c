void main()
{
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