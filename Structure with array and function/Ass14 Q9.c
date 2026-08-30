typedef struct Complex
{
    int real;
    int imaginary;
}Complex;
void display(Complex*,int);
void store(Complex*,int);
void main()
{
	Complex arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter Real and Imaginary Number for arr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("\n-----------------------Array 2-------------------------");
	printf("\nEnter Real and Imaginary Number for brr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("\n-----------------------Array 3-------------------------");
	printf("\nEnter Real and Imaginary Number for crr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
	
}
void display(Complex* carr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nComplex Number %d: %d + %di",i+1,carr[i].real, carr[i].imaginary);	
		printf("\n");
	}
}
void store(Complex* carr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d Complex number: ",i+1);
		scanf("%d",&carr[i].real);
	    scanf("%d",&carr[i].imaginary); 
	}
}