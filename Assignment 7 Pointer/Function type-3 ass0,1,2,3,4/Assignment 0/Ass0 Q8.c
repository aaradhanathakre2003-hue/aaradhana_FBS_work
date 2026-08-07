void per(int *,int *);
void main()
{
	int l=10,w=5;
    per(&l,&w);
}
void per(int *l,int *w)
{
    int p= 2 * ((*l) + (*w));
    printf("Perimeter = %d", p);
}