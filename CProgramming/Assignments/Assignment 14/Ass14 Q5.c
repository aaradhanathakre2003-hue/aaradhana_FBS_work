#include<string.h>
struct SalesManager
{
    int id;
    char name[50];
    double salary;
    double incentive;
    double target;
};
void main()
{
    struct SalesManager s1,s2;
    s1.id=105;
    strcpy(s1.name,"radha");
    s1.salary=70000;
    s1.incentive=5000;
    s1.target=100000;
    printf("ID:%d, Name:%s, Salary:%.2lf, Incentive:%.2lf, Target:%.2lf\n",s1.id,s1.name,s1.salary,s1.incentive,s1.target);

    printf("\nEnter ID, Name, Salary, Incentive and Target\n");
    scanf("%d",&s2.id);
    scanf("%s",s2.name);
    scanf("%lf",&s2.salary);
    scanf("%lf",&s2.incentive);
    scanf("%lf",&s2.target);
    printf("\nID:%d, Name:%s, Salary:%.2lf, Incentive:%.2lf, Target:%.2lf",s2.id,s2.name,s2.salary,s2.incentive,s2.target);
}