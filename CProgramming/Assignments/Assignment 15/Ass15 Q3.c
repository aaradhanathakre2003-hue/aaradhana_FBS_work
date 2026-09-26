typedef struct Player
{
    char name[50];
    int matches;
    int runs;
    int wickets;
}Player;
void accept(Player[]);
void display(Player[]);
void maximum(Player[]);
int main()
{
    Player p[10];
    accept(p);
    display(p);
    maximum(p);
}
void accept(Player p[])
{
    for(int i=0;i<10;i++)
    {
        printf("Enter details of Player %d\n",i+1);

        printf("Name: ");
        scanf(" %[^\n]",p[i].name);

        printf("Matches: ");
        scanf("%d",&p[i].matches);

        printf("Runs: ");
        scanf("%d",&p[i].runs);

        printf("Wickets: ");
        scanf("%d",&p[i].wickets);
        printf("\n");
    }
}
void display(Player p[])
{
    printf("\n--- Player Details ---\n");
    for(int i=0;i<10;i++)
    {
        printf("\nPlayer %d\n",i+1);
        printf("Name: %s\n",p[i].name);
        printf("Matches: %d\n",p[i].matches);
        printf("Runs: %d\n",p[i].runs);
        printf("Wickets: %d\n",p[i].wickets);
    }
}
void maximum(Player p[])
{
    int maxRuns=0;
    int maxWickets=0;
    int runPlayer=0;
    int wicketPlayer=0;
    for(int i=0;i<10;i++)
    {
        if(p[i].runs>maxRuns)
        {
            maxRuns=p[i].runs;
            runPlayer=i;
        }
        if(p[i].wickets>maxWickets)
        {
            maxWickets=p[i].wickets;
            wicketPlayer=i;
        }
    }
    printf("\n--- Maximum Runs ---\n");
    printf("Player: %s\n",p[runPlayer].name);
    printf("Runs: %d\n",p[runPlayer].runs);

    printf("\n--- Maximum Wickets ---\n");
    printf("Player: %s\n",p[wicketPlayer].name);
    printf("Wickets: %d\n",p[wicketPlayer].wickets);
}