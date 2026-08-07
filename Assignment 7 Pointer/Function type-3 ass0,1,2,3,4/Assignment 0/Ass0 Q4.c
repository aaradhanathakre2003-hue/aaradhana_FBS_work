void swap(int *,int *);
void main()
{
	int a=10,b=20;
    swap(&a,&b);
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a = *b;
    *b = temp;
    printf("After Swap:\na = %d\nb = %d", *a, *b);
}
