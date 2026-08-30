typedef struct Distance
{
	float feet;
    float inch;
}Distance;
void display(Distance*);
void store(Distance*);
void main()
{
	Distance d1;
	printf("Enter Feet and Inch\n");
	store(&d1);
	
	printf("\nDisplaying the Distance: \n");
	display(&d1);
}
void display(Distance* d)
{
	printf("Distance: %.2f feet %.2f inch\n",d->feet,d->inch);
}
void store(Distance* d)
{
	scanf("%f",&d->feet);
    scanf("%f",&d->inch);
}