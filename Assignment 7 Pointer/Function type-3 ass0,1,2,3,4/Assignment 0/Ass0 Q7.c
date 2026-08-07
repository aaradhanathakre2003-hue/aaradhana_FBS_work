void hour(int *);
void main()
{
	int min=135;
    hour(&min);
}
void hour(int *min)
{
    int h=(*min) / 60;
    int rem_min=(*min)%60;
    printf("Hours:remaining minutes= %d:%d", h,rem_min);
}