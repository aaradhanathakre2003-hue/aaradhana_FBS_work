#include<string.h>
struct Admin
{
    int id;
    char name[50];
    double salary;
    double allowance;
};
void main()
{
    struct Admin a1,a2;
    a1.id=103;
    strcpy(a1.name, "radha");
    a1.salary=50000;
    a1.allowance=5000;
    printf("ID:%d, Name:%s, Salary:%.2lf, Allowance:%.2lf\n",a1.id, a1.name, a1.salary, a1.allowance);

    printf("\nEnter ID, Name, Salary and Allowance\n");
    scanf("%d",&a2.id);
    scanf("%s",a2.name);
    scanf("%lf",&a2.salary);
    scanf("%lf",&a2.allowance);
    printf("\nID:%d, Name:%s, Salary:%.2lf, Allowance:%.2lf",a2.id, a2.name, a2.salary, a2.allowance);
}