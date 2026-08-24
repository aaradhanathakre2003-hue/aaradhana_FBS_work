#include<stdio.h>
struct Time
{
    int hour;
    int min;
    int sec;
};
void main()
{
    struct Time t1,t2;
    t1.hour=10;
    t1.min=30;
    t1.sec=45;
    printf("Time: %d:%d:%d\n",t1.hour,t1.min,t1.sec);

    printf("\nEnter Hour, Minute and Second\n");
    scanf("%d",&t2.hour);
    scanf("%d",&t2.min);
    scanf("%d",&t2.sec);
    printf("\nTime: %d:%d:%d",t2.hour,t2.min,t2.sec);
}