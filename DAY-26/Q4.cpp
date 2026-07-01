//WAP TO CREATE QUIZ APPLICATION.
#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("====================================\n");
    printf("        SIMPLE QUIZ APPLICATION\n");
    printf("====================================\n");

    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is New Delhi.\n");
    }

    // Question 2
    printf("\nQ2. Which language is mainly used for system programming?\n");
    printf("1. C\n");
    printf("2. HTML\n");
    printf("3. CSS\n");
    printf("4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C.\n");
    }

    // Question 3
    printf("\nQ3. How many days are there in a leap year?\n");
    printf("1. 365\n");
    printf("2. 364\n");
    printf("3. 366\n");
    printf("4. 360\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 366.\n");
    }

    // Display Result
    printf("\n====================================\n");
    printf("Quiz Completed!\n");
    printf("Your Score = %d/3\n", score);

    if (score == 3)
    {
        printf("Excellent! You got all answers correct.\n");
    }
    else if (score == 2)
    {
        printf("Good Job!\n");
    }
    else if (score == 1)
    {
        printf("Keep Practicing!\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}