//WAP TO FIND FIRST REPEATING CHARACTER.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char firstRepeat = '\0';

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                firstRepeat = str[i];
                break;
            }
        }
        if(firstRepeat != '\0')
            break;
    }

    if(firstRepeat != '\0')
        printf("First repeating character = %c\n", firstRepeat);
    else
        printf("No repeating character found.\n");

    return 0;
}