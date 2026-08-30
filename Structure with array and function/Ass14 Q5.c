typedef struct Product
{
    int id;
    char name[50];
    int quantity;
    double price;
}Product;
void display(Product*,int);
void store(Product*,int);
void main()
{
	Product arr[5],brr[10],crr[15];
	printf("-----------------------Array 1-------------------------");
	printf("\nEnter ID, Name, Quantity and Price of arr: \n");
	store(arr,5);
	
	printf("\nDisplaying the record: \n");
	display(arr,5);
	
	printf("-----------------------Array 2-------------------------");
	printf("\nEnter ID, Name, Quantity and Price of brr: \n");
	store(brr,10);
	
	printf("\nDisplaying the record: \n");
	display(brr,10);
	
	printf("-----------------------Array 3-------------------------");
	printf("\nEnter ID, Name, Quantity and Price of crr: \n");
	store(crr,15);
	
	printf("\nDisplaying the record: \n");
	display(crr,15);
}
void display(Product* parr ,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nID:%d, Name:%s, Quantity:%d, Price:%.2lf",parr[i].id,parr[i].name,parr[i].quantity,parr[i].price);
		printf("\n");
	}
}
void store(Product* parr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter %d record: ",i+1);
		scanf("%d",&parr[i].id);
	    scanf("%s",parr[i].name);
	    scanf("%d",&parr[i].quantity);
	    scanf("%lf",&parr[i].price);
	}
}