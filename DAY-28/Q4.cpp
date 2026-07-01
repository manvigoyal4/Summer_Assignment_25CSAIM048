//WAP TO CREATE CONTACT MANAGEMENT SYSTEM.
#include <stdio.h>

int main()
{
    char name[50];
    char phone[15];
    char email[50];

    printf("=====================================\n");
    printf("      CONTACT MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    // Input Contact Details
    printf("Enter Contact Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email Address: ");
    scanf("%s", email);

    // Display Contact Details
    printf("\n========== CONTACT DETAILS ==========\n");
    printf("Name          : %s\n", name);
    printf("Phone Number  : %s\n", phone);
    printf("Email Address : %s\n", email);

    printf("\nContact Saved Successfully!\n");

    return 0;
}