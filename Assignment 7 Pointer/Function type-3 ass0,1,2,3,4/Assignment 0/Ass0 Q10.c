void marks(int *,int *,int *,int *,int *); 
void main()
{
	int s1=80,s2=95,s3=75,s4=64,s5=99;
	marks(&s1,&s2,&s3,&s4,&s5);
}
void marks(int *s1,int *s2,int *s3,int *s4,int *s5)
{
	int total=(*s1)+(*s2)+(*s3)+(*s4)+(*s5);
	float per=(total / 500.0) * 100;
	printf("Total marks is %d out of 500\n",total);
	printf("Percentage of 5 Subjects %f",per);
}