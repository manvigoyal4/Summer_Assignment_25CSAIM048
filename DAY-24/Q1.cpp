//WAP TO CHECK STRING ROTATION.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check if both strings have the same length
    if (strlen(str1) != strlen(str2))
    {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }

    // Copy the first string into temp
    strcpy(temp, str1);

    // Concatenate the first string with itself
    // Example: "ABCD" becomes "ABCDABCD"
    strcat(temp, str1);

    // Check if the second string exists in the concatenated string
    if (strstr(temp, str2) != NULL)
    {
        printf("The strings are rotations of each other.\n");
    }
    else
    {
        printf("The strings are NOT rotations of each other.\n");
    }

    return 0;
}