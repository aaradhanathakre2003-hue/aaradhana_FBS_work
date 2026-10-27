#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Book
{
    int bookId;
    char bookName[50];
    char authorName[50];
    char category[50];
    float price;
    float rating;
    char issueDate[20];
    char dueDate[20];
}Book;
Book *b=NULL;
int count=0,capacity=0;
void addBook();
void removeBook();
void searchBook();
void showAuthorBooks();
void showCategoryBooks();
void updateBook();
void sortBooks();
void displayAllBooks();
void checkDueDates();
int main()
{
    int choice=0;
    while(choice!=10)
    {
        printf("\n     BOOK MANAGEMENT SYSTEM");
        printf("\n1. Add Book");
        printf("\n2. Remove Book");
        printf("\n3. Search Book");
        printf("\n4. Show Author's Books");
        printf("\n5. Show Category's Books");
        printf("\n6. Update Book Data");
        printf("\n7. Display Sorted Books");
        printf("\n8. Display All Books");
        printf("\n9. Check Due Date Status");
        printf("\n10. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addBook();
                break;
            case 2:
                removeBook();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                showAuthorBooks();
                break;
            case 5:
                showCategoryBooks();
                break;
            case 6:
                updateBook();
                break;
            case 7:
                sortBooks();
                break;
            case 8:
                displayAllBooks();
                break;
            case 9:
                checkDueDates();
                break;
            case 10:
                printf("\nThank You!");
                break;
            default:
                printf("\nInvalid Choice!");
        }
    }
    free(b);
    return 0;
}
void addBook()
{
	int duplicate;
    if(count==0)
    {
        b=(Book*)malloc(sizeof(Book));
        if(b==NULL)
        {
            printf("\nMemory Allocation Failed!");
            return;
        }
        capacity=1;
    }
    else if(count==capacity)
    {
        capacity=capacity+1;
        b=(Book*)realloc(b,capacity*sizeof(Book));
        if(b==NULL)
        {
            printf("\nMemory Reallocation Failed!");
            return;
        }
    }
	do
	{
	    duplicate=0;
	    printf("\nEnter Book ID: ");
	    scanf("%d",&b[count].bookId);
	    if(b[count].bookId<=0)
	    {
	        printf("Invalid Book ID! Book ID must be positive.\n");
	        duplicate=1;
	        continue;
	    }
	    for(int i=0;i<count;i++)
	    {
	        if(b[i].bookId==b[count].bookId)
	        {
	            printf("Book ID already exists! Please enter a different ID.\n");
	            duplicate = 1;
	            break;
	        }
	    }
	}while(duplicate==1);

    printf("Enter Book Name: ");
    scanf(" %[^\n]",b[count].bookName);

    printf("Enter Author Name: ");
    scanf(" %[^\n]",b[count].authorName);

    printf("Enter Category: ");
    scanf(" %[^\n]",b[count].category);

    printf("Enter Price: ");
    scanf("%f",&b[count].price);

    do
	{
	    printf("Enter Rating (1 to 5): ");
	    scanf("%f",&b[count].rating);
	    if(b[count].rating<1 || b[count].rating>5)
	    {
	        printf("Invalid Rating! Please enter rating between 1 and 5.\n");
	    }
	}while(b[count].rating<1 || b[count].rating>5);

    printf("Enter Issue Date: ");
    scanf(" %[^\n]",b[count].issueDate);

    printf("Enter Due Date: ");
    scanf(" %[^\n]",b[count].dueDate);

    count++;
    printf("\nBook Added Successfully!");
}
void removeBook()
{
    int id,found=0,i,j;
    printf("\nEnter Book ID to remove: ");
    scanf("%d",&id);
    for(i=0;i<count;i++)
    {
        if(b[i].bookId==id)
        {
            found=1;
            for(j=i;j<count-1;j++)
            {
                b[j]=b[j+1];
            }
            count--;
            printf("\nBook Removed Successfully!");
            break;
        }
    }
    if(found==0)
    {
        printf("\nBook Not Found!");
    }
}
void searchBook()
{
    int choice,id,found=0,i,suggestion[100],suggestionCount=0,bookChoice;
    char name[50];
    
    printf("\nSearch Book By:");
    printf("\n1. Book ID");
    printf("\n2. Book Name");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nEnter Book ID: ");
        scanf("%d",&id);
        for(i=0;i<count;i++)
        {
            if(b[i].bookId==id)
            {
                printf("\n\nBook Found!");
                printf("\nBook ID: %d",b[i].bookId);
                printf("\nBook Name: %s",b[i].bookName);
                printf("\nAuthor Name: %s",b[i].authorName);
                printf("\nCategory: %s",b[i].category);
                printf("\nPrice: %.2f",b[i].price);
                printf("\nRating: %.1f",b[i].rating);
                printf("\nIssue Date: %s",b[i].issueDate);
                printf("\nDue Date: %s",b[i].dueDate);
                printf("\n--------------------------------------\n");
                found = 1;
                break;
            }
        }
        if(found==0)
        {
            printf("\nBook Not Found!");
        }
    }
    else if(choice==2)
    {
        printf("\nEnter Starting Letters of Book Name: ");
        scanf(" %[^\n]",name);
        for(i=0;i<count;i++)
        {
            if(strncmp(b[i].bookName,name,strlen(name))==0)
            {
                suggestion[suggestionCount]=i;
                suggestionCount++;
            }
        }
        if(suggestionCount==0)
        {
            printf("\nNo Matching Books Found!");
            return;
        }
        printf("\n\nMatching Books:");
        for(i=0;i<suggestionCount;i++)
        {
            printf("\n %d. %s",i+1,b[suggestion[i]].bookName);
        }
        printf("\n\nEnter Book Choice: ");
        scanf("%d",&bookChoice);
        if(bookChoice<1 || bookChoice>suggestionCount)
        {
            printf("\nInvalid Book Choice!");
            return;
        }
        i=suggestion[bookChoice-1];
        printf("\n       BOOK DETAILS");
        printf("\nBook ID: %d",b[i].bookId);
        printf("\nBook Name: %s",b[i].bookName);
        printf("\nAuthor Name: %s",b[i].authorName);
        printf("\nCategory: %s",b[i].category);
        printf("\nPrice: %.2f",b[i].price);
        printf("\nRating: %.1f",b[i].rating);
        printf("\nIssue Date: %s",b[i].issueDate);
        printf("\nDue Date: %s",b[i].dueDate);
        printf("\n--------------------------------------\n");
    }
    else
    {
        printf("\nInvalid Choice!");
    }
}
void showAuthorBooks()
{
    char author[50];
    int suggestion[100],suggestionCount=0,authorChoice,i;
    printf("\nEnter Starting Letters of Author Name: ");
    scanf(" %[^\n]",author);
    for(i=0;i<count;i++)
    {
        if(strncmp(b[i].authorName,author,strlen(author))==0)
        {
            suggestion[suggestionCount]=i;
            suggestionCount++;
        }
    }
    if(suggestionCount==0)
    {
        printf("\nNo Books Found for this Author!");
        return;
    }
    printf("\n\nMatching Books:");
    for(i=0;i<suggestionCount;i++)
    {
        printf("\n %d. %s - %s",i+1,b[suggestion[i]].bookName, b[suggestion[i]].authorName);
    }
    printf("\n\nEnter Book Choice: ");
    scanf("%d",&authorChoice);
    if(authorChoice<1 || authorChoice>suggestionCount)
    {
        printf("\nInvalid Choice!");
        return;
    }
    i=suggestion[authorChoice-1];
    printf("\n       BOOK DETAILS");
    printf("\nBook ID: %d",b[i].bookId);
    printf("\nBook Name: %s",b[i].bookName);
    printf("\nAuthor Name: %s",b[i].authorName);
    printf("\nCategory: %s",b[i].category);
    printf("\nPrice: %.2f",b[i].price);
    printf("\nRating: %.1f",b[i].rating);
    printf("\nIssue Date: %s",b[i].issueDate);
    printf("\nDue Date: %s",b[i].dueDate);
    printf("\n--------------------------------------\n");
}
void showCategoryBooks()
{
    char category[50];
    int suggestion[100],suggestionCount=0,categoryChoice,i;
    printf("\nEnter Starting Letters of Category: ");
    scanf(" %[^\n]",category);
    for(i=0;i<count;i++)
    {
        if(strncmp(b[i].category,category,strlen(category))==0)
        {
            suggestion[suggestionCount]=i;
            suggestionCount++;
        }
    }
    if(suggestionCount==0)
    {
        printf("\nNo Books Found in this Category!");
        return;
    }
    printf("\n\nMatching Books:");
    for(i=0;i<suggestionCount;i++)
    {
        printf("\n%d. %s - %s",i+1,b[suggestion[i]].bookName,b[suggestion[i]].category);
    }
    printf("\n\nEnter Book Choice: ");
    scanf("%d",&categoryChoice);
    if(categoryChoice<1 || categoryChoice>suggestionCount)
    {
        printf("\nInvalid Choice!");
        return;
    }
    i=suggestion[categoryChoice-1];

    printf("\n       BOOK DETAILS");
    printf("\nBook ID: %d",b[i].bookId);
    printf("\nBook Name: %s",b[i].bookName);
    printf("\nAuthor Name: %s",b[i].authorName);
    printf("\nCategory: %s",b[i].category);
    printf("\nPrice: %.2f",b[i].price);
    printf("\nRating: %.1f",b[i].rating);
    printf("\nIssue Date: %s",b[i].issueDate);
    printf("\nDue Date: %s",b[i].dueDate);
    printf("\n--------------------------------------\n");
}
void updateBook()
{
    int id,found=0, i,choice;
    printf("\nEnter Book ID to update: ");
    scanf("%d",&id);
    for(i=0;i<count;i++)
    {
        if(b[i].bookId==id)
        {
            found = 1;
            printf("\nBook Found!");
            printf("\n\nWhat do you want to update?");
            printf("\n1. Price");
            printf("\n2. Rating");
            printf("\n3. Issue Date");
            printf("\n4. Due Date");
            printf("\n5. Exit");
            printf("\n\nEnter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    printf("\nCurrent Price: %.2f",b[i].price);
                    printf("\nEnter New Price: ");
                    scanf("%f",&b[i].price);
                    printf("\nPrice Updated Successfully!");
                    break;
                case 2:
                    printf("\nCurrent Rating: %.1f",b[i].rating);
                    do
                    {
                        printf("\nEnter New Rating (1 to 5): ");
                        scanf("%f",&b[i].rating);
                        if(b[i].rating<1 || b[i].rating>5)
                        {
                            printf("\nInvalid Rating! Enter rating between 1 and 5.");
                        }
                    }while(b[i].rating<1 || b[i].rating>5);
                    printf("\nRating Updated Successfully!");
                    break;
                case 3:
                    printf("\nCurrent Issue Date: %s",b[i].issueDate);
                    printf("\nEnter New Issue Date: ");
                    scanf(" %[^\n]",b[i].issueDate);
                    printf("\nIssue Date Updated Successfully!");
                    break;
                case 4:
                    printf("\nCurrent Due Date: %s",b[i].dueDate);
                    printf("\nEnter New Due Date: ");
                    scanf(" %[^\n]",b[i].dueDate);
                    printf("\nDue Date Updated Successfully!");
                    break;
                case 5:
                    printf("\nUpdate Cancelled!");
                    break;
                default:
                    printf("\nInvalid Choice!");
            }
            break;
        }
    }
    if(found==0)
    {
        printf("\nBook Not Found!");
    }
}
void sortBooks()
{
    int choice,i,j;
    Book temp;
    printf("\nSort Books By:");
    printf("\n1. Price");
    printf("\n2. Rating");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        for(i=0;i<count-1;i++)
        {
            for(j=i+1;j<count;j++)
            {
                if(b[i].price>b[j].price)
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        printf("\nBooks Sorted By Price (Low to High):");
    }
    else if(choice==2)
    {
        for(i=0;i<count-1;i++)
        {
            for(j=i+1;j<count;j++)
            {
                if(b[i].rating<b[j].rating)
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        printf("\nBooks Sorted By Rating (High to Low):");
    }
    else
    {
        printf("\nInvalid Choice!");
        return;
    }
    for(i=0;i<count;i++)
    {
        printf("\n\nBook ID: %d",b[i].bookId);
        printf("\nBook Name: %s",b[i].bookName);
        printf("\nAuthor Name: %s",b[i].authorName);
        printf("\nCategory: %s",b[i].category);
        printf("\nPrice: %.2f",b[i].price);
        printf("\nRating: %.1f",b[i].rating);
        printf("\nIssue Date: %s",b[i].issueDate);
        printf("\nDue Date: %s",b[i].dueDate);
        printf("\n--------------------------------\n");
    }
}
void displayAllBooks()
{
    int i;
    if(count==0)
    {
        printf("\nNo Books Available!");
        return;
    }
    printf("\nData Of All Books");
    for(i=0;i<count;i++)
    {
        printf("\n\nBook ID: %d",b[i].bookId);
        printf("\nBook Name: %s",b[i].bookName);
        printf("\nAuthor Name: %s",b[i].authorName);
        printf("\nCategory: %s",b[i].category);
        printf("\nPrice: %.2f",b[i].price);
        printf("\nRating: %.1f",b[i].rating);
        printf("\nIssue Date: %s",b[i].issueDate);
        printf("\nDue Date: %s",b[i].dueDate);
        printf("\n--------------------------------------\n");
        printf("\n");
    }
}
void checkDueDates()
{
    int currentDay,currentMonth,currentYear, dueDay,dueMonth,dueYear, currentTotalDays,dueTotalDays,difference,found = 0;
    printf("\nEnter Current Date (DD-MM-YYYY): ");
    scanf("%d-%d-%d",&currentDay,&currentMonth,&currentYear);
    printf("\n         DUE DATE STATUS");
    for(int i=0;i<count;i++)
    {
        sscanf(b[i].dueDate,"%d-%d-%d",&dueDay,&dueMonth,&dueYear);
        currentTotalDays=currentYear*365 + currentMonth*30 + currentDay;
        dueTotalDays=dueYear*365 + dueMonth*30 + dueDay;
        difference=dueTotalDays - currentTotalDays;

        printf("\n\nBook ID: %d",b[i].bookId);
        printf("\nBook Name: %s",b[i].bookName);
        printf("\nDue Date: %s",b[i].dueDate);
        if(difference < 0)
        {
            printf("\nStatus: Due Date Completed");
            printf("\nOverdue Days: %d",-difference);
            found=1;
        }
        else if(difference==0)
        {
            printf("\nStatus: Due Today");
            found=1;
        }
        else
        {
            printf("\nStatus: Due Date Not Completed");
            printf("\nDays Remaining: %d",difference);
        }
        printf("\n--------------------------------------");
    }
    if(count==0)
    {
        printf("\nNo Books Available!");
    }
}