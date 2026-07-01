//WAP TO CREATE MENU DRIVEN CALCULATOR.
#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    printf("=====================================\n");
    printf("      MENU DRIVEN CALCULATOR\n");
    printf("=====================================\n");

    // Input Numbers
    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    // Display Menu
    printf("\nChoose an Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    // Perform Operation
    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}