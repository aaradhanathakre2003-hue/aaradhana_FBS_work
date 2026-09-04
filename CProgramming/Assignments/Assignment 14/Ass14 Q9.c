#include<stdio.h>
struct Complex
{
    int real;
    int imaginary;
};
void main()
{
    struct Complex c1,c2;
    c1.real=5;
    c1.imaginary=3;
    printf("Complex Number: %d + %di\n",c1.real,c1.imaginary);

    printf("\nEnter Real and Imaginary Number\n");
    scanf("%d",&c2.real);
    scanf("%d",&c2.imaginary);
    printf("\nComplex Number: %d + %di",c2.real, c2.imaginary);
}