//WAP TO CREATE MINI LIBRARY MANAGEMENT SYSTEM.
#include<stdio.h>
int main()
{
    int bookId[100], quantity[100];
    char bookName[100][50];
    int n, i;

    printf("=====================================\n");
    printf("    MINI LIBRARY MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    // Input number of books
    printf("Enter Number of Books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", bookName[i]);

        printf("Enter Quantity: ");
        scanf("%d", &quantity[i]);
    }

    // Display library records
    printf("\n=====================================\n");
    printf("         LIBRARY RECORDS\n");
    printf("=====================================\n");

    printf("Book ID\tBook Name\t\tQuantity\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-20s%d\n", bookId[i], bookName[i], quantity[i]);
    }

    return 0;
}
