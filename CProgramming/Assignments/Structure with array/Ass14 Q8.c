typedef struct Distance
{
    float feet;
    float inch;
}Distance;
void main()
{
    Distance darr[5];

    printf("Enter Feet and Inch\n");
    for(int i=0;i<5;i++)
    {
    	scanf("%f",&darr[i].feet);
    	scanf("%f",&darr[i].inch);
	}
    printf("\nDisplay data");
    for(int i=0;i<5;i++)
    {
    	printf("\nDistance %d: %.2f feet %.2f inch",i+1,darr[i].feet,darr[i].inch);
	}
    
}