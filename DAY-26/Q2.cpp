//WAP TO CREATE VOTING ELIGIBILITY SYSTEM.
#include <stdio.h>

int main()
{
    int age;

    printf("=================================\n");
    printf("     VOTING ELIGIBILITY SYSTEM\n");
    printf("=================================\n");

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check age
    if (age < 0)
    {
        printf("Invalid age entered.\n");
    }
    else if (age >= 18)
    {
        printf("Congratulations!\n");
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("Sorry!\n");
        printf("You are not eligible to vote.\n");
        printf("You can vote after %d year(s).\n", 18 - age);
    }

    printf("\nThank you for using the Voting Eligibility System.\n");

    return 0;
}