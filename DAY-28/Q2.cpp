//WAP TO CREATE BANK ACCOUNT SYSTEM.
#include <stdio.h>

int main()
{
    int accountNo;
    char accountHolder[50];
    float balance, deposit, withdraw;

    printf("=====================================\n");
    printf("        BANK ACCOUNT SYSTEM\n");
    printf("=====================================\n");

    // Input Account Details
    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", accountHolder);

    printf("Enter Current Balance: ");
    scanf("%f", &balance);

    // Deposit Amount
    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance = balance + deposit;

    // Withdraw Amount
    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if (withdraw <= balance)
    {
        balance = balance - withdraw;
        printf("\nWithdrawal Successful.\n");
    }
    else
    {
        printf("\nInsufficient Balance!\n");
    }

    // Display Account Details
    printf("\n========== ACCOUNT DETAILS ==========\n");
    printf("Account Number      : %d\n", accountNo);
    printf("Account Holder Name : %s\n", accountHolder);
    printf("Available Balance   : %.2f\n", balance);

    return 0;
}