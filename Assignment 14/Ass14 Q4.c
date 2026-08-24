#include<string.h>
struct HR
{
    int id;
    char name[50];
    double salary;
    double commission;
};
void main()
{
    struct HR h1,h2;
    h1.id=104;
    strcpy(h1.name,"radha");
    h1.salary=60000;
    h1.commission=3000;
    printf("ID:%d, Name:%s, Salary:%.2lf, Commission:%.2lf\n",h1.id, h1.name, h1.salary, h1.commission);
           
    printf("\nEnter ID, Name, Salary and Commission\n");
    scanf("%d",&h2.id);
    scanf("%s",h2.name);
    scanf("%lf",&h2.salary);
    scanf("%lf",&h2.commission);
    printf("\nID:%d, Name:%s, Salary:%.2lf, Commission:%.2lf",h2.id, h2.name, h2.salary, h2.commission);
}