struct Product
{
    int id;
    char name[50];
    int quantity;
    double price;
};
struct Product storeProduct();
void display(struct Product);
void main()
{
    struct Product p1,p2,p3;
    
    printf("1.Enter ID, Name, Quantity and Price\n");
    p1=storeProduct();
    
    printf("\n2.Enter ID, Name, Quantity and Price\n");
    p2=storeProduct();
    
    printf("\n3.Enter ID, Name, Quantity and Price\n");
    p3=storeProduct();
    
	printf("\n1.Product:");
    display(p1);
    
    printf("\n1.Product:");
    display(p2);
    
    printf("\n1.Product:");
    display(p2);
}
void display(struct Product pr)
{
	printf("\nID:%d, Name:%s, Quantity:%d, Price:%.2lf",pr.id,pr.name,pr.quantity,pr.price);
}
struct Product storeProduct()
{
	struct Product temp;
	scanf("%d",&temp.id);
    scanf("%s",temp.name);
    scanf("%d",&temp.quantity);
    scanf("%lf",&temp.price);
    
    return temp;
}