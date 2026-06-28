//WAP TO MERGE TWO SORTED ARRAYS.
#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2;
    int i, j, k;

    // Input size of first array
    printf("Enter the size of first sorted array: ");
    scanf("%d", &n1);

    // Input elements of first sorted array
    printf("Enter the elements of first sorted array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    printf("Enter the size of second sorted array: ");
    scanf("%d", &n2);

    // Input elements of second sorted array
    printf("Enter the elements of second sorted array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Merge both sorted arrays
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    // Display the merged array
    printf("Merged Sorted Array: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}