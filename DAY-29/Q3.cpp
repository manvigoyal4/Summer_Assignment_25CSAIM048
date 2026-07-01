//WAP TO CREATE MENU DRIVEN STRING OPERATIONS SYSTEM.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], choice;
    int len, i;

    printf("=====================================\n");
    printf("   MENU DRIVEN STRING OPERATIONS\n");
    printf("=====================================\n");

    // Input String
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = 0;

    // Display Menu
    printf("\nChoose an Operation:\n");
    printf("1. Display String\n");
    printf("2. Find Length\n");
    printf("3. Convert to Uppercase\n");
    printf("4. Convert to Lowercase\n");

    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '1':
            printf("String = %s\n", str);
            break;

        case '2':
            len = strlen(str);
            printf("Length = %d\n", len);
            break;

        case '3':
            for(i = 0; i < strlen(str); i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }
            printf("String in Uppercase = %s\n", str);
            break;

        case '4':
            for(i = 0; i < strlen(str); i++)
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] = str[i] + 32;
                }
            }
            printf("String in Lowercase = %s\n", str);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}