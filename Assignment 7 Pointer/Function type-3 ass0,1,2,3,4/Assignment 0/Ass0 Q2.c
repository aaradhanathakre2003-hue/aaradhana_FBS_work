void areacircle(float *);
void main()
{
	float r=40;
    areacircle(&r);
}
void areacircle(float *r)
{
    float pi=3.14;
    float area=pi * (*r) * (*r);
    printf("Area = %f",area);
}