typedef struct Complex
{
	int real;
    int imaginary;
}Complex;
void display(Complex*);
void store(Complex*);
void main()
{
	Complex c1;
	printf("Enter Real and Imaginary Number\n");
	store(&c1);
	
	printf("\nDisplaying the complex: \n");
	display(&c1);
}
void display(Complex* c)
{
	printf("Complex Number: %d + %di\n",c->real,c->imaginary);
}
void store(Complex* c)
{
	scanf("%d",&c->real);
    scanf("%d",&c->imaginary);
}