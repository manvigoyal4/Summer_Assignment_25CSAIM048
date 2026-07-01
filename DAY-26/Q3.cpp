//WAP TO CREATE ATM STIMULATION.
#include<stdio.h>

int main()
{
    int pin, choice;
    float balance = 10000.0, amount;

    printf("========== ATM SIMULATION ==========\n");

    // PIN Verification
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &pin);

    if (pin != 1234)
    {
        printf("Incorrect PIN! Access Denied.\n");
        return 0;
    }

    printf("\nLogin Successful!\n");

    // ATM Menu
    printf("\n1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Your Balance = Rs. %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                balance += amount;
                printf("Deposit Successful!\n");
                printf("Updated Balance = Rs. %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount!\n");
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= balance && amount > 0)
            {
                balance -= amount;
                printf("Withdrawal Successful!\n");
                printf("Remaining Balance = Rs. %.2f\n", balance);
            }
            else
            {
                printf("Insufficient Balance or Invalid Amount!\n");
            }
            break;

        case 4:
            printf("Thank you for using the ATM.\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}