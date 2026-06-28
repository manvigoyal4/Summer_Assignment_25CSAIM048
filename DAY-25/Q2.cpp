//WAP TO FIND COMMON CHARACTERS IN STRING.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Common characters are: ");

    // Compare each character of the first string with the second string
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                // Print the common character
                printf("%c ", str1[i]);
                break; // Avoid printing the same character multiple times for this occurrence
            }
        }
    }

    return 0;
}