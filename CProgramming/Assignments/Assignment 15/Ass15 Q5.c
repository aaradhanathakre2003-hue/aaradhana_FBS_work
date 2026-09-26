typedef struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
}Movie;
void addMovie(Movie[],int*);
void searchMovie(Movie[],int);
void updateMovie(Movie[],int);
void displayMovie(Movie);
int main()
{
    Movie m[50];
    int count=0;
    int choice;
    while(1)
    {
        printf("--- Movie Database ---\n");
        printf("1. Add Movie\n");
        printf("2. Search Movie\n");
        printf("3. Update Movie\n");
        printf("4. Display All Movies\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addMovie(m,&count);
                break;
            case 2:
                searchMovie(m,count);
                break;
            case 3:
                updateMovie(m,count);
                break;
            case 4:
                for(int i=0;i<count;i++)
                {
                    printf("\nMovie %d",i+1);
                    displayMovie(m[i]);
                }
                break;
            case 5:
				break;
            default:
                printf("Invalid choice!\n");
        }
    }
}
void addMovie(Movie m[],int *count)
{
    printf("\nEnter movie title: ");
    scanf(" %[^\n]",m[*count].title);

    printf("Enter director: ");
    scanf(" %[^\n]",m[*count].director);

    printf("Enter release year: ");
    scanf("%d",&m[*count].year);

    printf("Enter genre: ");
    scanf(" %[^\n]",m[*count].genre);

    (*count)++;
    printf("\nMovie added successfully!\n");
}
void searchMovie(Movie m[],int count)
{
    char title[50];
    int found=0;

    printf("\nEnter movie title to search: ");
    scanf(" %[^\n]",title);

    for(int i=0;i<count;i++)
    {
        if(strcmp(m[i].title,title)==0)
        {
            displayMovie(m[i]);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("Movie not found!\n");
    }
}
void updateMovie(Movie m[], int count)
{
    char title[50];
    int found=0;

    printf("\nEnter movie title to update: ");
    scanf(" %[^\n]",title);

    for(int i=0;i<count;i++)
    {
        if(strcmp(m[i].title,title)==0)
        {
            printf("Enter new director: ");
            scanf(" %[^\n]",m[i].director);

            printf("Enter new year: ");
            scanf("%d",&m[i].year);

            printf("Enter new genre: ");
            scanf(" %[^\n]",m[i].genre);

            printf("\nMovie updated successfully!\n");

            found = 1;
            break;
        }
    }
    if(found==0)
    {
        printf("Movie not found!\n");
    }
}
void displayMovie(Movie m)
{
    printf("\nTitle: %s", m.title);
    printf("\nDirector: %s", m.director);
    printf("\nYear: %d", m.year);
    printf("\nGenre: %s\n", m.genre);
}