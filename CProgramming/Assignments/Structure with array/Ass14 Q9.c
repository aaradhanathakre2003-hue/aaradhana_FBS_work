typedef struct Complex
{
    int real;
    int imaginary;
}Complex;
void main()
{
    Complex carr[5];

    printf("Enter Real and Imaginary Number\n");
    for(int i=0;i<5;i++)
    {
	    scanf("%d",&carr[i].real);
	    scanf("%d",&carr[i].imaginary);
	}
	printf("\nDisplay data");
	for(int i=0;i<5;i++)
	{
		printf("\nComplex Number %d: %d + %di",i+1,carr[i].real, carr[i].imaginary);	
	}
    
}