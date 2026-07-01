//WAP TO CREATE TICKET BOOKING SYSTEM.
#include <stdio.h>

int main()
{
    char name[50];
    int age;
    int tickets;
    float ticketPrice = 500.0;
    float totalAmount;

    printf("=====================================\n");
    printf("       TICKET BOOKING SYSTEM\n");
    printf("=====================================\n");

    // Input Customer Details
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    // Calculate Total Amount
    totalAmount = tickets * ticketPrice;

    // Display Ticket Details
    printf("\n========== TICKET DETAILS ==========\n");
    printf("Customer Name   : %s\n", name);
    printf("Age             : %d\n", age);
    printf("Ticket Price    : Rs. %.2f\n", ticketPrice);
    printf("Tickets Booked  : %d\n", tickets);
    printf("Total Amount    : Rs. %.2f\n", totalAmount);

    if (tickets > 0)
    {
        printf("Booking Status  : Confirmed\n");
    }
    else
    {
        printf("Booking Status  : Failed\n");
    }

    return 0;
}