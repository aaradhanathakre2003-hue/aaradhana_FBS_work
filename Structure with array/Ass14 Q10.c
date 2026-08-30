typedef struct Product
{
    int id;
    char name[50];
    int quantity;
    double price;
}Product;
void main()
{
    Product parr[5];
    printf("Enter ID, Name, Quantity and Price\n");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&parr[i].id);
	    scanf("%s",parr[i].name);
	    scanf("%d",&parr[i].quantity);
	    scanf("%lf",&parr[i].price);
	}
    printf("\nDisplay data");
    for(int i=0;i<5;i++)
    {
    	printf("\nID:%d, Name:%s, Quantity:%d, Price:%.2lf",parr[i].id,parr[i].name,parr[i].quantity,parr[i].price);
	}
}