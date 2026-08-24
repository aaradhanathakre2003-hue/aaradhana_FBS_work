#include<stdio.h>
struct Distance
{
    float feet;
    float inch;
};
void main()
{
    struct Distance d1,d2;
    d1.feet=5;
    d1.inch=6;
    printf("Distance: %.2f feet %.2f inch\n",d1.feet,d1.inch);

    printf("\nEnter Feet and Inch\n");
    scanf("%f",&d2.feet);
    scanf("%f",&d2.inch);
    printf("\nDistance: %.2f feet %.2f inch",d2.feet,d2.inch);
}