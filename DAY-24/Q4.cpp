//WAP TO REMOVE DUPLICATE CHARACTERS.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++)
    {
        // Compare current character with the remaining characters
        for (j = i + 1; str[j] != '\0'; )
        {
            if (str[i] == str[j])
            {
                int k;

                // Shift characters to the left to remove duplicate
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
            else
            {
                j++;
            }
        }
    }

    // Display the string after removing duplicates
    printf("String after removing duplicate characters: %s\n", str);

    return 0;
}