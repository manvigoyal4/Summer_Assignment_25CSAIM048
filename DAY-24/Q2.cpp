//WAP TO FIND LONGEST WORD.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start = 0;
    int maxLen = 0, maxStart = 0;
    int len;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string character by character
    for (i = 0; ; i++)
    {
        // Check for space, newline, or end of string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            // Calculate the length of the current word
            len = i - start;

            // Update longest word if current word is longer
            if (len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }

            // Move to the next word
            start = i + 1;
        }

        // Stop when end of string is reached
        if (str[i] == '\0')
            break;
    }

    // Display the longest word
    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLength of longest word: %d\n", maxLen);

    return 0;
}