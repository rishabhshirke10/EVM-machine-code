#include <stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "vaibhav"
#define CANDIDATE2 "rishabh"
#define CANDIDATE3 "rohit"
int votescount1 = 0, votescount2 = 0, votescount3 = 0;
void castvote()
{
    int choice;
    printf("Please choose your Candidate\n");
    printf("1. %s", CANDIDATE1);
    printf("\n2. %s", CANDIDATE2);
    printf("\n3. %s", CANDIDATE3);
    printf("\n4. %s", "None of These");

    printf("\nInput your choice (1 - 4):");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        votescount1++;
        break;
    case 2:
        votescount2++;
        break;
    case 3:
        votescount3++;
        break;
    default:
        printf("Error: Wrong Choice !! Please retry");

        getchar();
    }
    printf("thanks for vote !!");
}
void votesCount()
{
    printf("%s - %d ", CANDIDATE1, votescount1);
    printf("%s - %d ", CANDIDATE2, votescount2);
    printf("%s - %d ", CANDIDATE3, votescount3);
}
int main()
{
    int i;
    int choice;
    do
    {
        printf("\n###### Welcome to Election/Voting 2023 #####");
        printf("\n1. Cast the Vote");
        printf("\n2. Find Vote Count");
        printf("\n0. Exit");
        printf("\nPlease enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            castvote();
            break;
        case 2:
            votesCount();
            break;
        default:
            printf("Error: Invalid Choice");
        }
    } while (choice != 0);

    getchar();
    return 0;
}