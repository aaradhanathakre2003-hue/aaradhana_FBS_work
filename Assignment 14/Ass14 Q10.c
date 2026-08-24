#include<string.h>
struct Product
{
    int id;
    char name[50];
    int quantity;
    double price;
};
void main()
{
    struct Product p1,p2;
    p1.id=110;
    strcpy(p1.name,"Laptop");
    p1.quantity=2;
    p1.price=50000;
    printf("ID:%d, Name:%s, Quantity:%d, Price:%.2lf\n",p1.id,p1.name,p1.quantity,p1.price);

    printf("\nEnter ID, Name, Quantity and Price\n");
    scanf("%d",&p2.id);
    scanf("%s",p2.name);
    scanf("%d",&p2.quantity);
    scanf("%lf",&p2.price);
    printf("\nID:%d, Name:%s, Quantity:%d, Price:%.2lf",p2.id,p2.name,p2.quantity,p2.price);
}