//WAP TO SORT WORDS BY LENGTH.
#include <stdio.h>
#include <string.h>

int main()
{
    char word[50][50], temp[50];
    int n, i, j;

    // Input the number of words
    printf("Enter the number of words: ");
    scanf("%d", &n);

    // Input the words
    printf("Enter the words:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
    }

    // Sort words based on their length
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // Compare the lengths of two words
            if (strlen(word[i]) > strlen(word[j]))
            {
                // Swap the words
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    // Display the sorted words
    printf("\nWords sorted by length:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", word[i]);
    }

    return 0;
}