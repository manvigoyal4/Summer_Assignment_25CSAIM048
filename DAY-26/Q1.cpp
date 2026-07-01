//WAP TO CREATE NUMBER GUESSING GAME.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("***** NUMBER GUESSING GAME *****\n");
    printf("Guess a number between 1 and 100\n");

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == number)
        {
            printf("Congratulations! You guessed the number.\n");
            printf("Attempts = %d\n", attempts);
            break;
        }
        else if (guess > number)
        {
            printf("Too High! Try Again.\n");
        }
        else
        {
            printf("Too Low! Try Again.\n");
        }
    }

    return 0;
}