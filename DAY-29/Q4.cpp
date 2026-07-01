//WAP TO CREATE INVENTORY MANAGEMENT SYSTEM
#include <stdio.h>

int main()
{
    int productId, quantity;
    char productName[50];
    float price, totalValue;

    printf("=====================================\n");
    printf("     INVENTORY MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    // Input Product Details
    printf("Enter Product ID: ");
    scanf("%d", &productId);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", productName);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Product Quantity: ");
    scanf("%d", &quantity);

    // Calculate Total Inventory Value
    totalValue = price * quantity;

    // Display Product Details
    printf("\n========== PRODUCT DETAILS ==========\n");
    printf("Product ID       : %d\n", productId);
    printf("Product Name     : %s\n", productName);
    printf("Product Price    : Rs. %.2f\n", price);
    printf("Product Quantity : %d\n", quantity);
    printf("Total Value      : Rs. %.2f\n", totalValue);

    // Check Stock Status
    if (quantity > 0)
    {
        printf("Stock Status     : In Stock\n");
    }
    else
    {
        printf("Stock Status     : Out of Stock\n");
    }

    return 0;
}