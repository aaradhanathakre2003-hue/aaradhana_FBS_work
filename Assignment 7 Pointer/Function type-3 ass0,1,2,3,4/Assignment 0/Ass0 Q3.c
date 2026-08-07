void temp(float *);
void main()
{
	float C=10;
    temp(&C);
}
void temp(float *C)
{
    float F=((*C)*9/5)+32;
    printf("Fahrenheit = %.2f", F);
}