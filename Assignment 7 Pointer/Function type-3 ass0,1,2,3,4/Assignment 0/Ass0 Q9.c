void areatri(int *,int *);
void main()
{
	int b=8,h=5;
    areatri(&b,&h);
}
void areatri(int *b,int *h)
{
    int area=((*b)*(*h))/2;
    printf("Area = %d", area);
}