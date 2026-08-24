#include<stdio.h>
struct Date
{
    int date;
    int month;
    int year;
};
void main()
{
    struct Date d1,d2;
    d1.date=24;
    d1.month=8;
    d1.year=2026;
    printf("Date: %d/%d/%d\n",d1.date,d1.month,d1.year);

    printf("\nEnter Date, Month and Year\n");
    scanf("%d",&d2.date);
    scanf("%d",&d2.month);
    scanf("%d",&d2.year);
    printf("\nDate: %d/%d/%d",d2.date,d2.month,d2.year);
}