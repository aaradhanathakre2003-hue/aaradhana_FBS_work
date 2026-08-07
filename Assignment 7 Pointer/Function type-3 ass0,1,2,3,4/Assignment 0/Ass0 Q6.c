void square(int *);
void main()
{
	int no=20;
    square(&no);
}
void square(int *no)
{
    int sq= (*no)*(*no);
    int cu= (*no)*(*no)*(*no);
    printf("Square & Cube = %d & %d", sq,cu);
}