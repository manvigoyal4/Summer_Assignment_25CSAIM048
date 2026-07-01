//WAP TO CREATE MENU DRIVEN ARRAY OPERATIONS SYSTEM.
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice;
    int sum = 0, max, min;

    printf("=====================================\n");
    printf("   MENU DRIVEN ARRAY OPERATIONS\n");
    printf("=====================================\n");

    // Input array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display Menu
    printf("\nChoose an Operation:\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Maximum Element\n");
    printf("4. Find Minimum Element\n");
    printf("5. Calculate Average\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nArray Elements are:\n");
            for(i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 2:
            sum = 0;
            for(i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            printf("Sum = %d\n", sum);
            break;

        case 3:
            max = arr[0];
            for(i = 1; i < n; i++)
            {
                if(arr[i] > max)
                    max = arr[i];
            }
            printf("Maximum Element = %d\n", max);
            break;

        case 4:
            min = arr[0];
            for(i = 1; i < n; i++)
            {
                if(arr[i] < min)
                    min = arr[i];
            }
            printf("Minimum Element = %d\n", min);
            break;

        case 5:
            sum = 0;
            for(i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            printf("Average = %.2f\n", (float)sum / n);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}