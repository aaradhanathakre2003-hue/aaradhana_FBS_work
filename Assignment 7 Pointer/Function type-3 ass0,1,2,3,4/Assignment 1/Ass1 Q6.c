void uppercase(char *);
void main()
{
	char character='r';
	uppercase(&character);
}
void uppercase(char *character)
{
	if(*character>='A' && *character<='Z')
		printf("Uppercase");
	else
		printf("Lowercase");
}