void avg(int *,int *,int *,int *,int *);
void main()
{
	int no1=10,no2=20,no3=30,no4=40,no5=50;
    avg(&no1,&no2,&no3,&no4,&no5);
}
void avg(int *no1,int *no2,int *no3,int *no4,int *no5)
{
    int sum=(*no1)+(*no2)+(*no3)+(*no4)+(*no5);
	float avg=sum/5;
	printf("Average = %f", avg);
}