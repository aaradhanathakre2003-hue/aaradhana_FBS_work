typedef struct Product
{
	int id;
    char name[50];
    int quantity;
    double price;
}Product;
void display(Product*);
void store(Product*);
void main()
{
	Product p1;
	printf("\nEnter ID, Name, Quantity and Price: \n");
	store(&p1);
	
	printf("\nDisplaying the record: \n");
	display(&p1);
}
void display(Product* p)
{
	printf("ID:%d, Name:%s, Quantity:%d, Price:%.2lf\n",p->id,p->name,p->quantity,p->price);
}
void store(Product* p)
{
	scanf("%d",&p->id);
    scanf("%s",p->name);
    scanf("%d",&p->quantity);
    scanf("%lf",&p->price);
}