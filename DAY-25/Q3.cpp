//WAP TO SORT NAMES ALPHABETICALLY.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50][50], temp[50];
    int n, i, j;

    // Input the number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Input the names
    printf("Enter the names:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    // Sort the names alphabetically
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // Compare two names
            if (strcmp(name[i], name[j]) > 0)
            {
                // Swap the names
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    // Display the sorted names
    printf("\nNames in Alphabetical Order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}