//WAP TO CREATE LIBRARY MANAGEMENT SYSTEM.
#include <stdio.h>

int main()
{
    int bookId;
    char bookName[50];
    char authorName[50];
    int quantity;

    printf("=====================================\n");
    printf("     LIBRARY MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    // Input Book Details
    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", bookName);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", authorName);

    printf("Enter Quantity of Books: ");
    scanf("%d", &quantity);

    // Display Book Details
    printf("\n========== BOOK DETAILS ==========\n");
    printf("Book ID      : %d\n", bookId);
    printf("Book Name    : %s\n", bookName);
    printf("Author Name  : %s\n", authorName);
    printf("Quantity     : %d\n", quantity);

    if (quantity > 0)
    {
        printf("Status       : Available\n");
    }
    else
    {
        printf("Status       : Not Available\n");
    }

    return 0;
}