typedef struct Product
{
    char name[50];
    float price;
    int quantity;
}Product;
int main()
{
    Product p[10];
    int n;
    float total=0;
    printf("Enter number of products: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter Product %d\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]",p[i].name);
        printf("Price: ");
        scanf("%f",&p[i].price);
        printf("Quantity: ");
        scanf("%d",&p[i].quantity);

        total=total+(p[i].price*p[i].quantity);
        printf("\n");
    }
    printf("\n--- Bill ---\n");
    for(int i=0;i<n;i++)
    {
        printf("%s  %.2f x %d = %.2f\n",p[i].name,p[i].price,p[i].quantity,p[i].price * p[i].quantity);
    }
    printf("\nTotal Cost= %.2f\n",total);
}