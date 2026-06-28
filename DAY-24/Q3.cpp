//WAP TO COMPRESS A STRING.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, count;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    i = 0;

    // Traverse the string
    while (str[i] != '\0')
    {
        count = 1;

        // Count consecutive occurrences of the same character
        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        // Print the character followed by its count
        printf("%c%d", str[i], count);

        // Move to the next character
        i++;
    }

    return 0;
}